#pragma once
#include "main_interface.h"
#include "hash_table_class.h"
#include "tree_class.h"
#include "init_mod.h"
#include "hotel_main_classes.h"


class HotelFacade // Ïàòòåğí ôàñàä äëÿ óñïğàâëåíèÿ îñíîâíûìè ñóùíîñòÿìè
{
	AVL_tree<Ñleaning*>* cleaning_data_base;
	SimpleHashTable<Room*>* room_data_base;
	int hash_table_size;
	bool inited;

public:
	HotelFacade() : cleaning_data_base{ nullptr }, room_data_base{ nullptr }, inited{false} {}
	~HotelFacade()
	{
		delete cleaning_data_base;
		delete room_data_base;
	}

	void Init_Data_Bases(int size) // èíèöèàëèçàöèÿ îñíîâíûõ áàç äàííûõ
	{
		Init_Ñleaning_Data_Base cleaning_base;
		Init_Room_Data_Base room_base;
		hash_table_size = size;
		cleaning_data_base = cleaning_base.Init_Data_Base();
		room_data_base = room_base.Init_Data_Base(hash_table_size);
		inited = true;
	}

	bool is_bases_inited()
	{
		return inited;
	}

	vector<string> Init_Cleaning_for_Form()
	{
		ifstream file_for_input("Ñleaning.txt");
		string tmp;
		vector<string> splitted_line;
		vector<string> result;


		while (getline(file_for_input, tmp))
		{
			result.push_back(tmp);
		}
		file_for_input.close();
		return result;
	}


	auto get_all_tree_for_debug()
	{
		return cleaning_data_base;
	}

	auto get_all_tree_for_drawning()
	{
		return cleaning_data_base->draw_wrap_return();
	}

	auto get_all_hash_table()
	{
		return room_data_base;
	}

	auto get_hash_table_size()
	{
		return hash_table_size;
	}

	int insert_element_to_room_data_base(int room_t, int build, int room_num)
	{
		Room* tmp_struct = new Room{ build, room_num, room_t };
		int op_result = room_data_base->add_element(tmp_struct);
		return op_result;
	}

	int delete_element_from_room_data_base(int room_t, int build, int room_num)
	{
		Room* tmp_struct = new Room{ build, room_num, room_t };
		int op_result = room_data_base->delete_element(tmp_struct);
		return op_result;
	}

	auto insert_element_to_cleaning_data_base(int room_num, int build, string emp, int day, int mounth, int year)
	{
		Ñleaning* tmp_struct = new Ñleaning{ emp, build, room_num, {day, mounth, year} };
		auto path = cleaning_data_base->insertWrap(tmp_struct);
		return path;
	}

	bool* delete_element_to_cleaning_data_base(int room_num, int build, string emp, int day, int mounth, int year)
	{
		Ñleaning* tmp_struct = new Ñleaning{ emp, build, room_num, {day, mounth, year} };
		auto process_result = cleaning_data_base->removeWrap(tmp_struct);
		return process_result;
	}

	auto find_all_elements_by_num(int room_num)
	{
		auto elements_found = cleaning_data_base->searchOrderTraversWrapper(room_num);
		return elements_found;
	}

	auto print_intermediate_result(int type, int fir_day, int sec_day,
		int fir_mon, int sec_mon, int fir_yer, int sec_yer, int& comparsions)
	{
		Ñleaning* low{ new Ñleaning{{fir_day, fir_mon, fir_yer}} };
		Ñleaning* high{ new Ñleaning{{sec_day, sec_mon, sec_yer}} };


		auto sub_result = cleaning_data_base->find_in_ranges_pre_order(low, high, comparsions);

		vector<Ñleaning*> result;

		for (auto item : *sub_result)
		{
			auto tmp_2 = room_data_base->search_index(item->get_room_num());
			if (!tmp_2)
				continue;
			auto tmp = tmp_2->get_type();
			if (tmp == type)
				result.push_back(item);
		}
		return result;
	}
};