#pragma once
#include "my_list.h"


template<typename T>
class AVL_tree
{

	struct node // структура для представления узлов дерева
	{
		T key;
		unsigned char height;
		node* left;
		node* right;
		node(T k) { key = k; left = right = 0; height = 1; }
	};

	node* root;

	unsigned char height(node* p)
	{
		return p ? p->height : 0;
	}

	int bfactor(node* p)
	{
		return height(p->right) - height(p->left);
	}

	void fixheight(node* p)
	{
		unsigned char hl = height(p->left);
		unsigned char hr = height(p->right);
		p->height = (hl > hr ? hl : hr) + 1;
	}

	node* rotateright(node* p) // правый поворот вокруг p
	{
		node* q = p->left;
		p->left = q->right;
		q->right = p;
		fixheight(p);
		fixheight(q);
		return q;
	}

	node* rotateleft(node* q) // левый поворот вокруг q
	{
		node* p = q->right;
		q->right = p->left;
		p->left = q;
		fixheight(q);
		fixheight(p);
		return p;
	}

	node* balance(node* p) // балансировка узла p
	{
		fixheight(p);
		if (bfactor(p) == 2)
		{
			if (bfactor(p->right) < 0)
				p->right = rotateright(p->right);
			return rotateleft(p);
		}
		if (bfactor(p) == -2)
		{
			if (bfactor(p->left) > 0)
				p->left = rotateleft(p->left);
			return rotateright(p);
		}
		return p; // балансировка не нужна
	}

	node* findmin(node* p) // поиск узла с минимальным ключом в дереве p 
	{
		return p->left ? findmin(p->left) : p;
	}

	node* removemin(node* p) // удаление узла с минимальным ключом из дерева p
	{
		if (p->left == 0)
			return p->right;
		p->left = removemin(p->left);
		return balance(p);
	}

public:
	AVL_tree() : root{ nullptr } {}


	node* insert(node* p, T k, vector<int>* path) // вставка ключа k в дерево с корнем p
	{
		if (!p) return new node(k);
		path->push_back(*(p->key));
		if ((int)(*k) < *(p->key))
			p->left = insert(p->left, k, path);
		else
			p->right = insert(p->right, k, path);
		return balance(p);
	}


	node* remove(node* p, T k, bool* deleted) // удаление ключа k из дерева p
	{
		if (!p) return 0;
		if ((int)(*k) < *(p->key))
			p->left = remove(p->left, k, deleted);
		else if ((int)(*k) > *(p->key))
			p->right = remove(p->right, k, deleted);
		else //  k == p->key 
		{
			*deleted = true;
			node* q = p->left;
			node* r = p->right;
			delete p;
			if (!r) return q;
			node* min = findmin(r);
			min->right = removemin(r);
			min->left = q;
			return balance(min);
		}
		return balance(p);
	}


	vector<int>* insertWrap(T key)
	{
		vector<int>* path{new vector<int>};
		root = insert(root, key, path);
		return path;
	}

	bool* removeWrap(T key)
	{
		bool* is_it_deleted{ new bool };
		*is_it_deleted = false;
		root = remove(root, key, is_it_deleted);
		return is_it_deleted;
	}


	void searchOrderTravers(node* head, int num, vector<T>* res) // прямой обход (1)
	{
		if (head != NULL)
		{
			if (head->key->get_room_num() == num)
				res->push_back(head->key);
			searchOrderTravers(head->left, num, res);
			searchOrderTravers(head->right, num, res);
		}
	}

	auto searchOrderTraversWrapper(int num)
	{
		node* head = root;
		vector<T>* result{ new vector<T> };
		searchOrderTravers(head, num, result);
		return result;
	}


	void sortOrderTravers(node* head, vector<T>* res) // обход с выводом в отсортированном порядке (Центрированный)
	{
		if (head != NULL)
		{
			sortOrderTravers(head->left, res);
			res->push_back(head->key);
			sortOrderTravers(head->right, res);
		}
	}

	vector<T>*& get_all_items()
	{
		node* head = root;
		vector<T>* items{new vector<T>};
		sortOrderTravers(head, items);
		return items;
	}

	void SearchInRange(node* head, vector<T>* res, T low, T high, int& comp) // перегрузка для поиска
	{
		if (head != NULL)
		{
			comp++;
			if (*head->key >= *low && *head->key <= *high)
				res->push_back(head->key);
			if (*head->key >= *low)
				SearchInRange(head->left, res, low, high, comp);
			if (*head->key <= *high)
				SearchInRange(head->right, res, low, high, comp);
		}
	}

	vector<T>* find_in_ranges_pre_order(T low, T high, int& comp) /// решение поисковой задачи
	{
		node* head = root;
		vector<T>* result{ new vector<T> };
		SearchInRange(head, result, low, high, comp);
		return result;
	}


	void draw(node* p, System::Collections::Generic::LinkedList<System::String^>^ res, int level = 3) {
		if (p != NULL) {
			draw(p->right, res, level + 4);
			System::String^ space = "";
			for (int i = 0; i < level; i++) {
				space += " ";
			}
			space += p->key->get_all_date();
			res->AddLast(space);
			draw(p->left, res ,level + 4);
		}
	}

	auto draw_wrap_return()
	{
		node* head = root;
		auto items{ gcnew System::Collections::Generic::LinkedList<System::String^> };
		draw(head, items);
		return items;
	}
};