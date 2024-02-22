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
			//exitBtn
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
	private: System::Windows::Forms::Label^ myName;
	protected:
	private: System::Windows::Forms::Label^ mySurname;
	private: System::Windows::Forms::Button^ msgBtn;
	private: System::Windows::Forms::Button^ exitBtn;
	private: System::Windows::Forms::TextBox^ txtBoxColorChange;

	private: System::Windows::Forms::Button^ colorChangeBtn;

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
			this->myName = (gcnew System::Windows::Forms::Label());
			this->mySurname = (gcnew System::Windows::Forms::Label());
			this->msgBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->txtBoxColorChange = (gcnew System::Windows::Forms::TextBox());
			this->colorChangeBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// myName
			// 
			this->myName->AutoSize = true;
			this->myName->Location = System::Drawing::Point(12, 18);
			this->myName->Name = L"myName";
			this->myName->Size = System::Drawing::Size(40, 16);
			this->myName->TabIndex = 0;
			this->myName->Text = L"Анна";
			// 
			// mySurname
			// 
			this->mySurname->AutoSize = true;
			this->mySurname->Location = System::Drawing::Point(58, 18);
			this->mySurname->Name = L"mySurname";
			this->mySurname->Size = System::Drawing::Size(79, 16);
			this->mySurname->TabIndex = 1;
			this->mySurname->Text = L"Стріхарчук";
			// 
			// msgBtn
			// 
			this->msgBtn->Location = System::Drawing::Point(137, 62);
			this->msgBtn->Name = L"msgBtn";
			this->msgBtn->Size = System::Drawing::Size(123, 41);
			this->msgBtn->TabIndex = 2;
			this->msgBtn->Text = L"Who am I\?";
			this->msgBtn->UseVisualStyleBackColor = true;
			this->msgBtn->Click += gcnew System::EventHandler(this, &Form1::msgBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Location = System::Drawing::Point(137, 136);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(123, 41);
			this->exitBtn->TabIndex = 3;
			this->exitBtn->Text = L"Press me";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &Form1::exitBtn_Click);
			// 
			// txtBoxColorChange
			// 
			this->txtBoxColorChange->Location = System::Drawing::Point(293, 336);
			this->txtBoxColorChange->Name = L"txtBoxColorChange";
			this->txtBoxColorChange->Size = System::Drawing::Size(100, 22);
			this->txtBoxColorChange->TabIndex = 4;
			this->txtBoxColorChange->BackColor = Color::Green;
			// 
			// colorChangeBtn
			// 
			this->colorChangeBtn->Location = System::Drawing::Point(137, 212);
			this->colorChangeBtn->Name = L"colorChangeBtn";
			this->colorChangeBtn->Size = System::Drawing::Size(123, 41);
			this->colorChangeBtn->TabIndex = 5;
			this->colorChangeBtn->Text = L"Color change";
			this->colorChangeBtn->UseVisualStyleBackColor = true;
			this->colorChangeBtn->Click += gcnew EventHandler(this, &Form1::colorChangeBtn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(405, 370);
			this->Controls->Add(this->colorChangeBtn);
			this->Controls->Add(this->txtBoxColorChange);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->msgBtn);
			this->Controls->Add(this->mySurname);
			this->Controls->Add(this->myName);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void msgBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			MessageBox::Show("I'm smart cookie");
		}

		void exitBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Form::Close();
		}

		void colorChangeBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			txtBoxColorChange->BackColor = (txtBoxColorChange->BackColor == Color::Green) ? Color::Red : Color::Green;
		}
	};
}