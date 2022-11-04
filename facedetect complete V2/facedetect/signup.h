#pragma once
#include<iostream>
#include<stdlib.h>
#include <string.h>
#include<stdio.h>
#include "detectionscreen.h"
#include "FaceRec.h"
#include "Lecture_c.h"
#include<opencv2\objdetect\objdetect.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\highgui\highgui.hpp>
#include "opencv2\core.hpp"
#include <opencv2\core\core.hpp>
#include <opencv2\opencv.hpp>
#include "opencv2\face.hpp"
#include <fstream>
#include <sstream>

namespace facedetect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for signup
	/// </summary>
	public ref class signup : public System::Windows::Forms::Form
	{
	public:
		signup(void)
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
		~signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(signup::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(29, 244);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(404, 37);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &signup::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(29, 130);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(396, 37);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &signup::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(37, 528);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(291, 96);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Add Teacher";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &signup::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(31, 190);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 36);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Surname";
			this->label3->Click += gcnew System::EventHandler(this, &signup::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(31, 76);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 36);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &signup::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(73, 22);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 96);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Admin\r\nPage\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &signup::label1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(29, 361);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(396, 37);
			this->textBox4->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(31, 304);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 36);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Student No.";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(595, 129);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(512, 661);
			this->panel1->TabIndex = 16;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(29, 528);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(291, 96);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Add Student";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &signup::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->ImageKey = L"(none)";
			this->label4->Location = System::Drawing::Point(29, 11);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(236, 84);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Student sign up\r\n\r\n";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Location = System::Drawing::Point(36, 129);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(512, 661);
			this->panel2->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(39, 415);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 36);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Staff ID";
			this->label9->Click += gcnew System::EventHandler(this, &signup::label9_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(36, 470);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(396, 37);
			this->textBox5->TabIndex = 18;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(37, 361);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(396, 37);
			this->textBox10->TabIndex = 17;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label14.Image")));
			this->label14->Location = System::Drawing::Point(39, 304);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(147, 36);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(39, 76);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 36);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label7->ImageKey = L"(none)";
			this->label7->Location = System::Drawing::Point(29, 11);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(240, 84);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Teacher sign up\r\n\r\n";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(37, 130);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(396, 37);
			this->textBox3->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(39, 190);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(134, 36);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Surname";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(36, 248);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(404, 37);
			this->textBox6->TabIndex = 11;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->textBox8);
			this->panel3->Controls->Add(this->textBox9);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Location = System::Drawing::Point(1159, 129);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(512, 661);
			this->panel3->TabIndex = 18;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(39, 528);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(291, 96);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Remove Student";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &signup::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(31, 217);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(291, 96);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Remove Teacher";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &signup::button4_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label12.Image")));
			this->label12->Location = System::Drawing::Point(32, 76);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(160, 36);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Teacher ID";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label11->ImageKey = L"(none)";
			this->label11->Location = System::Drawing::Point(31, 11);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(163, 42);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Delete Tab";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(18, 431);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(396, 37);
			this->textBox8->TabIndex = 14;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(31, 130);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(404, 37);
			this->textBox9->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label13.Image")));
			this->label13->Location = System::Drawing::Point(32, 363);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(173, 36);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Student No.";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(777, 841);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(769, 272);
			this->dataGridView1->TabIndex = 19;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(16, 841);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(713, 272);
			this->dataGridView2->TabIndex = 20;
			// 
			// signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1752, 1055);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"signup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Page";
			this->Load += gcnew System::EventHandler(this, &signup::signup_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Software_Eng.accdb");
		int checker;
		Bitmap^ bitmap;

		void connectiondb() {

			
				conn->Open();
				OleDbCommand^ cmd = conn->CreateCommand();
				cmd->CommandType = CommandType::Text;
				cmd->CommandText = "Select * from Students";
				cmd->ExecuteNonQuery();

				OleDbCommand^ cmd1 = conn->CreateCommand();
				cmd1->CommandType = CommandType::Text;
				cmd1->CommandText = "Select * from staff";
				cmd1->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable();
				OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;

				DataTable^ dt1 = gcnew DataTable();
				OleDbDataAdapter^ dp1 = gcnew OleDbDataAdapter(cmd1);
				dp1->Fill(dt1);
				dataGridView2->DataSource = dt1;

				conn->Close();


		}


private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//Verification
	std::string sstafid, sname, ssurname, spasssword;
	MarshalString(textBox5->Text, sstafid);
	MarshalString(textBox3->Text, sname);
	MarshalString(textBox6->Text, ssurname);
	MarshalString(textBox10->Text, spasssword);
	if (validatestring(sname,"First name",25) == true)
	{
		if (validatestring(ssurname, "Last name", 25) == true)
		{
			if (isvalidpassword(spasssword, 6, 20))
			{
				OleDbCommand^ cmd = conn->CreateCommand();
				try
				{
					conn->Open();
					cmd->CommandType = CommandType::Text;
					
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally
				{
					if (isvalidstdnum(sstafid))
					{
						//Check for duplicates
						cmd->CommandText = "Select COUNT(*) as stff_count FROM Staff WHERE StaffID=" + "\"" + textBox5->Text + "\"";
						OleDbDataReader^ r = cmd->ExecuteReader();
						r->Read();
						int numstdents = int::Parse(r["stff_count"]->ToString());
						r->Close();
						if (numstdents == 0)
						{
		
								cmd->CommandText = "insert into Staff (StaffID,FirstName,Surname,[Password])values('" +

									textBox5->Text + "','" +
									textBox3->Text + "','" +
									textBox6->Text + "','" +
									textBox10->Text +

									"')";
								cmd->ExecuteNonQuery();
	
							conn->Close();
							MessageBox::Show("Teacher Added", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
							connectiondb();
							textBox5->Clear();
							textBox3->Clear();
							textBox6->Clear();
							textBox10->Clear();
						}
						else
						{
							MessageBox::Show("User Already Exits!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							textBox5->Clear();
							textBox3->Clear();
							textBox6->Clear();
							textBox10->Clear();
						}
					}
					else
					{
						textBox5->Clear();
					}
				}

			}
			else
			{
				textBox10->Clear();
			}
		}
		else
		{
			textBox6->Clear();
		}
	}
	else
	{
		textBox3->Clear();
	}

	conn->Close();

}
private: System::Void signup_Load(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		connectiondb();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "C++ database connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
// Validate 
	std::string sname, ssurname;
	MarshalString(textBox1->Text, sname);
	MarshalString(textBox2->Text, ssurname);
	if (validatestring(sname,"First name",25))
	{
		if (validatestring(ssurname, "Last name",25))
		{
			OleDbCommand^ cmd = conn->CreateCommand();
			try
			{
				conn->Open();
				cmd->CommandType = CommandType::Text;

			}
			catch (Exception^ ex)
			{


				conn->Close();
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			finally
			{
				std::string sstdnum;
				MarshalString(textBox4->Text, sstdnum);
				if (isvalidstdnum(sstdnum))
				{
					cmd->CommandText = "Select COUNT(*) as std_count from Students WHERE StudentID=" + "\"" + textBox4->Text + "\"";
					OleDbDataReader^ r = cmd->ExecuteReader();
					r->Read();
					int numstdents = int::Parse(r["std_count"]->ToString());
					r->Close();
					if (numstdents == 0)
					{
						cmd->CommandText = "insert into Students (StudentName,StudentSurname,StudentID)values('" +

							textBox1->Text + "','" +
							textBox2->Text + "','" +
							textBox4->Text +

							"')";
						cmd->ExecuteNonQuery();
						conn->Close();
						connectiondb();
						std::string sid;
						MarshalString(textBox4->Text, sid);
						addFace(sid);
						eigenFaceTrainer();
						MessageBox::Show("Student added", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
						textBox1->Clear();
						textBox2->Clear();
						textBox4->Clear();
					}
					else
					{
						MessageBox::Show("User Already Exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						textBox4->Clear();
						textBox1->Clear();
						textBox2->Clear();
						conn->Close();
					}

				}
				else
				{
					textBox4->Clear();
					conn->Close();
				}
			}

		}
		else
		{
			textBox2->Clear();
		}
	}
	else
	{
		textBox1->Clear();
	}
	
	

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "Delete * from staff where StaffID ='" + textBox9->Text + "'";
		cmd->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("Teacher removed", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		connectiondb();
		textBox9->Clear();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}



}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	try
	{
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "Delete * from Students where StudentID ='" + textBox8->Text+"'";
		cmd->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("Student Removed", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		connectiondb();
		textBox8->Clear();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	   //Functions to be used for validation purpioses and conversion
	   void MarshalString(String^ s, std::string& os) {
		   using namespace Runtime::InteropServices;
		   const char* chars =
			   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		   os = chars;
		   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   }

	   bool isvalidstdnum(std::string stdnum)
	   {
		   bool isvalid = false;
		   if (stdnum.length() == 9)
		   {
			   isvalid = true;
			   int i = 0;
			    while(i<stdnum.length())
			   {
				   if (!((stdnum[i]>='0') && (stdnum[i]<='9')))
				   {
					   isvalid = false;
					   MessageBox::Show("ID must only consist of digits", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					   break;
				   }
				   i++;
			}//while done
		   }
		   else
		   {
			   MessageBox::Show("ID number must be 9 digits long", "Warining", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		   }
		   return isvalid;
	   }
	   bool validatestring(std::string sstring,std::string sfeild,int maxsize)
	   {
		   bool isvalid = false;
		   
		   if (sstring != "")
		   {
			   if (maxsize >= sstring.length())
			   {

				   isvalid = true;
				   int i = 0;
				   while ((i < sstring.length()) && (isvalid == true))
				   {
					   if (!(sstring[i] >= 'A' && sstring[i] <= 'Z') && !(sstring[i] >= 'a' && sstring[i] <= 'z'))
					   {
						   MessageBox::Show((gcnew String(sfeild.c_str())) + " must only contain letters", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						   isvalid = false;
					   }
					   i++;
				   }

			   }
			   else
			   {
				   MessageBox::Show("The maxmumim lenght for " + (gcnew String(sfeild.c_str())) + " is " +
					   maxsize.ToString() + " letters", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
			   
		   }
		   else
		   {
			   MessageBox::Show((gcnew String(sfeild.c_str())) + " is empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   isvalid = false;
		   }
		   return isvalid;
	   }
	   bool isvalidpassword(std::string spass,int min,int max)
	   {
		   bool isvalid = false;
		   if (spass != "")
		   {
			   if (spass.length() >= min && spass.length() <= max)
			   {
				   isvalid = true;
			   }
			   else
			   {
				   MessageBox::Show("Password must be between " + min.ToString() + " and " + max.ToString() + " characters"
					   , "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
		   else
		   {
			   MessageBox::Show("Password cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
		   return isvalid;
	   }
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}