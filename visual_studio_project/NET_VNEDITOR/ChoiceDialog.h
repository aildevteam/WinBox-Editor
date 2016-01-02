#pragma once

namespace NET_VNEDITOR {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChoiceDialog
	/// </summary>
	public ref class ChoiceDialog : public System::Windows::Forms::Form
	{
	public:
		ChoiceDialog(void)
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
		~ChoiceDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(156, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CHOICE MANAGER";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ADD OPTION";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChoiceDialog::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(103, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"#";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"TO VNP";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(156, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"CHOICE TEXT";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"REMOVE OPTION";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ChoiceDialog::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(315, 43);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Apply";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(377, 43);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Cancel";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// ChoiceDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 306);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"ChoiceDialog";
			this->Text = L"ChoiceDialog";
			this->Load += gcnew System::EventHandler(this, &ChoiceDialog::ChoiceDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public: List<TextBox^> ^tbs;
public: List<NumericUpDown^> ^nuds;
public: int i;

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // ADD
			TextBox^ t = gcnew TextBox();
			NumericUpDown^ n = gcnew NumericUpDown();
			//Text box
			t->Location = Point(180, 94+i);
			tbs->Add(t);
			this->Controls->Add(t);
			t->Show();
			//NumericUpDown
			n->Location = Point(47,94+i);
			nuds->Add(n);
			this->Controls->Add(n);
			n->Show();

			i+=35;
		 }
private: System::Void ChoiceDialog_Load(System::Object^  sender, System::EventArgs^  e) { // LOAD FORM
			 tbs = gcnew List<TextBox^>();
			 nuds = gcnew List<NumericUpDown^>();
			 i=0;
			 button3->DialogResult = ::System::Windows::Forms::DialogResult::OK;
			 button4->DialogResult = ::System::Windows::Forms::DialogResult::Cancel;
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { // REMOVE
			 if(i>0)
			 {
				 TextBox^ t = tbs[i/35-1];
				 NumericUpDown^ n = nuds[i/35-1];
				 this->Controls->Remove(t);
				 this->Controls->Remove(n);
				 tbs->Remove(t);
				 nuds->Remove(n);
				 i-=35;
			 }
		 }
};
}
