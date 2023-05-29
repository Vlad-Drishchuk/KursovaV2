#pragma once

namespace KursovaV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AddEduInfo;
	protected:
	private: System::Windows::Forms::Button^ AddTime;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ Button5;

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
			this->AddEduInfo = (gcnew System::Windows::Forms::Button());
			this->AddTime = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AddEduInfo
			// 
			this->AddEduInfo->Location = System::Drawing::Point(171, 293);
			this->AddEduInfo->Name = L"AddEduInfo";
			this->AddEduInfo->Size = System::Drawing::Size(374, 46);
			this->AddEduInfo->TabIndex = 0;
			this->AddEduInfo->Text = L"Додати навчальну інформацію";
			this->AddEduInfo->UseVisualStyleBackColor = true;
			// 
			// AddTime
			// 
			this->AddTime->Location = System::Drawing::Point(171, 241);
			this->AddTime->Name = L"AddTime";
			this->AddTime->Size = System::Drawing::Size(374, 46);
			this->AddTime->TabIndex = 1;
			this->AddTime->Text = L"Додати час";
			this->AddTime->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(171, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(374, 46);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Додати питання";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(171, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(374, 46);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Видалити питання";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ubuntu", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(237, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Меню адміна";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(168, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введіть назву тесту";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(171, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(334, 20);
			this->textBox1->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Ubuntu", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(511, 81);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(39, 28);
			this->button3->TabIndex = 7;
			this->button3->Text = L"\?";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(168, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(171, 357);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(374, 46);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Зберегти тест в файл";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// Button5
			// 
			this->Button5->Location = System::Drawing::Point(374, 104);
			this->Button5->Name = L"Button5";
			this->Button5->Size = System::Drawing::Size(131, 23);
			this->Button5->TabIndex = 10;
			this->Button5->Text = L"Cтворити/Відкрити";
			this->Button5->UseVisualStyleBackColor = true;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 416);
			this->Controls->Add(this->Button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->AddTime);
			this->Controls->Add(this->AddEduInfo);
			this->Font = (gcnew System::Drawing::Font(L"Ubuntu", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label3->Text == L"Якщо файлу не існує він створиться") {
			label3->Text = " ";
		}
		else {
			label3->Text = L"Якщо файлу не існує він створиться";
		}
	}
};
}
