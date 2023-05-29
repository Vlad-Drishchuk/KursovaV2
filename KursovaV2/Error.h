#pragma once

namespace KursovaV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Error
	/// </summary>
	public ref class Error : public System::Windows::Forms::Form
	{
	public:
		Error(void)
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
		~Error()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Невірний пароль";
			// 
			// Error
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(336, 120);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Ubuntu", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Error";
			this->Text = L"Error";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
