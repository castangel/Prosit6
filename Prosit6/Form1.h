#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox_id;
	protected:

	private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::Label^ label_nom;
	private: System::Windows::Forms::TextBox^ textBox_nom;


	private: System::Windows::Forms::Label^ label_prenom;
	private: System::Windows::Forms::TextBox^ textBox_prenom;


	private: System::Windows::Forms::Label^ label_adresses;
	private: System::Windows::Forms::Button^ button_save;


	private: System::Windows::Forms::Button^ button_supprimer;

	private: System::Windows::Forms::Button^ button_maj;

	private: System::Windows::Forms::Button^ button_nouveau;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label_message;
	private: System::Windows::Forms::TextBox^ textBox_message;
	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_adresse;
	private: System::Windows::Forms::Label^ label_ville;


	private: System::Windows::Forms::TextBox^ textBox_ville;
	private: System::Windows::Forms::Label^ label_cp;


	private: System::Windows::Forms::TextBox^ textBox_cp;
	private: int id_adresse;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->textBox_nom = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->textBox_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label_adresses = (gcnew System::Windows::Forms::Label());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->button_supprimer = (gcnew System::Windows::Forms::Button());
			this->button_maj = (gcnew System::Windows::Forms::Button());
			this->button_nouveau = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label_message = (gcnew System::Windows::Forms::Label());
			this->textBox_message = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label_ville = (gcnew System::Windows::Forms::Label());
			this->textBox_ville = (gcnew System::Windows::Forms::TextBox());
			this->label_cp = (gcnew System::Windows::Forms::Label());
			this->textBox_cp = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(203, 36);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(349, 251);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::mous_click);
			// 
			// textBox_id
			// 
			this->textBox_id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->textBox_id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_id->Enabled = false;
			this->textBox_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_id->ForeColor = System::Drawing::Color::White;
			this->textBox_id->Location = System::Drawing::Point(20, 36);
			this->textBox_id->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->ReadOnly = true;
			this->textBox_id->Size = System::Drawing::Size(170, 19);
			this->textBox_id->TabIndex = 1;
			this->textBox_id->Text = L"0";
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->ForeColor = System::Drawing::Color::White;
			this->label_id->Location = System::Drawing::Point(20, 17);
			this->label_id->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(16, 13);
			this->label_id->TabIndex = 2;
			this->label_id->Text = L"Id";
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->ForeColor = System::Drawing::Color::White;
			this->label_nom->Location = System::Drawing::Point(20, 65);
			this->label_nom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(29, 13);
			this->label_nom->TabIndex = 4;
			this->label_nom->Text = L"Nom";
			// 
			// textBox_nom
			// 
			this->textBox_nom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->textBox_nom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_nom->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox_nom->ForeColor = System::Drawing::Color::White;
			this->textBox_nom->Location = System::Drawing::Point(20, 84);
			this->textBox_nom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_nom->Name = L"textBox_nom";
			this->textBox_nom->Size = System::Drawing::Size(170, 20);
			this->textBox_nom->TabIndex = 3;
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->ForeColor = System::Drawing::Color::White;
			this->label_prenom->Location = System::Drawing::Point(22, 116);
			this->label_prenom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(43, 13);
			this->label_prenom->TabIndex = 6;
			this->label_prenom->Text = L"Prénom";
			// 
			// textBox_prenom
			// 
			this->textBox_prenom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->textBox_prenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_prenom->ForeColor = System::Drawing::Color::White;
			this->textBox_prenom->Location = System::Drawing::Point(22, 135);
			this->textBox_prenom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_prenom->Name = L"textBox_prenom";
			this->textBox_prenom->Size = System::Drawing::Size(168, 20);
			this->textBox_prenom->TabIndex = 5;
			// 
			// label_adresses
			// 
			this->label_adresses->AutoSize = true;
			this->label_adresses->ForeColor = System::Drawing::Color::White;
			this->label_adresses->Location = System::Drawing::Point(201, 17);
			this->label_adresses->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_adresses->Name = L"label_adresses";
			this->label_adresses->Size = System::Drawing::Size(50, 13);
			this->label_adresses->TabIndex = 7;
			this->label_adresses->Text = L"Adresses";
			// 
			// button_save
			// 
			this->button_save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->button_save->FlatAppearance->BorderSize = 0;
			this->button_save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_save->ForeColor = System::Drawing::Color::White;
			this->button_save->Location = System::Drawing::Point(108, 205);
			this->button_save->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(81, 83);
			this->button_save->TabIndex = 8;
			this->button_save->Text = L"Enregistrer";
			this->button_save->UseVisualStyleBackColor = false;
			this->button_save->Click += gcnew System::EventHandler(this, &Form1::button_save_Click);
			// 
			// button_supprimer
			// 
			this->button_supprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->button_supprimer->FlatAppearance->BorderSize = 0;
			this->button_supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_supprimer->ForeColor = System::Drawing::Color::White;
			this->button_supprimer->Location = System::Drawing::Point(22, 263);
			this->button_supprimer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_supprimer->Name = L"button_supprimer";
			this->button_supprimer->Size = System::Drawing::Size(82, 24);
			this->button_supprimer->TabIndex = 9;
			this->button_supprimer->Text = L"Supprimer";
			this->button_supprimer->UseVisualStyleBackColor = false;
			this->button_supprimer->Click += gcnew System::EventHandler(this, &Form1::button_supprimer_Click);
			// 
			// button_maj
			// 
			this->button_maj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->button_maj->FlatAppearance->BorderSize = 0;
			this->button_maj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_maj->ForeColor = System::Drawing::Color::White;
			this->button_maj->Location = System::Drawing::Point(22, 234);
			this->button_maj->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_maj->Name = L"button_maj";
			this->button_maj->Size = System::Drawing::Size(82, 24);
			this->button_maj->TabIndex = 10;
			this->button_maj->Text = L"Mise à jour";
			this->button_maj->UseVisualStyleBackColor = false;
			this->button_maj->Click += gcnew System::EventHandler(this, &Form1::button_maj_Click);
			// 
			// button_nouveau
			// 
			this->button_nouveau->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->button_nouveau->FlatAppearance->BorderSize = 0;
			this->button_nouveau->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_nouveau->ForeColor = System::Drawing::Color::White;
			this->button_nouveau->Location = System::Drawing::Point(22, 205);
			this->button_nouveau->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_nouveau->Name = L"button_nouveau";
			this->button_nouveau->Size = System::Drawing::Size(82, 24);
			this->button_nouveau->TabIndex = 11;
			this->button_nouveau->Text = L"Nouveau";
			this->button_nouveau->UseVisualStyleBackColor = false;
			this->button_nouveau->Click += gcnew System::EventHandler(this, &Form1::button_nouveau_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(22, 176);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(38, 24);
			this->button5->TabIndex = 12;
			this->button5->Text = L"<<";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(65, 176);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(38, 24);
			this->button6->TabIndex = 13;
			this->button6->Text = L"<";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::previous);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(108, 176);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(38, 24);
			this->button7->TabIndex = 14;
			this->button7->Text = L">";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(151, 176);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(38, 24);
			this->button8->TabIndex = 15;
			this->button8->Text = L">>";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// label_message
			// 
			this->label_message->AutoSize = true;
			this->label_message->ForeColor = System::Drawing::Color::White;
			this->label_message->Location = System::Drawing::Point(22, 353);
			this->label_message->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_message->Name = L"label_message";
			this->label_message->Size = System::Drawing::Size(50, 13);
			this->label_message->TabIndex = 16;
			this->label_message->Text = L"Message";
			// 
			// textBox_message
			// 
			this->textBox_message->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_message->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->textBox_message->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_message->Location = System::Drawing::Point(24, 369);
			this->textBox_message->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_message->Multiline = true;
			this->textBox_message->Name = L"textBox_message";
			this->textBox_message->Size = System::Drawing::Size(528, 88);
			this->textBox_message->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(24, 297);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Adresse";
			// 
			// textBox_adresse
			// 
			this->textBox_adresse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->textBox_adresse->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_adresse->ForeColor = System::Drawing::Color::White;
			this->textBox_adresse->Location = System::Drawing::Point(24, 316);
			this->textBox_adresse->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_adresse->Name = L"textBox_adresse";
			this->textBox_adresse->Size = System::Drawing::Size(170, 20);
			this->textBox_adresse->TabIndex = 18;
			// 
			// label_ville
			// 
			this->label_ville->AutoSize = true;
			this->label_ville->ForeColor = System::Drawing::Color::White;
			this->label_ville->Location = System::Drawing::Point(203, 297);
			this->label_ville->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_ville->Name = L"label_ville";
			this->label_ville->Size = System::Drawing::Size(26, 13);
			this->label_ville->TabIndex = 21;
			this->label_ville->Text = L"Ville";
			// 
			// textBox_ville
			// 
			this->textBox_ville->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->textBox_ville->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_ville->ForeColor = System::Drawing::Color::White;
			this->textBox_ville->Location = System::Drawing::Point(203, 316);
			this->textBox_ville->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_ville->Name = L"textBox_ville";
			this->textBox_ville->Size = System::Drawing::Size(170, 20);
			this->textBox_ville->TabIndex = 20;
			// 
			// label_cp
			// 
			this->label_cp->AutoSize = true;
			this->label_cp->ForeColor = System::Drawing::Color::White;
			this->label_cp->Location = System::Drawing::Point(382, 297);
			this->label_cp->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_cp->Name = L"label_cp";
			this->label_cp->Size = System::Drawing::Size(21, 13);
			this->label_cp->TabIndex = 23;
			this->label_cp->Text = L"CP";
			// 
			// textBox_cp
			// 
			this->textBox_cp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->textBox_cp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_cp->ForeColor = System::Drawing::Color::White;
			this->textBox_cp->Location = System::Drawing::Point(382, 316);
			this->textBox_cp->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_cp->Name = L"textBox_cp";
			this->textBox_cp->Size = System::Drawing::Size(170, 20);
			this->textBox_cp->TabIndex = 22;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(562, 466);
			this->Controls->Add(this->label_cp);
			this->Controls->Add(this->textBox_cp);
			this->Controls->Add(this->label_ville);
			this->Controls->Add(this->textBox_ville);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_adresse);
			this->Controls->Add(this->textBox_message);
			this->Controls->Add(this->label_message);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button_nouveau);
			this->Controls->Add(this->button_maj);
			this->Controls->Add(this->button_supprimer);
			this->Controls->Add(this->button_save);
			this->Controls->Add(this->label_adresses);
			this->Controls->Add(this->label_prenom);
			this->Controls->Add(this->textBox_prenom);
			this->Controls->Add(this->label_nom);
			this->Controls->Add(this->textBox_nom);
			this->Controls->Add(this->label_id);
			this->Controls->Add(this->textBox_id);
			this->Controls->Add(this->dataGridView1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximumSize = System::Drawing::Size(972, 659);
			this->MinimumSize = System::Drawing::Size(578, 449);
			this->Name = L"Form1";
			this->Text = L"Formulaire ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
private: System::Void button_maj_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	if (textBox_nom->TextLength > 0 && textBox_prenom->TextLength > 0) { 
		this->oDs = this->oSvc->selectionnerUnePersonne("Rsl", textBox_nom->Text, textBox_prenom->Text); 
		int id;
		id = this->oSvc->returnid(textBox_nom->Text, textBox_prenom->Text);
		this->textBox_id->Text = id.ToString();
	
	}
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}

private: System::Void button_nouveau_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvc->ajouterUneAdresse(this->textBox_adresse->Text, this->textBox_ville->Text, Convert::ToInt32(this->textBox_cp->Text), Convert::ToInt32(this->textBox_id->Text));
	MessageBox::Show("Sauvegardé avec succés ", "Notification");
}


private: System::Void button_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->oSvc->enleverUneAdresse(id_adresse);
	MessageBox::Show("Supprimé avec succés ", "Notification");
}


private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvc->update_adresse(id_adresse,textBox_adresse->Text, textBox_ville->Text, Convert::ToInt32(textBox_cp->Text));
	MessageBox::Show("Sauvegardé avec succés ", "Notification");
}
private: System::Void mous_click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	DataGridViewRow^ row = dataGridView1->CurrentRow;
	textBox_adresse->Text = row->Cells["adresse"]->Value->ToString();
	textBox_ville->Text = row->Cells["ville"]->Value->ToString();
	textBox_cp->Text = row->Cells["cp"]->Value->ToString();
	try { id_adresse = Convert::ToInt32(row->Cells["id_adresse"]->Value); }
	catch (...) {

	};
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(textBox_id->Text) + 1;
	moveId(sender, e, id);
}


private: System::Void previous(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	int id = Convert::ToInt32(textBox_id->Text) - 1;
	if (id < 0) { id = 0; };
	moveId(sender, e, id);
}
private: System::Void moveId(System::Object^ sender, System::EventArgs^ e, int id) {

		textBox_id->Text = Convert::ToString(id);
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->selectionnerParId("Rsl", id);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";

	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	moveId(sender, e, 1);
}
};
}
