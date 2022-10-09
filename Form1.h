#pragma once
#include <iostream>
#include <string>
#include "main_interface.h"
using namespace std;

HotelFacade test;
int log_counter = 0;

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ComboBox^ comboType;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ SearchTab;
	private: System::Windows::Forms::GroupBox^ groupBoxResult;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ InputYearFirst;
	private: System::Windows::Forms::Button^ GenerateResult;
	private: System::Windows::Forms::NumericUpDown^ InputMounthFirst;
	private: System::Windows::Forms::NumericUpDown^ InputYearSecond;
	private: System::Windows::Forms::NumericUpDown^ InputDayFirst;
	private: System::Windows::Forms::NumericUpDown^ InputMounthSecond;
	private: System::Windows::Forms::DataGridView^ ResultWindow;

	private: System::Windows::Forms::NumericUpDown^ InputDaySecond;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TabPage^ ContPage;

	private: System::Windows::Forms::GroupBox^ Сleanings;
	private: System::Windows::Forms::Button^ InitData;
	private: System::Windows::Forms::DataGridView^ CleaningWindow;

	private: System::Windows::Forms::GroupBox^ Room_box;
	private: System::Windows::Forms::DataGridView^ RoomsWindow;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Button^ DeleteFromTreeButton;
	private: System::Windows::Forms::Button^ InsertToTreeButton;
	private: System::Windows::Forms::Button^ DeleteFromHashButton;
	private: System::Windows::Forms::Button^ InsertToHashButton;
	private: System::Windows::Forms::TabPage^ DebugTab;
	private: System::Windows::Forms::GroupBox^ DebugClean;

	private: System::Windows::Forms::DataGridView^ dataGridCleanDebug;

	private: System::Windows::Forms::GroupBox^ DebagRoom;

	private: System::Windows::Forms::DataGridView^ dataGridRoomDebug;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::GroupBox^ LogBox;
	private: System::Windows::Forms::DataGridView^ LogGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Rooms;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cleanings;



	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ CleaningEmpInput;
	private: System::Windows::Forms::NumericUpDown^ CleaningYear;
	private: System::Windows::Forms::NumericUpDown^ CleaningMounth;

	private: System::Windows::Forms::NumericUpDown^ CleaningDay;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::NumericUpDown^ RoomBuildInput;
private: System::Windows::Forms::NumericUpDown^ RoomNumberInput;
private: System::Windows::Forms::NumericUpDown^ CleaningBuildInput;
private: System::Windows::Forms::NumericUpDown^ CleaningNumInput;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::NumericUpDown^ HashTableSize;
	public: System::Windows::Forms::TextBox^ TypeRoomInsert;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Results;
	public:
	private:

	private: System::ComponentModel::IContainer^ components;


	private:

		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboType = (gcnew System::Windows::Forms::ComboBox());
			this->SearchTab = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxResult = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->InputYearFirst = (gcnew System::Windows::Forms::NumericUpDown());
			this->GenerateResult = (gcnew System::Windows::Forms::Button());
			this->InputMounthFirst = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputYearSecond = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputDayFirst = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputMounthSecond = (gcnew System::Windows::Forms::NumericUpDown());
			this->ResultWindow = (gcnew System::Windows::Forms::DataGridView());
			this->InputDaySecond = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ContPage = (gcnew System::Windows::Forms::TabPage());
			this->Сleanings = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->HashTableSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->CleaningBuildInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->CleaningNumInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->CleaningEmpInput = (gcnew System::Windows::Forms::TextBox());
			this->CleaningYear = (gcnew System::Windows::Forms::NumericUpDown());
			this->CleaningMounth = (gcnew System::Windows::Forms::NumericUpDown());
			this->CleaningDay = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->DeleteFromTreeButton = (gcnew System::Windows::Forms::Button());
			this->InsertToTreeButton = (gcnew System::Windows::Forms::Button());
			this->InitData = (gcnew System::Windows::Forms::Button());
			this->CleaningWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Cleanings = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Room_box = (gcnew System::Windows::Forms::GroupBox());
			this->TypeRoomInsert = (gcnew System::Windows::Forms::TextBox());
			this->RoomBuildInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->RoomNumberInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->DeleteFromHashButton = (gcnew System::Windows::Forms::Button());
			this->InsertToHashButton = (gcnew System::Windows::Forms::Button());
			this->RoomsWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Rooms = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->DebugTab = (gcnew System::Windows::Forms::TabPage());
			this->LogBox = (gcnew System::Windows::Forms::GroupBox());
			this->LogGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DebugClean = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridCleanDebug = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DebagRoom = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridRoomDebug = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Results = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SearchTab->SuspendLayout();
			this->groupBoxResult->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputYearFirst))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMounthFirst))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputYearSecond))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDayFirst))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMounthSecond))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultWindow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDaySecond))->BeginInit();
			this->ContPage->SuspendLayout();
			this->Сleanings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HashTableSize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningBuildInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningNumInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningYear))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningMounth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningDay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningWindow))->BeginInit();
			this->Room_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomBuildInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomNumberInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomsWindow))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->DebugTab->SuspendLayout();
			this->LogBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogGridView))->BeginInit();
			this->DebugClean->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCleanDebug))->BeginInit();
			this->DebagRoom->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRoomDebug))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label1->Location = System::Drawing::Point(48, 520);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Room type";
			// 
			// comboType
			// 
			this->comboType->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->comboType->FormattingEnabled = true;
			this->comboType->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"1", L"2", L"3" });
			this->comboType->Location = System::Drawing::Point(39, 549);
			this->comboType->Name = L"comboType";
			this->comboType->Size = System::Drawing::Size(132, 36);
			this->comboType->TabIndex = 3;
			this->comboType->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboType_SelectedIndexChanged);
			// 
			// SearchTab
			// 
			this->SearchTab->Controls->Add(this->groupBoxResult);
			this->SearchTab->Location = System::Drawing::Point(4, 22);
			this->SearchTab->Name = L"SearchTab";
			this->SearchTab->Padding = System::Windows::Forms::Padding(3);
			this->SearchTab->Size = System::Drawing::Size(1336, 708);
			this->SearchTab->TabIndex = 2;
			this->SearchTab->Text = L"Поиск";
			this->SearchTab->UseVisualStyleBackColor = true;
			// 
			// groupBoxResult
			// 
			this->groupBoxResult->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBoxResult->Controls->Add(this->label6);
			this->groupBoxResult->Controls->Add(this->InputYearFirst);
			this->groupBoxResult->Controls->Add(this->GenerateResult);
			this->groupBoxResult->Controls->Add(this->InputMounthFirst);
			this->groupBoxResult->Controls->Add(this->InputYearSecond);
			this->groupBoxResult->Controls->Add(this->InputDayFirst);
			this->groupBoxResult->Controls->Add(this->InputMounthSecond);
			this->groupBoxResult->Controls->Add(this->ResultWindow);
			this->groupBoxResult->Controls->Add(this->InputDaySecond);
			this->groupBoxResult->Controls->Add(this->label1);
			this->groupBoxResult->Controls->Add(this->comboType);
			this->groupBoxResult->Controls->Add(this->label5);
			this->groupBoxResult->Controls->Add(this->label2);
			this->groupBoxResult->Controls->Add(this->label3);
			this->groupBoxResult->Controls->Add(this->label4);
			this->groupBoxResult->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxResult->Location = System::Drawing::Point(6, 6);
			this->groupBoxResult->Name = L"groupBoxResult";
			this->groupBoxResult->Size = System::Drawing::Size(1296, 697);
			this->groupBoxResult->TabIndex = 8;
			this->groupBoxResult->TabStop = false;
			this->groupBoxResult->Text = L"Выборка";
			// 
			// label6
			// 
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label6->Location = System::Drawing::Point(198, 575);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 32);
			this->label6->TabIndex = 13;
			this->label6->Text = L"End";
			// 
			// InputYearFirst
			// 
			this->InputYearFirst->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputYearFirst->Location = System::Drawing::Point(502, 520);
			this->InputYearFirst->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2022, 0, 0, 0 });
			this->InputYearFirst->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			this->InputYearFirst->Name = L"InputYearFirst";
			this->InputYearFirst->Size = System::Drawing::Size(83, 36);
			this->InputYearFirst->TabIndex = 5;
			this->InputYearFirst->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			// 
			// GenerateResult
			// 
			this->GenerateResult->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GenerateResult->Location = System::Drawing::Point(39, 629);
			this->GenerateResult->Name = L"GenerateResult";
			this->GenerateResult->Size = System::Drawing::Size(591, 53);
			this->GenerateResult->TabIndex = 3;
			this->GenerateResult->Text = L"Find";
			this->GenerateResult->UseVisualStyleBackColor = true;
			this->GenerateResult->Click += gcnew System::EventHandler(this, &Form1::GenerateResult_Click);
			// 
			// InputMounthFirst
			// 
			this->InputMounthFirst->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputMounthFirst->Location = System::Drawing::Point(398, 520);
			this->InputMounthFirst->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->InputMounthFirst->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputMounthFirst->Name = L"InputMounthFirst";
			this->InputMounthFirst->Size = System::Drawing::Size(88, 36);
			this->InputMounthFirst->TabIndex = 4;
			this->InputMounthFirst->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// InputYearSecond
			// 
			this->InputYearSecond->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputYearSecond->Location = System::Drawing::Point(502, 575);
			this->InputYearSecond->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2022, 0, 0, 0 });
			this->InputYearSecond->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			this->InputYearSecond->Name = L"InputYearSecond";
			this->InputYearSecond->Size = System::Drawing::Size(83, 36);
			this->InputYearSecond->TabIndex = 11;
			this->InputYearSecond->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			// 
			// InputDayFirst
			// 
			this->InputDayFirst->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputDayFirst->Location = System::Drawing::Point(287, 520);
			this->InputDayFirst->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->InputDayFirst->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputDayFirst->Name = L"InputDayFirst";
			this->InputDayFirst->Size = System::Drawing::Size(88, 36);
			this->InputDayFirst->TabIndex = 3;
			this->InputDayFirst->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// InputMounthSecond
			// 
			this->InputMounthSecond->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputMounthSecond->Location = System::Drawing::Point(398, 573);
			this->InputMounthSecond->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->InputMounthSecond->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputMounthSecond->Name = L"InputMounthSecond";
			this->InputMounthSecond->Size = System::Drawing::Size(88, 36);
			this->InputMounthSecond->TabIndex = 10;
			this->InputMounthSecond->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// ResultWindow
			// 
			this->ResultWindow->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->ResultWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ResultWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Results });
			this->ResultWindow->Location = System::Drawing::Point(39, 35);
			this->ResultWindow->Name = L"ResultWindow";
			this->ResultWindow->Size = System::Drawing::Size(1218, 438);
			this->ResultWindow->TabIndex = 2;
			this->ResultWindow->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// InputDaySecond
			// 
			this->InputDaySecond->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputDaySecond->Location = System::Drawing::Point(287, 575);
			this->InputDaySecond->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->InputDaySecond->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputDaySecond->Name = L"InputDaySecond";
			this->InputDaySecond->Size = System::Drawing::Size(88, 36);
			this->InputDaySecond->TabIndex = 9;
			this->InputDaySecond->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label5->Location = System::Drawing::Point(193, 520);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 32);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Beginning";
			// 
			// label2
			// 
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label2->Location = System::Drawing::Point(310, 489);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 24);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Day";
			// 
			// label3
			// 
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label3->Location = System::Drawing::Point(398, 489);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Mounth";
			// 
			// label4
			// 
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label4->Location = System::Drawing::Point(506, 489);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Year";
			// 
			// ContPage
			// 
			this->ContPage->Controls->Add(this->Сleanings);
			this->ContPage->Controls->Add(this->Room_box);
			this->ContPage->Location = System::Drawing::Point(4, 22);
			this->ContPage->Name = L"ContPage";
			this->ContPage->Padding = System::Windows::Forms::Padding(3);
			this->ContPage->Size = System::Drawing::Size(1336, 708);
			this->ContPage->TabIndex = 0;
			this->ContPage->Text = L"Контейнеры";
			this->ContPage->UseVisualStyleBackColor = true;
			// 
			// Сleanings
			// 
			this->Сleanings->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Сleanings->Controls->Add(this->label16);
			this->Сleanings->Controls->Add(this->HashTableSize);
			this->Сleanings->Controls->Add(this->CleaningBuildInput);
			this->Сleanings->Controls->Add(this->CleaningNumInput);
			this->Сleanings->Controls->Add(this->label15);
			this->Сleanings->Controls->Add(this->label14);
			this->Сleanings->Controls->Add(this->label13);
			this->Сleanings->Controls->Add(this->CleaningEmpInput);
			this->Сleanings->Controls->Add(this->CleaningYear);
			this->Сleanings->Controls->Add(this->CleaningMounth);
			this->Сleanings->Controls->Add(this->CleaningDay);
			this->Сleanings->Controls->Add(this->label8);
			this->Сleanings->Controls->Add(this->label9);
			this->Сleanings->Controls->Add(this->label10);
			this->Сleanings->Controls->Add(this->DeleteFromTreeButton);
			this->Сleanings->Controls->Add(this->InsertToTreeButton);
			this->Сleanings->Controls->Add(this->InitData);
			this->Сleanings->Controls->Add(this->CleaningWindow);
			this->Сleanings->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Сleanings->Location = System::Drawing::Point(654, 6);
			this->Сleanings->Name = L"Сleanings";
			this->Сleanings->Size = System::Drawing::Size(676, 646);
			this->Сleanings->TabIndex = 6;
			this->Сleanings->TabStop = false;
			this->Сleanings->Text = L"List of Сleanings";
			// 
			// label16
			// 
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label16->Location = System::Drawing::Point(551, 8);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(131, 24);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Hash Table Size";
			// 
			// HashTableSize
			// 
			this->HashTableSize->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->HashTableSize->Location = System::Drawing::Point(606, 35);
			this->HashTableSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->HashTableSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->HashTableSize->Name = L"HashTableSize";
			this->HashTableSize->Size = System::Drawing::Size(70, 33);
			this->HashTableSize->TabIndex = 22;
			this->HashTableSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// CleaningBuildInput
			// 
			this->CleaningBuildInput->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CleaningBuildInput->Location = System::Drawing::Point(193, 599);
			this->CleaningBuildInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->CleaningBuildInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->CleaningBuildInput->Name = L"CleaningBuildInput";
			this->CleaningBuildInput->Size = System::Drawing::Size(88, 33);
			this->CleaningBuildInput->TabIndex = 21;
			this->CleaningBuildInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// CleaningNumInput
			// 
			this->CleaningNumInput->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CleaningNumInput->Location = System::Drawing::Point(99, 600);
			this->CleaningNumInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->CleaningNumInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->CleaningNumInput->Name = L"CleaningNumInput";
			this->CleaningNumInput->Size = System::Drawing::Size(88, 33);
			this->CleaningNumInput->TabIndex = 20;
			this->CleaningNumInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label15
			// 
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label15->Location = System::Drawing::Point(6, 562);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 24);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Employee";
			// 
			// label14
			// 
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label14->Location = System::Drawing::Point(89, 562);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(117, 24);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Room number";
			// 
			// label13
			// 
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label13->Location = System::Drawing::Point(212, 562);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(76, 24);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Building";
			// 
			// CleaningEmpInput
			// 
			this->CleaningEmpInput->Location = System::Drawing::Point(0, 599);
			this->CleaningEmpInput->Name = L"CleaningEmpInput";
			this->CleaningEmpInput->Size = System::Drawing::Size(93, 33);
			this->CleaningEmpInput->TabIndex = 17;
			// 
			// CleaningYear
			// 
			this->CleaningYear->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CleaningYear->Location = System::Drawing::Point(475, 599);
			this->CleaningYear->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2022, 0, 0, 0 });
			this->CleaningYear->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			this->CleaningYear->Name = L"CleaningYear";
			this->CleaningYear->Size = System::Drawing::Size(83, 33);
			this->CleaningYear->TabIndex = 11;
			this->CleaningYear->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			// 
			// CleaningMounth
			// 
			this->CleaningMounth->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CleaningMounth->Location = System::Drawing::Point(381, 599);
			this->CleaningMounth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->CleaningMounth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->CleaningMounth->Name = L"CleaningMounth";
			this->CleaningMounth->Size = System::Drawing::Size(88, 33);
			this->CleaningMounth->TabIndex = 10;
			this->CleaningMounth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// CleaningDay
			// 
			this->CleaningDay->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CleaningDay->Location = System::Drawing::Point(287, 599);
			this->CleaningDay->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->CleaningDay->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->CleaningDay->Name = L"CleaningDay";
			this->CleaningDay->Size = System::Drawing::Size(88, 33);
			this->CleaningDay->TabIndex = 9;
			this->CleaningDay->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label8
			// 
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label8->Location = System::Drawing::Point(294, 562);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 24);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Day";
			// 
			// label9
			// 
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label9->Location = System::Drawing::Point(381, 562);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 23);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Mounth";
			// 
			// label10
			// 
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label10->Location = System::Drawing::Point(489, 562);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 23);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Year";
			// 
			// DeleteFromTreeButton
			// 
			this->DeleteFromTreeButton->Location = System::Drawing::Point(576, 325);
			this->DeleteFromTreeButton->Name = L"DeleteFromTreeButton";
			this->DeleteFromTreeButton->Size = System::Drawing::Size(26, 309);
			this->DeleteFromTreeButton->TabIndex = 7;
			this->DeleteFromTreeButton->Text = L"Delete";
			this->DeleteFromTreeButton->UseVisualStyleBackColor = true;
			this->DeleteFromTreeButton->Click += gcnew System::EventHandler(this, &Form1::DeleteFromTreeButton_Click);
			// 
			// InsertToTreeButton
			// 
			this->InsertToTreeButton->Location = System::Drawing::Point(576, 35);
			this->InsertToTreeButton->Name = L"InsertToTreeButton";
			this->InsertToTreeButton->Size = System::Drawing::Size(26, 284);
			this->InsertToTreeButton->TabIndex = 6;
			this->InsertToTreeButton->Text = L"Insert";
			this->InsertToTreeButton->UseVisualStyleBackColor = true;
			this->InsertToTreeButton->Click += gcnew System::EventHandler(this, &Form1::InsertToTreeButton_Click);
			// 
			// InitData
			// 
			this->InitData->Location = System::Drawing::Point(608, 74);
			this->InitData->Name = L"InitData";
			this->InitData->Size = System::Drawing::Size(62, 560);
			this->InitData->TabIndex = 5;
			this->InitData->Text = L"Init Data";
			this->InitData->UseVisualStyleBackColor = true;
			this->InitData->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// CleaningWindow
			// 
			this->CleaningWindow->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->CleaningWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CleaningWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Cleanings });
			this->CleaningWindow->Location = System::Drawing::Point(6, 35);
			this->CleaningWindow->Name = L"CleaningWindow";
			this->CleaningWindow->Size = System::Drawing::Size(564, 524);
			this->CleaningWindow->TabIndex = 2;
			// 
			// Cleanings
			// 
			this->Cleanings->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Cleanings->HeaderText = L"Cleanings";
			this->Cleanings->Name = L"Cleanings";
			this->Cleanings->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Room_box
			// 
			this->Room_box->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Room_box->Controls->Add(this->TypeRoomInsert);
			this->Room_box->Controls->Add(this->RoomBuildInput);
			this->Room_box->Controls->Add(this->RoomNumberInput);
			this->Room_box->Controls->Add(this->label12);
			this->Room_box->Controls->Add(this->label11);
			this->Room_box->Controls->Add(this->label7);
			this->Room_box->Controls->Add(this->DeleteFromHashButton);
			this->Room_box->Controls->Add(this->InsertToHashButton);
			this->Room_box->Controls->Add(this->RoomsWindow);
			this->Room_box->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Room_box->Location = System::Drawing::Point(6, 6);
			this->Room_box->Name = L"Room_box";
			this->Room_box->Size = System::Drawing::Size(642, 646);
			this->Room_box->TabIndex = 7;
			this->Room_box->TabStop = false;
			this->Room_box->Text = L"List of Rooms";
			// 
			// TypeRoomInsert
			// 
			this->TypeRoomInsert->Location = System::Drawing::Point(39, 601);
			this->TypeRoomInsert->Name = L"TypeRoomInsert";
			this->TypeRoomInsert->Size = System::Drawing::Size(132, 33);
			this->TypeRoomInsert->TabIndex = 24;
			// 
			// RoomBuildInput
			// 
			this->RoomBuildInput->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->RoomBuildInput->Location = System::Drawing::Point(396, 601);
			this->RoomBuildInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->RoomBuildInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RoomBuildInput->Name = L"RoomBuildInput";
			this->RoomBuildInput->Size = System::Drawing::Size(207, 33);
			this->RoomBuildInput->TabIndex = 12;
			this->RoomBuildInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// RoomNumberInput
			// 
			this->RoomNumberInput->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->RoomNumberInput->Location = System::Drawing::Point(177, 601);
			this->RoomNumberInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->RoomNumberInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RoomNumberInput->Name = L"RoomNumberInput";
			this->RoomNumberInput->Size = System::Drawing::Size(213, 33);
			this->RoomNumberInput->TabIndex = 11;
			this->RoomNumberInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label12
			// 
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label12->Location = System::Drawing::Point(462, 562);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(127, 24);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Building";
			// 
			// label11
			// 
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label11->Location = System::Drawing::Point(239, 562);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(127, 24);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Room number";
			// 
			// label7
			// 
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label7->Location = System::Drawing::Point(52, 562);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 24);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Room type";
			// 
			// DeleteFromHashButton
			// 
			this->DeleteFromHashButton->Location = System::Drawing::Point(609, 325);
			this->DeleteFromHashButton->Name = L"DeleteFromHashButton";
			this->DeleteFromHashButton->Size = System::Drawing::Size(27, 309);
			this->DeleteFromHashButton->TabIndex = 4;
			this->DeleteFromHashButton->Text = L"Delete";
			this->DeleteFromHashButton->UseVisualStyleBackColor = true;
			this->DeleteFromHashButton->Click += gcnew System::EventHandler(this, &Form1::DeleteFromHashButton_Click);
			// 
			// InsertToHashButton
			// 
			this->InsertToHashButton->Location = System::Drawing::Point(609, 35);
			this->InsertToHashButton->Name = L"InsertToHashButton";
			this->InsertToHashButton->Size = System::Drawing::Size(27, 284);
			this->InsertToHashButton->TabIndex = 3;
			this->InsertToHashButton->Text = L"Insert";
			this->InsertToHashButton->UseVisualStyleBackColor = true;
			this->InsertToHashButton->Click += gcnew System::EventHandler(this, &Form1::InsertToHashButton_Click);
			// 
			// RoomsWindow
			// 
			this->RoomsWindow->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->RoomsWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RoomsWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Rooms });
			this->RoomsWindow->Location = System::Drawing::Point(39, 34);
			this->RoomsWindow->Name = L"RoomsWindow";
			this->RoomsWindow->Size = System::Drawing::Size(564, 525);
			this->RoomsWindow->TabIndex = 2;
			// 
			// Rooms
			// 
			this->Rooms->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Rooms->HeaderText = L"Rooms";
			this->Rooms->Name = L"Rooms";
			this->Rooms->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->ContPage);
			this->tabControl1->Controls->Add(this->SearchTab);
			this->tabControl1->Controls->Add(this->DebugTab);
			this->tabControl1->Location = System::Drawing::Point(20, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1344, 734);
			this->tabControl1->TabIndex = 9;
			// 
			// DebugTab
			// 
			this->DebugTab->Controls->Add(this->LogBox);
			this->DebugTab->Controls->Add(this->DebugClean);
			this->DebugTab->Controls->Add(this->DebagRoom);
			this->DebugTab->Location = System::Drawing::Point(4, 22);
			this->DebugTab->Name = L"DebugTab";
			this->DebugTab->Padding = System::Windows::Forms::Padding(3);
			this->DebugTab->Size = System::Drawing::Size(1336, 708);
			this->DebugTab->TabIndex = 3;
			this->DebugTab->Text = L"Окно отладки";
			this->DebugTab->UseVisualStyleBackColor = true;
			// 
			// LogBox
			// 
			this->LogBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LogBox->Controls->Add(this->LogGridView);
			this->LogBox->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LogBox->Location = System::Drawing::Point(903, 6);
			this->LogBox->Name = L"LogBox";
			this->LogBox->Size = System::Drawing::Size(433, 685);
			this->LogBox->TabIndex = 10;
			this->LogBox->TabStop = false;
			this->LogBox->Text = L"Лог";
			// 
			// LogGridView
			// 
			this->LogGridView->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->LogGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->LogGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn3 });
			this->LogGridView->Location = System::Drawing::Point(39, 35);
			this->LogGridView->Name = L"LogGridView";
			this->LogGridView->Size = System::Drawing::Size(363, 613);
			this->LogGridView->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Таблица";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// DebugClean
			// 
			this->DebugClean->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DebugClean->Controls->Add(this->dataGridCleanDebug);
			this->DebugClean->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DebugClean->Location = System::Drawing::Point(461, 6);
			this->DebugClean->Name = L"DebugClean";
			this->DebugClean->Size = System::Drawing::Size(433, 685);
			this->DebugClean->TabIndex = 9;
			this->DebugClean->TabStop = false;
			this->DebugClean->Text = L"Дерево поиска (Cleaning)";
			// 
			// dataGridCleanDebug
			// 
			this->dataGridCleanDebug->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridCleanDebug->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridCleanDebug->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->dataGridCleanDebug->Location = System::Drawing::Point(39, 35);
			this->dataGridCleanDebug->Name = L"dataGridCleanDebug";
			this->dataGridCleanDebug->Size = System::Drawing::Size(363, 613);
			this->dataGridCleanDebug->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Центрированный обход";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// DebagRoom
			// 
			this->DebagRoom->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DebagRoom->Controls->Add(this->dataGridRoomDebug);
			this->DebagRoom->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DebagRoom->Location = System::Drawing::Point(6, 6);
			this->DebagRoom->Name = L"DebagRoom";
			this->DebagRoom->Size = System::Drawing::Size(449, 685);
			this->DebagRoom->TabIndex = 8;
			this->DebagRoom->TabStop = false;
			this->DebagRoom->Text = L"Хэш таблица (Rooms)";
			// 
			// dataGridRoomDebug
			// 
			this->dataGridRoomDebug->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridRoomDebug->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridRoomDebug->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->dataGridRoomDebug->Location = System::Drawing::Point(39, 35);
			this->dataGridRoomDebug->Name = L"dataGridRoomDebug";
			this->dataGridRoomDebug->Size = System::Drawing::Size(379, 613);
			this->dataGridRoomDebug->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Таблица";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// Results
			// 
			this->Results->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Results->HeaderText = L"Результат поиска";
			this->Results->Name = L"Results";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1370, 684);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Kursed";
			this->SearchTab->ResumeLayout(false);
			this->groupBoxResult->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputYearFirst))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMounthFirst))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputYearSecond))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDayFirst))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMounthSecond))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultWindow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDaySecond))->EndInit();
			this->ContPage->ResumeLayout(false);
			this->Сleanings->ResumeLayout(false);
			this->Сleanings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HashTableSize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningBuildInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningNumInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningYear))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningMounth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningDay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningWindow))->EndInit();
			this->Room_box->ResumeLayout(false);
			this->Room_box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomBuildInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomNumberInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomsWindow))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->DebugTab->ResumeLayout(false);
			this->LogBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogGridView))->EndInit();
			this->DebugClean->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCleanDebug))->EndInit();
			this->DebagRoom->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRoomDebug))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void print_room_data_base()
	{
		auto hash_table = test.get_all_hash_table();
		auto table_size = test.get_hash_table_size();

		RoomsWindow->Rows->Clear();

		RoomsWindow->ColumnCount = 1;
		RoomsWindow->RowCount = table_size;
		auto j = 0;
		for (auto item : *hash_table)
		{
			if (item.cell_status == status::occupied)
			{
				RoomsWindow->Rows[j]->Cells[0]->Value = item.data->get_all_data_string();
				++j;
			}
		}
	}
	
	private: System::Void print_cleaning_debug_data()
	{
		auto res = test.get_all_tree_for_drawning();

		dataGridCleanDebug->ColumnCount = 1;
		dataGridCleanDebug->RowCount = res->Count;

		auto tmp = res->First;
		for (auto i = 0; i < res->Count; i++)
		{
			dataGridCleanDebug->Rows[i]->Cells[0]->Value = tmp->Value;
			tmp = tmp->Next;
		}
	}

	private: System::Void print_room_debug_data()
	{
		auto hash_table = test.get_all_hash_table();
		auto table_size = test.get_hash_table_size();

		dataGridRoomDebug->ColumnCount = 1;
		dataGridRoomDebug->RowCount = table_size;

		auto i = 0;
		for (auto item : *hash_table)
		{
			if (item.cell_status == status::free)
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = "Free";
			else if (item.cell_status == status::deleted)
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = "Deleted";
			else
			{
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = item.data->get_all_data_string();
			}
			++i;
		}
	}

	private: System::Void print_cleaning_data_base()
	{
		auto tree = test.get_all_tree_for_debug()->get_all_items();

		CleaningWindow->ColumnCount = 1;
		CleaningWindow->RowCount = tree->size();

		auto i = 0;
		for (auto item : *tree)
		{
			CleaningWindow->Rows[i]->Cells[0]->Value = item->get_all_data_string();
			++i;
		}
	}

private: System::Void GenerateResult_Click(System::Object^ sender, System::EventArgs^ e) {  // Result button
	if (test.is_bases_inited())
	{
		auto room_type = Convert::ToInt32(comboType->SelectedItem);

		auto fir_day = Convert::ToInt32(InputDayFirst->Value);
		auto sec_day = Convert::ToInt32(InputDaySecond->Value);

		auto fir_mon = Convert::ToInt32(InputMounthFirst->Value);
		auto sec_mon = Convert::ToInt32(InputMounthSecond->Value);

		auto fir_yer = Convert::ToInt32(InputYearFirst->Value);
		auto sec_yer = Convert::ToInt32(InputYearSecond->Value);

		int comparsions{};

		auto res = test.print_intermediate_result(room_type, fir_day, sec_day,
			fir_mon, sec_mon, fir_yer, sec_yer, comparsions);

		if (res.size() != 0)
		{
			ResultWindow->ColumnCount = 1;
			ResultWindow->RowCount = res.size();

			for (auto i = 0; i < res.size(); ++i)
			{
				ResultWindow->Rows[i]->Cells[0]->Value = res[i]->get_all_data_string() + " Room type: " + room_type;
			}
			LogGridView->Rows[log_counter]->Cells[0]->Value = "[Search] " + comparsions + " comparsions";
			log_counter++;

		}
		else
			MessageBox::Show("Результат с такими исходными данными отсутствует", "Поиск");
	}
	else
		MessageBox::Show("Необходимо инициализировать базы данных(Init)", "Data bases");
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
		auto size = Convert::ToInt32(HashTableSize->Value);
		test.Init_Data_Bases(size); // инициализация баз данных

		// show Cleanings
		print_cleaning_data_base();
		// show Rooms
		print_room_data_base();

		print_room_debug_data();
		print_cleaning_debug_data();
		LogGridView->ColumnCount = 1; // создание лога на 100 записей
		LogGridView->RowCount = 100;
		MessageBox::Show("Создана хэш таблица на " + test.get_hash_table_size() + " записей", "Data bases");
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void comboType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void InsertToHashButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// room input
	if (test.is_bases_inited())
	{
		auto room_t = TypeRoomInsert->Text;
		auto room_num = Convert::ToInt32(RoomNumberInput->Value);
		auto room_build = Convert::ToInt32(RoomBuildInput->Value);

		std::string tmp;
		MarshalString(room_t, tmp);

		int room_type_int{};

		if (tmp == "Standard")
			room_type_int = 0;
		else if(tmp == "Superior")
			room_type_int = 1;
		else if (tmp == "Studio")
			room_type_int = 2;
		else if (tmp == "Delux")
			room_type_int = 3;
		else
		{
			MessageBox::Show("Не корректен тип комнаты", "Room::Insert");
			return;
		}
		

		auto operation_result = test.insert_element_to_room_data_base(room_type_int, room_build, room_num);
		if (operation_result == -1)
			MessageBox::Show("Ключ не уникален", "Room::Insert");
		else if (operation_result == -2)
			MessageBox::Show("Попытка вставки в переполненную хэш-таблицу", "Room::Insert");
		else
		{
			print_room_data_base();
			print_room_debug_data();
			LogGridView->Rows[log_counter]->Cells[0]->Value = "Hash(" + room_num + ") First: "
				+ room_num % test.get_hash_table_size() + " Final: " + operation_result;
			log_counter++;
		}
	}
	else
		MessageBox::Show("Необходимо инициализировать базы данных(Init)", "Data bases");
}


private: System::Void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}


private: System::Void DeleteFromHashButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (test.is_bases_inited())
	{
		// инициализация данных из формы
		auto room_t = TypeRoomInsert->Text;
		auto room_num = Convert::ToInt32(RoomNumberInput->Value);
		auto room_build = Convert::ToInt32(RoomBuildInput->Value);

		std::string tmp;
		MarshalString(room_t, tmp);

		int room_type_int{};

		if (tmp == "Standard")
			room_type_int = 0;
		else if (tmp == "Superior")
			room_type_int = 1;
		else if (tmp == "Studio")
			room_type_int = 2;
		else if (tmp == "Delux")
			room_type_int = 3;
		else
		{
			MessageBox::Show("Не корректен тип комнаты", "Room::Insert");
			return;
		}

		auto operation_result = test.delete_element_from_room_data_base(room_type_int, room_build, room_num);
		if (operation_result == -1)
			MessageBox::Show("Элемент отсутсвует в таблице", "Room::Delete");
		else
		{
			// удаление из побочной таблицы
			auto found = test.find_all_elements_by_num(room_num);
			if (found->size() != 0)
			{
				MessageBox::Show("Будут удалены " + found->size() + " записей побочной таблицы", "Удаление из главной таблицы");
				for (auto item : *found)
				{
					test.delete_element_to_cleaning_data_base(item->get_room_num(), item->get_build(),
						item->get_emp(), item->get_day(), item->get_mounth(), item->get_year());
					LogGridView->Rows[log_counter]->Cells[0]->Value = item->get_room_num() + " deleted from tree";
					log_counter++;
				}
			}

			print_room_data_base();
			print_cleaning_data_base();
			print_cleaning_debug_data();
			print_room_debug_data();
			LogGridView->Rows[log_counter]->Cells[0]->Value = "Hash(" + room_num + ")->Deleted";
			log_counter++;
		}
	}
	else
		MessageBox::Show("Необходимо инициализировать базы данных(Init)", "Data bases");
}
private: System::Void InsertToTreeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (test.is_bases_inited())
	{
		// получаем данные из формы
		auto emp = CleaningEmpInput->Text;
		auto room_num = Convert::ToInt32(CleaningNumInput->Value);
		auto room_build = Convert::ToInt32(CleaningBuildInput->Value);
		auto day = Convert::ToInt32(CleaningDay->Value);
		auto mounth = Convert::ToInt32(CleaningMounth->Value);
		auto year = Convert::ToInt32(CleaningYear->Value);
		// маршализация строки
		std::string tmp;
		MarshalString(emp, tmp); 
		// добавление 
		auto tree_path = test.insert_element_to_cleaning_data_base(room_num, room_build, tmp, day, mounth, year);

		auto full_tree_path = room_num + " Inserted|Path: ";
		for (auto item : *tree_path)
			full_tree_path += (item + "-> ");
		// обновление данныхв форме
		print_cleaning_data_base();
		print_cleaning_debug_data();
		LogGridView->Rows[log_counter]->Cells[0]->Value = full_tree_path;
		log_counter++;
	}
	else
		MessageBox::Show("Необходимо инициализировать базы данных(Init)", "Data bases");
}
private: System::Void DeleteFromTreeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (test.is_bases_inited())
	{
		// получаем данные из формы
		auto emp = CleaningEmpInput->Text;
		auto room_num = Convert::ToInt32(CleaningNumInput->Value);
		auto room_build = Convert::ToInt32(CleaningBuildInput->Value);
		auto day = Convert::ToInt32(CleaningDay->Value);
		auto mounth = Convert::ToInt32(CleaningMounth->Value);
		auto year = Convert::ToInt32(CleaningYear->Value);
		// маршализация строки
		std::string tmp;
		MarshalString(emp, tmp);

		auto tree_path = test.delete_element_to_cleaning_data_base(room_num, room_build, tmp, day, mounth, year);

		if (*tree_path)
		{
			// обновление данныхв форме
			print_cleaning_data_base();
			print_cleaning_debug_data();
			LogGridView->Rows[log_counter]->Cells[0]->Value = room_num + " deleted from tree";
			log_counter++;
		}
		else
			MessageBox::Show("Указанный элемент остуствует в дереве", "Cleaning delete");
	}
	else
		MessageBox::Show("Необходимо инициализировать базы данных(Init)", "Data bases");
}
};
}
