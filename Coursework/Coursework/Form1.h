#pragma once
#include "LongInteger.cpp"

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ num1Inp;
	private: System::Windows::Forms::TextBox^ num2Inp;


	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ operationCmb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ resultInp;

	private: System::Windows::Forms::Button^ genRandBtn;
	private: System::Windows::Forms::Button^ calcBtn;






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
			this->num1Inp = (gcnew System::Windows::Forms::TextBox());
			this->num2Inp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->operationCmb = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->resultInp = (gcnew System::Windows::Forms::TextBox());
			this->genRandBtn = (gcnew System::Windows::Forms::Button());
			this->calcBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"number 1";
			// 
			// num1Inp
			// 
			this->num1Inp->Location = System::Drawing::Point(80, 54);
			this->num1Inp->Name = L"num1Inp";
			this->num1Inp->Size = System::Drawing::Size(187, 20);
			this->num1Inp->TabIndex = 1;
			// 
			// num2Inp
			// 
			this->num2Inp->Location = System::Drawing::Point(80, 144);
			this->num2Inp->Name = L"num2Inp";
			this->num2Inp->Size = System::Drawing::Size(187, 20);
			this->num2Inp->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"number 2";
			// 
			// operationCmb
			// 
			this->operationCmb->FormattingEnabled = true;
			this->operationCmb->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->operationCmb->Location = System::Drawing::Point(69, 99);
			this->operationCmb->Name = L"operationCmb";
			this->operationCmb->Size = System::Drawing::Size(40, 21);
			this->operationCmb->TabIndex = 4;
			this->operationCmb->Text = L"+";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"operation";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(55, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"=";
			// 
			// resultInp
			// 
			this->resultInp->Enabled = false;
			this->resultInp->Location = System::Drawing::Point(80, 201);
			this->resultInp->Name = L"resultInp";
			this->resultInp->Size = System::Drawing::Size(240, 20);
			this->resultInp->TabIndex = 7;
			// 
			// genRandBtn
			// 
			this->genRandBtn->Location = System::Drawing::Point(269, 255);
			this->genRandBtn->Name = L"genRandBtn";
			this->genRandBtn->Size = System::Drawing::Size(67, 57);
			this->genRandBtn->TabIndex = 8;
			this->genRandBtn->Text = L"generate random numbers";
			this->genRandBtn->UseVisualStyleBackColor = true;
			// 
			// calcBtn
			// 
			this->calcBtn->Location = System::Drawing::Point(51, 269);
			this->calcBtn->Name = L"calcBtn";
			this->calcBtn->Size = System::Drawing::Size(58, 28);
			this->calcBtn->TabIndex = 9;
			this->calcBtn->Text = L"calculate";
			this->calcBtn->UseVisualStyleBackColor = true;
			this->calcBtn->Click += gcnew System::EventHandler(this, &Form1::calcBtn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(348, 340);
			this->Controls->Add(this->calcBtn);
			this->Controls->Add(this->genRandBtn);
			this->Controls->Add(this->resultInp);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->operationCmb);
			this->Controls->Add(this->num2Inp);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->num1Inp);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void calcBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			LongInteger a("123");
			LongInteger b("456");

			std::string s = (a + b).toString();
			resultInp->Text = gcnew System::String(s.c_str());
		}
};
}
