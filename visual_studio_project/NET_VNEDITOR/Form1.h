#pragma once
#define IMG_FORMAT ".jpg"
#define SITE_URL "http://g--o.net76.net/"
#define MANUAL "10BOXVisualNovel_Manual.txt"
#define EPDIR "EPS"
#define CDIR "CHS"
#define BGDIR "BGS"
#define WDIR "WAVS"

namespace NET_VNEDITOR {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	#include "GameEvents.h"

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  Characters;
	private: System::Windows::Forms::PictureBox^  CBG;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  VNP;
	private: System::Windows::Forms::ListBox^  Events;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  BG;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  LOG;
	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  guideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  aDDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  removeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  setMoodToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  upsetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  happyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  angryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  blushingToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^  guideToolStripMenuItem1;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  removeToolStripMenuItem1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;



	private: System::ComponentModel::IContainer^  components;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Characters = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->aDDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setMoodToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->upsetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->happyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->angryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blushingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CBG = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->VNP = (gcnew System::Windows::Forms::TextBox());
			this->Events = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->BG = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->LOG = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->CBG))->BeginInit();
			this->contextMenuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->BG))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(480, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Background";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Characters
			// 
			this->Characters->ContextMenuStrip = this->contextMenuStrip1;
			this->Characters->FormattingEnabled = true;
			this->Characters->Location = System::Drawing::Point(480, 53);
			this->Characters->Name = L"Characters";
			this->Characters->Size = System::Drawing::Size(178, 95);
			this->Characters->TabIndex = 2;
			this->Characters->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Characters_SelectedIndexChanged);
			this->Characters->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Characters_MouseDown);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->aDDToolStripMenuItem, 
				this->removeToolStripMenuItem, this->setMoodToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(140, 70);
			// 
			// aDDToolStripMenuItem
			// 
			this->aDDToolStripMenuItem->Name = L"aDDToolStripMenuItem";
			this->aDDToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->aDDToolStripMenuItem->Text = L"Add";
			this->aDDToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aDDToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->Enabled = false;
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
			this->removeToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->removeToolStripMenuItem->Text = L"Remove";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::removeToolStripMenuItem_Click);
			// 
			// setMoodToolStripMenuItem
			// 
			this->setMoodToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->upsetToolStripMenuItem, 
				this->sadToolStripMenuItem, this->happyToolStripMenuItem, this->angryToolStripMenuItem, this->blushingToolStripMenuItem});
			this->setMoodToolStripMenuItem->Enabled = false;
			this->setMoodToolStripMenuItem->Name = L"setMoodToolStripMenuItem";
			this->setMoodToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->setMoodToolStripMenuItem->Text = L"Set Mood...";
			// 
			// upsetToolStripMenuItem
			// 
			this->upsetToolStripMenuItem->Name = L"upsetToolStripMenuItem";
			this->upsetToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->upsetToolStripMenuItem->Text = L"Upset";
			this->upsetToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::upsetToolStripMenuItem_Click);
			// 
			// sadToolStripMenuItem
			// 
			this->sadToolStripMenuItem->Name = L"sadToolStripMenuItem";
			this->sadToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->sadToolStripMenuItem->Text = L"Sad";
			this->sadToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sadToolStripMenuItem_Click);
			// 
			// happyToolStripMenuItem
			// 
			this->happyToolStripMenuItem->Name = L"happyToolStripMenuItem";
			this->happyToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->happyToolStripMenuItem->Text = L"Happy";
			this->happyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::happyToolStripMenuItem_Click);
			// 
			// angryToolStripMenuItem
			// 
			this->angryToolStripMenuItem->Name = L"angryToolStripMenuItem";
			this->angryToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->angryToolStripMenuItem->Text = L"Angry";
			this->angryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::angryToolStripMenuItem_Click);
			// 
			// blushingToolStripMenuItem
			// 
			this->blushingToolStripMenuItem->Name = L"blushingToolStripMenuItem";
			this->blushingToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->blushingToolStripMenuItem->Text = L"Blushing";
			this->blushingToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::blushingToolStripMenuItem_Click);
			// 
			// CBG
			// 
			this->CBG->Location = System::Drawing::Point(480, 154);
			this->CBG->Name = L"CBG";
			this->CBG->Size = System::Drawing::Size(178, 129);
			this->CBG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->CBG->TabIndex = 3;
			this->CBG->TabStop = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(480, 332);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Add Sound";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// VNP
			// 
			this->VNP->Location = System::Drawing::Point(69, 191);
			this->VNP->Multiline = true;
			this->VNP->Name = L"VNP";
			this->VNP->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->VNP->Size = System::Drawing::Size(398, 122);
			this->VNP->TabIndex = 6;
			this->VNP->WordWrap = false;
			// 
			// Events
			// 
			this->Events->ContextMenuStrip = this->contextMenuStrip2;
			this->Events->FormattingEnabled = true;
			this->Events->Location = System::Drawing::Point(69, 319);
			this->Events->Name = L"Events";
			this->Events->Size = System::Drawing::Size(398, 95);
			this->Events->TabIndex = 7;
			this->Events->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Events_MouseDown);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->addToolStripMenuItem1, 
				this->removeToolStripMenuItem1});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(119, 48);
			// 
			// addToolStripMenuItem1
			// 
			this->addToolStripMenuItem1->Enabled = false;
			this->addToolStripMenuItem1->Name = L"addToolStripMenuItem1";
			this->addToolStripMenuItem1->Size = System::Drawing::Size(118, 22);
			this->addToolStripMenuItem1->Text = L"Edit";
			this->addToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::addToolStripMenuItem1_Click);
			// 
			// removeToolStripMenuItem1
			// 
			this->removeToolStripMenuItem1->Enabled = false;
			this->removeToolStripMenuItem1->Name = L"removeToolStripMenuItem1";
			this->removeToolStripMenuItem1->Size = System::Drawing::Size(118, 22);
			this->removeToolStripMenuItem1->Text = L"Remove";
			this->removeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::removeToolStripMenuItem1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(480, 361);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(178, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Add BGM";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// BG
			// 
			this->BG->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BG.Image")));
			this->BG->Location = System::Drawing::Point(69, 37);
			this->BG->Name = L"BG";
			this->BG->Size = System::Drawing::Size(398, 148);
			this->BG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->BG->TabIndex = 9;
			this->BG->TabStop = false;
			this->BG->Click += gcnew System::EventHandler(this, &Form1::BG_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(480, 420);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Add Log";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// LOG
			// 
			this->LOG->Location = System::Drawing::Point(69, 420);
			this->LOG->Name = L"LOG";
			this->LOG->Size = System::Drawing::Size(398, 20);
			this->LOG->TabIndex = 11;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(380, 460);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(87, 23);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Fade";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(171, 462);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 14;
			this->textBox3->Text = L"0";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Black", L"White"});
			this->comboBox1->Location = System::Drawing::Point(69, 460);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(91, 21);
			this->comboBox1->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(250, 446);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Element applicant:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(695, 24);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::MenuBar;
			this->fileToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->newToolStripMenuItem, 
				this->loadToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(36, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click);
			// 
			// loadToolStripMenuItem
			// 
			this->loadToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->loadToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->loadToolStripMenuItem->Name = L"loadToolStripMenuItem";
			this->loadToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->loadToolStripMenuItem->Text = L"Load";
			this->loadToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::loadToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Enabled = false;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->guideToolStripMenuItem1, 
				this->guideToolStripMenuItem, this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// guideToolStripMenuItem1
			// 
			this->guideToolStripMenuItem1->Name = L"guideToolStripMenuItem1";
			this->guideToolStripMenuItem1->Size = System::Drawing::Size(111, 22);
			this->guideToolStripMenuItem1->Text = L"Manual";
			this->guideToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::guideToolStripMenuItem1_Click);
			// 
			// guideToolStripMenuItem
			// 
			this->guideToolStripMenuItem->Name = L"guideToolStripMenuItem";
			this->guideToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->guideToolStripMenuItem->Text = L"Site";
			this->guideToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::guideToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(544, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Character";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(544, 289);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Operations:";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(28, 243);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(29, 13);
			this->linkLabel2->TabIndex = 31;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"VNP";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel2_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(28, 94);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(22, 13);
			this->linkLabel1->TabIndex = 33;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"BG";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked_1);
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(17, 333);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(40, 13);
			this->linkLabel3->TabIndex = 34;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Events";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel3_LinkClicked);
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(44, 506);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(320, 23);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Save and Play";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(572, 420);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 23);
			this->button3->TabIndex = 36;
			this->button3->Text = L"End vnp";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(529, 462);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(106, 17);
			this->checkBox1->TabIndex = 37;
			this->checkBox1->Text = L"Special First Line";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(17, 362);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(46, 23);
			this->button9->TabIndex = 38;
			this->button9->Text = L"Up";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(17, 391);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(46, 23);
			this->button10->TabIndex = 39;
			this->button10->Text = L"Down";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(370, 506);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(320, 23);
			this->button11->TabIndex = 40;
			this->button11->Text = L"Play without saving";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Text", L"Background"});
			this->comboBox2->Location = System::Drawing::Point(253, 462);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(111, 21);
			this->comboBox2->TabIndex = 41;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(168, 446);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Factor:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(68, 445);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 13);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Background color:";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(480, 390);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(178, 23);
			this->button8->TabIndex = 44;
			this->button8->Text = L"Add Choice";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(171, 7);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(69, 17);
			this->radioButton1->TabIndex = 45;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Windows";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(279, 7);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(48, 17);
			this->radioButton2->TabIndex = 46;
			this->radioButton2->Text = L"Web";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 541);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->LOG);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->BG);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Events);
			this->Controls->Add(this->VNP);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->CBG);
			this->Controls->Add(this->Characters);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"VNEditor";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->CBG))->EndInit();
			this->contextMenuStrip2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->BG))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: GameEventHandler ^GEHandler;
private: String^ specialLine;
private: List<int> ^moods;

private: void setTitle(String^ add)
		 {
			 this->Text = "VNEditor - " + add;
		 }

private: bool isFirstLineEmpty()
		 {
			 	 if(VNP->Text->Length == 0)
					 return true;
				 else if(VNP->Lines[0]->Length == 0)
					 return true;
				 else
					 return false;
		 }

private: void run(String^ cmd)
		 {
			 if(!String::IsNullOrEmpty(cmd ))
				 System::Diagnostics::Process::Start(cmd);
		 }

private: void moveDown()
		 {
			 if(Events->SelectedItems->Count>0)
			 {
				 if(Events->SelectedIndex != Events->Items->Count-1)
				 {
					 array<String^> ^tmp;
					 List<String^> ^l = gcnew List<String^>(VNP->Lines);
					 GameEvent^ E = GEHandler->Find(Events->SelectedIndex);
					 int flag = 0; // Fix
					 GameEvent^ N = GEHandler->nextEvent(Events->SelectedIndex);
					 int end;
					 if(N==nullptr)
						 end = VNP->Lines->Length+1;
					 else
						 end = GEHandler->nextEvent(Events->SelectedIndex)->Line;
					 tmp = gcnew array<String^>(end-(E->Line)+flag);
					 l->CopyTo(E->Line-1-flag,tmp,0,end-(E->Line)+flag);
					 int i = Events->SelectedIndex;
					 removeToolStripMenuItem1_Click(nullptr,nullptr);
					 Events->SelectedIndex=i;
					 addEvent(tmp);

					 updateEvents();
				 }
			 }
		 }

private: void updateEvents()
		 {
			 GEHandler->Clear();
			 array<String^> ^s = {"Reset","Set BG","Set BGM","Play sound","Fade","Choice"};
			 array<String^> ^m = {"Upset","Sad","Happy","Angry","Blushing"};

			 if(VNP->Lines->Length > 0)
			 {
				 for(int i = String::IsNullOrEmpty(VNP->Lines[0])+checkBox1->Checked; i<VNP->Lines->Length; i++)
				 {
					 if(!String::Compare(VNP->Lines[i],"!")) // If line is "!"
					 {
						 i++; // Move to next line
						 int cmd = Convert::ToInt32(VNP->Lines[i],10); // Get the number
						 GEHandler->Add(gcnew GameEvent(s[cmd],i)); // Get the command

						 do
						 {
							 i++;
						 }  while(String::Compare(VNP->Lines[i],"!")); // Jump over the parameters
					 }
					 else
					 {

						 if(!String::Compare(VNP->Lines[i],"0"))
						 {
							 i++;
							if(i>=VNP->Lines->Length)
							{
								GEHandler->Add(gcnew GameEvent("End of vnp",i));
								break;
							}
							 GEHandler->Add(gcnew GameEvent(VNP->Lines[i],i));
						 }
						 else
						 {
							 if(i==VNP->Lines->Length-2)
							{
								GEHandler->Add(gcnew GameEvent("End of vnp",i));
								break;
							}
							 GEHandler->Add(gcnew GameEvent(VNP->Lines[i]+" ["+m[Int32::Parse(VNP->Lines[i+1])]+"] "+VNP->Lines[i+2],i+1));
							 i+=2;
						 }
					 }
				 }
			 }
		 }

private: void addEvent(array<String^> ^a)
		 {
			 List<String^> ^e = gcnew List<String^>(a);
			 List<String^> ^l = gcnew List<String^>(VNP->Lines);


			 if(Events->Items->Count > 0)
			 {
				if(Events->SelectedIndices->Count > 0 && Events->SelectedIndex != Events->Items->Count-1)
				{
					if(!String::Compare(Events->SelectedItem->ToString(),"End of vnp"))
						MessageBox::Show("You can't add an event after 'End of vnp' flag!","Error!");
					else
					{
						int line = GEHandler->nextEvent(Events->SelectedIndex)->Line-1;
						l->InsertRange(line,e);
						VNP->Lines = l->ToArray();
					}
				}
				else if(String::Compare(Events->Items[Events->Items->Count-1]->ToString(),"End of vnp"))
				{
					l->AddRange(e);
					VNP->Lines = l->ToArray();
				}
				else
					MessageBox::Show("You can't add an event after 'End of vnp' flag!","Error!");
			 }
			 else
			 {
				l->AddRange(e);
				VNP->Lines = l->ToArray();
			 }

			 if(!checkBox1->Checked)
			 {
				 if(!isFirstLineEmpty())
				 {
					l->Insert(0,"");
					VNP->Lines = l->ToArray();
				 }
			 }

			updateEvents();
		 }

private: void addCommand(int cmd, array<String ^> ^args)
		 {
			 List<String^> ^a = gcnew List<String^>();
			 int i;

			 a->Add("!");
			 a->Add(Convert::ToString(cmd));

			 for(i = 0; i<args->Length; i++)
			 {
				 a->Add(args[i]);
			 }

			 a->Add("!");

			 addEvent(a->ToArray());
		 }

private: System::Void loadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // LOAD

			 if(openFileDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK )
			 {
				setTitle(openFileDialog1->FileName);
				VNP->Lines = File::ReadAllLines(openFileDialog1->FileName);
				saveToolStripMenuItem->Enabled = true;
				saveFileDialog1->FileName = openFileDialog1->FileName;
				GEHandler->Clear();
				updateEvents();
			 }
		 }

private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // SAVE
				if(this->Text == "VNEditor - Unsaved VN" || this->Text == "VNEditor")
					;//MessageBox::Show("Please use 'Save As' first!", "Error");
				else
				{
					File::WriteAllLines(saveFileDialog1->FileName,VNP->Lines);
					setTitle(saveFileDialog1->FileName);
				}
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // EXIT
			 Application::Exit();
		 }
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // NEW
			 // RESET:
			 BG->Load("bg"+IMG_FORMAT);
			 Characters->Items->Clear();
			 CBG->Image = nullptr;
			 LOG->Text = "";
			 VNP->Text = "";
			 Events->Text = "";
			 comboBox1->Text = "";
			 textBox3->Text = "";
			 GEHandler->Clear();
			 //TAKE CARE OF STUFF
			 saveToolStripMenuItem->Enabled = false;
			 setTitle("Unsaved VN");
		 }
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // SAVE AS
			 if(saveFileDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK )
			 {
				 saveToolStripMenuItem_Click(sender,e);
				 saveToolStripMenuItem->Enabled = true;
			 }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) { // INITIALIZE
			 GEHandler = gcnew GameEventHandler(Events);
			 openFileDialog2->Filter = ".JPG Files (*.jpg)|*.jpg"; // TODO: ADD CONSTANTS;
			 openFileDialog1->Filter = ".VNP Files (*.vnp)|*.vnp";
			 saveFileDialog1->Filter = openFileDialog1->Filter;
			 openFileDialog3->Filter = ".WAV Files (*.wav)|*.wav";
			 openFileDialog1->InitialDirectory = EPDIR;
			 saveFileDialog1->InitialDirectory = EPDIR;
			 openFileDialog2->InitialDirectory = BGDIR;
			 openFileDialog3->InitialDirectory = WDIR;
			 specialLine = "[Enter your special line here]";
			 moods = gcnew List<int>();
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // ABOUT
			 MessageBox::Show("Made by g_o!\nUsed for editing vnp files for the 10BOX VN Engine.","About");
		 }

private: System::Void guideToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // GUIDE
			 run(SITE_URL); 
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) { // LINK
			 MessageBox::Show(BG->Image->ToString()); 
		 }
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) { // LINK
			 run(saveFileDialog1->FileName);
		 }
private: void Characters_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)  // CHARACTERS POP-UP
		 {
			 Characters->SelectedIndex = Characters->IndexFromPoint(e->Location);

			 if(e->Button == Windows::Forms::MouseButtons::Right)
			 {
				 if(Characters->SelectedIndices->Count > 0)
				 {
					  removeToolStripMenuItem->Enabled = true;
					  setMoodToolStripMenuItem->Enabled = true;
				 }
				 else
				 {
					  removeToolStripMenuItem->Enabled = false;
					  setMoodToolStripMenuItem->Enabled = false;
				 }
			 }
		 }

		 private: void Events_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)  // EVENTS POP-UP
		 {

			 Events->SelectedIndex = Events->IndexFromPoint(e->Location);

			 if(e->Button == Windows::Forms::MouseButtons::Right)
			 {
				 if(Events->SelectedIndices->Count > 0)
				 {
					 removeToolStripMenuItem1->Enabled = true;
					 addToolStripMenuItem1->Enabled = true;
				 }
				 else
				 {
					 removeToolStripMenuItem1->Enabled = false;
					 addToolStripMenuItem1->Enabled = false;
				 }
			 }
		}

private: System::Void removeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // REMOVE CHARACTER
			 Characters->Items->Remove(Characters->SelectedItem);
			 moods->RemoveAt(Characters->SelectedIndex+1);
		 }
private: System::Void aDDToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // ADD CHARACTER
			 CDialog^ d = gcnew CDialog("Enter character name:");
			 if(d->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
			 {
				Characters->Items->Add(d->textBox1->Text);
				moods->Add(2);
			 }
		 }	
private: System::Void Characters_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) { // CHARACTER CHANGED
			 if(Characters->SelectedIndices->Count > 0){
				 try{
					CBG->Load(CDIR+"\\"+Characters->SelectedItem->ToString()+IMG_FORMAT);
				 }
				 catch(FileNotFoundException^ ex)
				 {
					 CBG->Load("Error.jpg");
				 }
			 }
			 else
			 {
				 CBG->Image = nullptr;
			 }
		 }
private: System::Void BG_Click(System::Object^  sender, System::EventArgs^  e) { // BG CLICKED
			 if(openFileDialog2->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
			 {
				 BG->Load(openFileDialog2->FileName);
			 }
		 }

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) { // ADD LOG

				array<String^> ^a;
				if(Characters->SelectedIndices->Count > 0)
				{
					a = gcnew array<String^>{Characters->SelectedItem + ":",Convert::ToString(moods[Characters->SelectedIndex]), LOG->Text};
				}
				else
				{
					a = gcnew array<String^>{"0",LOG->Text};
				}

				addEvent(a);
				updateEvents();
		 }
private: System::Void linkLabel1_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) { //LINK
			 run(BG->ImageLocation);
		 }
private: System::Void guideToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) { // GUIDE
			 run(MANUAL);
		 }
private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) { // LINK
			 updateEvents();
		 }
private: System::Void addToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) { // ADD EVENT
			 
		 }
private: System::Void removeToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) { // REMOVE EVENT
			 List<String^> ^l = gcnew List<String^>(VNP->Lines);
			 GameEvent^ E = GEHandler->Find(Events->SelectedIndex);
			 int flag = -((!String::Compare(Events->SelectedItem->ToString(),"End of vnp") && (String::Compare(l[E->Line-1],"0")))); // Fix
			 GameEvent^ N = GEHandler->nextEvent(Events->SelectedIndex);
			 int end;
			 if(N==nullptr)
				 end = VNP->Lines->Length+1;
			 else
				 end = GEHandler->nextEvent(Events->SelectedIndex)->Line;
			 l->RemoveRange(E->Line-1-flag,end-(E->Line)+flag);
			 VNP->Lines = l->ToArray();
			 updateEvents();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // ADD BG
			 addCommand(1,gcnew array<String^>{Path::GetFileName(openFileDialog2->FileName)});
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { // ADD SOUND
			 if(openFileDialog3->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
			 {
				addCommand(3,gcnew array<String^>{Path::GetFileName(openFileDialog3->FileName)});
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { // ADD BGM
			 if(openFileDialog3->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
			 {
				 addCommand(2,gcnew array<String^>{Path::GetFileName(openFileDialog3->FileName)});
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { // SAVE&PLAY
			 saveToolStripMenuItem_Click(sender,e);
			 String^ t = Path::GetFileName(this->Text);
			 if(t->IndexOf(".")==-1)
				 MessageBox::Show("You have to load/save a file first!","Error!");
			 else
				Diagnostics::Process::Start("VisualNovel.exe",t->Substring(0,t->IndexOf(".")));
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { // END OF VNP BUTTON
			 List<String^> ^l = gcnew List<String^>(VNP->Lines);
			 if(Characters->SelectedIndices->Count==0)
				 l->Add("0");
			 else
			 {
				 l->Add(Characters->SelectedItem->ToString()+":");
				 l->Add(Convert::ToString(moods[Characters->SelectedIndex]));
			 }
			 VNP->Lines = l->ToArray();
			 updateEvents();
		 }

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) { // CHECKBOX CHANGED
			 List<String^> ^l = gcnew List<String^>(VNP->Lines);
			 if(!checkBox1->Checked)
			 {
				 if(VNP->Lines->Length > 0)
				 {
					 if(VNP->Lines[0]==specialLine)
						l[0]="";
					 else
						l->Insert(0,"");
				 }
			 }
			 else
			 {
				if(!isFirstLineEmpty())
				{
					CDialog^ d = gcnew CDialog("Enter special first line: [Make sure sender vnp has an 'End of vnp' flag!]"+Environment::NewLine+"-If anything goes wrong just make sure the first line is the special line&all else is usual!");
					if(d->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
					{
						l->Insert(0,d->textBox1->Text);
						specialLine = d->textBox1->Text;
					}
				}
				else
				{
					if(VNP->Text->Length != 0)
						l->RemoveAt(0);
					CDialog^ d = gcnew CDialog("Enter special first line: [Make sure sender vnp has an 'End of vnp' flag!]"+Environment::NewLine+"*Make sure the sender vnp has an 'End of vnp' flag. **'Cancel' will use the first line as the special line.");

					if(d->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
					{
						l->Insert(0,d->textBox1->Text);
						specialLine = d->textBox1->Text;
					}
				}
			 }
			 VNP->Lines = l->ToArray();
			 updateEvents();
		 }
		 // TODO: Handle first line event - add space!
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) { // MOVE UP
			 if(Events->SelectedIndices->Count!=0)
			 {
				Events->SelectedIndex--;
				moveDown();
			 }
			
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) { // MOVE DOWN
			 moveDown();
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) { // TEST PLAYING (DONT SAVE)
			 File::WriteAllLines(EPDIR+"\\-2.vnp",VNP->Lines);
			 Diagnostics::Process::Start("VisualNovel.exe","-2");
		 }
		 // MOODS:
private: System::Void upsetToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 moods[Characters->SelectedIndex] = 0;
		 }
private: System::Void sadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 moods[Characters->SelectedIndex] = 1;
		 }

private: System::Void happyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 moods[Characters->SelectedIndex] = 2;
		 }
private: System::Void angryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 moods[Characters->SelectedIndex] = 3;
		 }
private: System::Void blushingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 moods[Characters->SelectedIndex] = 4;
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) { // FADE
			 if(!comboBox2->SelectedIndex)
				 addCommand(4,gcnew array<String^>{"1",textBox3->Text});
			 else
				addCommand(4,gcnew array<String^>{"2",Convert::ToString(comboBox1->SelectedIndex+1),textBox3->Text});
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) { // FADE TYPE CHANGED
			 if(!comboBox2->SelectedIndex)
				 comboBox1->Enabled = false;
			 else
				 comboBox1->Enabled = true;
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 ChoiceDialog ^d = gcnew ChoiceDialog();
			 List<String^> ^args = gcnew List<String^>();
			if(d->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
			{
				for(int i=0; i<d->i/35; i++)
				{
					args->Add(d->tbs[i]->Text);
					args->Add(d->nuds[i]->Text);
				}

				addCommand(5,args->ToArray());
			}
		 }
private: System::Void modeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

