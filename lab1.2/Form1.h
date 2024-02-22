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
	private: System::Windows::Forms::Label^ origCost;
	private: System::Windows::Forms::Button^ calcBtn;
	private: System::Windows::Forms::Button^ exitBtn;
	private: System::Windows::Forms::TextBox^ costBox;
	protected:

	protected:



	private: System::Windows::Forms::Label^ txtMsg;
	private: System::Windows::Forms::Label^ txtHowChanged;


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
			this->origCost = (gcnew System::Windows::Forms::Label());
			this->calcBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->costBox = (gcnew System::Windows::Forms::TextBox());
			this->txtMsg = (gcnew System::Windows::Forms::Label());
			this->txtHowChanged = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// origCost
			// 
			this->origCost->AutoSize = true;
			this->origCost->Location = System::Drawing::Point(29, 49);
			this->origCost->Name = L"origCost";
			this->origCost->Size = System::Drawing::Size(45, 16);
			this->origCost->TabIndex = 0;
			this->origCost->Text = L"Ціна =";
			// 
			// calcBtn
			// 
			this->calcBtn->Location = System::Drawing::Point(32, 103);
			this->calcBtn->Name = L"calcBtn";
			this->calcBtn->Size = System::Drawing::Size(119, 43);
			this->calcBtn->TabIndex = 1;
			this->calcBtn->Text = L"Обчислити";
			this->calcBtn->UseVisualStyleBackColor = true;
			this->calcBtn->Click += gcnew System::EventHandler(this, &Form1::calcBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Location = System::Drawing::Point(315, 103);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(116, 43);
			this->exitBtn->TabIndex = 2;
			this->exitBtn->Text = L"Вийти";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &Form1::exitBtn_Click);
			// 
			// costBox
			// 
			this->costBox->Location = System::Drawing::Point(80, 46);
			this->costBox->Name = L"costBox";
			this->costBox->Size = System::Drawing::Size(100, 22);
			this->costBox->TabIndex = 3;
			// 
			// txtMsg
			// 
			this->txtMsg->AutoSize = true;
			this->txtMsg->Location = System::Drawing::Point(12, 174);
			this->txtMsg->Name = L"txtMsg";
			this->txtMsg->Size = System::Drawing::Size(231, 16);
			this->txtMsg->TabIndex = 4;
			this->txtMsg->Text = L"Ціна яка вийшла після обчислень =";
			// 
			// txtHowChanged
			// 
			this->txtHowChanged->AutoSize = true;
			this->txtHowChanged->Location = System::Drawing::Point(12, 222);
			this->txtHowChanged->Name = L"txtHowChanged";
			this->txtHowChanged->Size = System::Drawing::Size(174, 16);
			this->txtHowChanged->TabIndex = 5;
			this->txtHowChanged->Text = L"Наскільки змінилась ціна:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 276);
			this->Controls->Add(this->txtHowChanged);
			this->Controls->Add(this->txtMsg);
			this->Controls->Add(this->costBox);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->calcBtn);
			this->Controls->Add(this->origCost);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void calcBtn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			double origCost, newCost;

			origCost = Convert::ToDouble(costBox->Text);

			newCost = origCost - origCost * 0.1;
			newCost = newCost + newCost * 0.2;

			txtMsg->Text = "Ціна яка вийшла після обчислень = " + Convert::ToString(newCost);

			txtHowChanged->Text = (newCost > origCost) ? "Нова ціна більше за стару на " + Convert::ToString(((newCost - origCost) / origCost) * 100) + "%"
				: "Нова ціна менше за стару на " + Convert::ToString(((origCost - newCost) / origCost) * 100) + "%";
		}

		System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Form::Close();
		}
	};
}