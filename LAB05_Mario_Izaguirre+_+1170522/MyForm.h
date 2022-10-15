#pragma once
#include "lista.h"
#include "mazo.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <random>
#include <math.h>
#include <msclr/marshal_cppstd.h>

namespace LAB05MarioIzaguirre1170522 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
    List listaEnteros;
	ListM mazoPrincipal, Pila1, Pila2, Pila3, Pila4, Pila5,Pila6, Pila7;
	//variables globales
	bool facil, normal, dificil;
	std::string arregloCartas[52];
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBoxtemp;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ Informacion;
	private: System::Windows::Forms::Button^ Nextcart;
	private: System::Windows::Forms::TextBox^ textBoxCartaActual;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ Dificil;
	private: System::Windows::Forms::Button^ Normal;
	private: System::Windows::Forms::Button^ Facil;
	private: System::Windows::Forms::Button^ G7;
	private: System::Windows::Forms::Button^ G6;
	private: System::Windows::Forms::Button^ G5;
	private: System::Windows::Forms::Button^ G4;
	private: System::Windows::Forms::Button^ G3;
	private: System::Windows::Forms::Button^ G2;
	private: System::Windows::Forms::Button^ G1;
	private: System::Windows::Forms::TextBox^ pila7;
	private: System::Windows::Forms::TextBox^ pila6;
	private: System::Windows::Forms::TextBox^ pila5;
	private: System::Windows::Forms::TextBox^ pila4;
	private: System::Windows::Forms::TextBox^ pila3;
	private: System::Windows::Forms::TextBox^ pila2;
	private: System::Windows::Forms::TextBox^ pila1;

	protected:






	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxtemp = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pila1 = (gcnew System::Windows::Forms::TextBox());
			this->pila2 = (gcnew System::Windows::Forms::TextBox());
			this->pila3 = (gcnew System::Windows::Forms::TextBox());
			this->pila4 = (gcnew System::Windows::Forms::TextBox());
			this->pila5 = (gcnew System::Windows::Forms::TextBox());
			this->pila6 = (gcnew System::Windows::Forms::TextBox());
			this->pila7 = (gcnew System::Windows::Forms::TextBox());
			this->G1 = (gcnew System::Windows::Forms::Button());
			this->G2 = (gcnew System::Windows::Forms::Button());
			this->G3 = (gcnew System::Windows::Forms::Button());
			this->G4 = (gcnew System::Windows::Forms::Button());
			this->G5 = (gcnew System::Windows::Forms::Button());
			this->G6 = (gcnew System::Windows::Forms::Button());
			this->G7 = (gcnew System::Windows::Forms::Button());
			this->Facil = (gcnew System::Windows::Forms::Button());
			this->Normal = (gcnew System::Windows::Forms::Button());
			this->Dificil = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBoxCartaActual = (gcnew System::Windows::Forms::TextBox());
			this->Nextcart = (gcnew System::Windows::Forms::Button());
			this->Informacion = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(671, 484);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBoxtemp);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->textBox15);
			this->tabPage1->Controls->Add(this->textBox16);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->textBox14);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->textBox13);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->textBox12);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(663, 455);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ejercicio 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// textBoxtemp
			// 
			this->textBoxtemp->Enabled = false;
			this->textBoxtemp->Location = System::Drawing::Point(480, 70);
			this->textBoxtemp->Multiline = true;
			this->textBoxtemp->Name = L"textBoxtemp";
			this->textBoxtemp->Size = System::Drawing::Size(177, 370);
			this->textBoxtemp->TabIndex = 49;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(477, 51);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(44, 16);
			this->label21->TabIndex = 47;
			this->label21->Text = L"LISTA";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(314, 270);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 46;
			this->button11->Text = L"Añadir";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(362, 242);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(66, 22);
			this->textBox15->TabIndex = 45;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(257, 242);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(89, 22);
			this->textBox16->TabIndex = 44;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(359, 220);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 16);
			this->label19->TabIndex = 43;
			this->label19->Text = L"Posicion";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(255, 223);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(55, 16);
			this->label20->TabIndex = 42;
			this->label20->Text = L"Numero";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(254, 204);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(183, 16);
			this->label18->TabIndex = 41;
			this->label18->Text = L"Añadir numero en la posicion ";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(353, 409);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 40;
			this->button10->Text = L"Eliminar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(280, 409);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(53, 22);
			this->textBox14->TabIndex = 39;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(277, 380);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(116, 16);
			this->label17->TabIndex = 38;
			this->label17->Text = L"Numero a eliminar";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(353, 342);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 37;
			this->button9->Text = L"Eliminar";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(317, 168);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 36;
			this->button8->Text = L"Buscar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(303, 76);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 35;
			this->button7->Text = L"Buscar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(280, 342);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(53, 22);
			this->textBox13->TabIndex = 34;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(277, 314);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(104, 16);
			this->label16->TabIndex = 33;
			this->label16->Text = L"Indice a eliminar";
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(365, 140);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(66, 22);
			this->textBox12->TabIndex = 32;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(260, 140);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(89, 22);
			this->textBox11->TabIndex = 31;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(362, 118);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 16);
			this->label15->TabIndex = 30;
			this->label15->Text = L"Posicion";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(258, 121);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(55, 16);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Numero";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(254, 102);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(186, 16);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Buscar indice con el elemento";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(337, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 16);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Numero";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(254, 31);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 16);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Posicion";
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(330, 48);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(91, 22);
			this->textBox10->TabIndex = 25;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(257, 48);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(53, 22);
			this->textBox9->TabIndex = 24;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(254, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(186, 16);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Buscar elemento con el indice";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(34, 417);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 23);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Remplazar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(86, 389);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(65, 22);
			this->textBox7->TabIndex = 21;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(15, 389);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(65, 22);
			this->textBox8->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 370);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Numero";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(87, 370);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Posicion";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 342);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(207, 16);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Remplazar numero en la posicion";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(480, 6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(161, 23);
			this->button5->TabIndex = 16;
			this->button5->Text = L"ELIMINAR LISTA";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(41, 307);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 32);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Mostrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(81, 279);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(70, 22);
			this->textBox6->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 279);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(65, 22);
			this->textBox5->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Numero";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(78, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Posicion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Mostrar posicion";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(72, 192);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Verificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(117, 164);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(77, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 164);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 22);
			this->textBox3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Verificar si elemento existe";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(144, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Contar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(16, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contador de elementos";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(144, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Agregar un Numero";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Teal;
			this->tabPage2->Controls->Add(this->Informacion);
			this->tabPage2->Controls->Add(this->Nextcart);
			this->tabPage2->Controls->Add(this->textBoxCartaActual);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->Dificil);
			this->tabPage2->Controls->Add(this->Normal);
			this->tabPage2->Controls->Add(this->Facil);
			this->tabPage2->Controls->Add(this->G7);
			this->tabPage2->Controls->Add(this->G6);
			this->tabPage2->Controls->Add(this->G5);
			this->tabPage2->Controls->Add(this->G4);
			this->tabPage2->Controls->Add(this->G3);
			this->tabPage2->Controls->Add(this->G2);
			this->tabPage2->Controls->Add(this->G1);
			this->tabPage2->Controls->Add(this->pila7);
			this->tabPage2->Controls->Add(this->pila6);
			this->tabPage2->Controls->Add(this->pila5);
			this->tabPage2->Controls->Add(this->pila4);
			this->tabPage2->Controls->Add(this->pila3);
			this->tabPage2->Controls->Add(this->pila2);
			this->tabPage2->Controls->Add(this->pila1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(663, 455);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ejercicio 2";
			// 
			// pila1
			// 
			this->pila1->Enabled = false;
			this->pila1->Location = System::Drawing::Point(47, 63);
			this->pila1->Multiline = true;
			this->pila1->Name = L"pila1";
			this->pila1->Size = System::Drawing::Size(42, 370);
			this->pila1->TabIndex = 1;
			// 
			// pila2
			// 
			this->pila2->Enabled = false;
			this->pila2->Location = System::Drawing::Point(105, 63);
			this->pila2->Multiline = true;
			this->pila2->Name = L"pila2";
			this->pila2->Size = System::Drawing::Size(42, 370);
			this->pila2->TabIndex = 2;
			// 
			// pila3
			// 
			this->pila3->Enabled = false;
			this->pila3->Location = System::Drawing::Point(165, 63);
			this->pila3->Multiline = true;
			this->pila3->Name = L"pila3";
			this->pila3->Size = System::Drawing::Size(42, 370);
			this->pila3->TabIndex = 3;
			// 
			// pila4
			// 
			this->pila4->Enabled = false;
			this->pila4->Location = System::Drawing::Point(223, 63);
			this->pila4->Multiline = true;
			this->pila4->Name = L"pila4";
			this->pila4->Size = System::Drawing::Size(42, 370);
			this->pila4->TabIndex = 4;
			// 
			// pila5
			// 
			this->pila5->Enabled = false;
			this->pila5->Location = System::Drawing::Point(281, 63);
			this->pila5->Multiline = true;
			this->pila5->Name = L"pila5";
			this->pila5->Size = System::Drawing::Size(42, 370);
			this->pila5->TabIndex = 5;
			// 
			// pila6
			// 
			this->pila6->Enabled = false;
			this->pila6->Location = System::Drawing::Point(338, 63);
			this->pila6->Multiline = true;
			this->pila6->Name = L"pila6";
			this->pila6->Size = System::Drawing::Size(42, 370);
			this->pila6->TabIndex = 6;
			// 
			// pila7
			// 
			this->pila7->Enabled = false;
			this->pila7->Location = System::Drawing::Point(397, 63);
			this->pila7->Multiline = true;
			this->pila7->Name = L"pila7";
			this->pila7->Size = System::Drawing::Size(42, 370);
			this->pila7->TabIndex = 7;
			// 
			// G1
			// 
			this->G1->BackColor = System::Drawing::Color::Aquamarine;
			this->G1->Enabled = false;
			this->G1->Location = System::Drawing::Point(47, 34);
			this->G1->Name = L"G1";
			this->G1->Size = System::Drawing::Size(47, 23);
			this->G1->TabIndex = 11;
			this->G1->Text = L"G1";
			this->G1->UseVisualStyleBackColor = false;
			// 
			// G2
			// 
			this->G2->BackColor = System::Drawing::Color::Aquamarine;
			this->G2->Enabled = false;
			this->G2->Location = System::Drawing::Point(105, 34);
			this->G2->Name = L"G2";
			this->G2->Size = System::Drawing::Size(47, 23);
			this->G2->TabIndex = 12;
			this->G2->Text = L"G2";
			this->G2->UseVisualStyleBackColor = false;
			// 
			// G3
			// 
			this->G3->BackColor = System::Drawing::Color::Aquamarine;
			this->G3->Enabled = false;
			this->G3->Location = System::Drawing::Point(165, 34);
			this->G3->Name = L"G3";
			this->G3->Size = System::Drawing::Size(47, 23);
			this->G3->TabIndex = 13;
			this->G3->Text = L"G3";
			this->G3->UseVisualStyleBackColor = false;
			// 
			// G4
			// 
			this->G4->BackColor = System::Drawing::Color::Aquamarine;
			this->G4->Enabled = false;
			this->G4->Location = System::Drawing::Point(218, 34);
			this->G4->Name = L"G4";
			this->G4->Size = System::Drawing::Size(47, 23);
			this->G4->TabIndex = 14;
			this->G4->Text = L"G4";
			this->G4->UseVisualStyleBackColor = false;
			// 
			// G5
			// 
			this->G5->BackColor = System::Drawing::Color::Aquamarine;
			this->G5->Enabled = false;
			this->G5->Location = System::Drawing::Point(276, 34);
			this->G5->Name = L"G5";
			this->G5->Size = System::Drawing::Size(47, 23);
			this->G5->TabIndex = 15;
			this->G5->Text = L"G5";
			this->G5->UseVisualStyleBackColor = false;
			// 
			// G6
			// 
			this->G6->BackColor = System::Drawing::Color::Aquamarine;
			this->G6->Enabled = false;
			this->G6->Location = System::Drawing::Point(333, 34);
			this->G6->Name = L"G6";
			this->G6->Size = System::Drawing::Size(47, 23);
			this->G6->TabIndex = 16;
			this->G6->Text = L"G6";
			this->G6->UseVisualStyleBackColor = false;
			// 
			// G7
			// 
			this->G7->BackColor = System::Drawing::Color::Aquamarine;
			this->G7->Enabled = false;
			this->G7->Location = System::Drawing::Point(397, 34);
			this->G7->Name = L"G7";
			this->G7->Size = System::Drawing::Size(47, 23);
			this->G7->TabIndex = 17;
			this->G7->Text = L"G7";
			this->G7->UseVisualStyleBackColor = false;
			this->G7->Click += gcnew System::EventHandler(this, &MyForm::G7_Click);
			// 
			// Facil
			// 
			this->Facil->BackColor = System::Drawing::Color::LawnGreen;
			this->Facil->Location = System::Drawing::Point(570, 16);
			this->Facil->Name = L"Facil";
			this->Facil->Size = System::Drawing::Size(75, 23);
			this->Facil->TabIndex = 19;
			this->Facil->Text = L"Facil";
			this->Facil->UseVisualStyleBackColor = false;
			this->Facil->Click += gcnew System::EventHandler(this, &MyForm::Facil_Click);
			// 
			// Normal
			// 
			this->Normal->BackColor = System::Drawing::Color::Gold;
			this->Normal->Location = System::Drawing::Point(570, 45);
			this->Normal->Name = L"Normal";
			this->Normal->Size = System::Drawing::Size(75, 23);
			this->Normal->TabIndex = 20;
			this->Normal->Text = L"Normal";
			this->Normal->UseVisualStyleBackColor = false;
			// 
			// Dificil
			// 
			this->Dificil->BackColor = System::Drawing::Color::Crimson;
			this->Dificil->Location = System::Drawing::Point(570, 74);
			this->Dificil->Name = L"Dificil";
			this->Dificil->Size = System::Drawing::Size(75, 23);
			this->Dificil->TabIndex = 21;
			this->Dificil->Text = L"Dificil";
			this->Dificil->UseVisualStyleBackColor = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(480, 150);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(139, 16);
			this->label22->TabIndex = 22;
			this->label22->Text = L"Carta actual del mazo:";
			// 
			// textBoxCartaActual
			// 
			this->textBoxCartaActual->Enabled = false;
			this->textBoxCartaActual->Location = System::Drawing::Point(498, 169);
			this->textBoxCartaActual->Name = L"textBoxCartaActual";
			this->textBoxCartaActual->Size = System::Drawing::Size(100, 22);
			this->textBoxCartaActual->TabIndex = 23;
			// 
			// Nextcart
			// 
			this->Nextcart->Enabled = false;
			this->Nextcart->Location = System::Drawing::Point(492, 211);
			this->Nextcart->Name = L"Nextcart";
			this->Nextcart->Size = System::Drawing::Size(125, 23);
			this->Nextcart->TabIndex = 24;
			this->Nextcart->Text = L"Pasar carta";
			this->Nextcart->UseVisualStyleBackColor = true;
			// 
			// Informacion
			// 
			this->Informacion->Location = System::Drawing::Point(492, 397);
			this->Informacion->Name = L"Informacion";
			this->Informacion->Size = System::Drawing::Size(109, 23);
			this->Informacion->TabIndex = 25;
			this->Informacion->Text = L"INFORMACION";
			this->Informacion->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 508);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try 
	{
		int elemento = Convert::ToInt32(textBox1->Text);
		listaEnteros.Add(elemento);
		textBoxtemp->Text = gcnew String(listaEnteros.mostrarLista(listaEnteros.header).data());
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Dato ingresado erróneo, vuelva a intentarlo");
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	listaEnteros.Clear();
	textBoxtemp->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = Convert::ToString(listaEnteros.Count());
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try 
	{
		int elemento = Convert::ToInt32(textBox3->Text);
		if (listaEnteros.Contains(elemento))
		{
			textBox4->Text = "Si existe";
		}
		else
		{
			textBox4->Text = "No existe";
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error, Dato no es un entero");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int elemento = Convert::ToInt32(textBox5->Text);
		if (listaEnteros.Contains(elemento))
		{
			textBox6->Text = Convert::ToString(listaEnteros.IndexOf(elemento));
		}
		else
		{
			textBox6->Text = "No hay posicion";
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Dato Ingresado es erroneo");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int elemento = Convert::ToInt32(textBox8->Text);
		int Index = Convert::ToInt32(textBox7->Text);
		if (Index >= listaEnteros.Count() || Index < 0)
		{
			MessageBox::Show("Elemento no se puede agregar en esa posicion");
		}
		else
		{
			listaEnteros.SetItem(Index, elemento);
			textBoxtemp->Text = gcnew String(listaEnteros.mostrarLista(listaEnteros.header).data());
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Dato no se puede remplazar");
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int Index = Convert::ToInt32(textBox9->Text);
		if (Index >= listaEnteros.Count() || Index < 0)
		{
			MessageBox::Show("Elemento no se puede agregar en esa posicion");
		}
		else
		{
			textBox10->Text = Convert::ToString(listaEnteros.GetItem(Index));
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Dato erronio");
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int elemento = Convert::ToInt32(textBox11->Text);
		if (listaEnteros.Contains(elemento)) {
			textBox12->Text = Convert::ToString(listaEnteros.LastIndexOf(elemento));
		}
		else
		{
			MessageBox::Show("Elemento no se ha encontrado");
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Dato erronio");
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int elemento = Convert::ToInt32(textBox16->Text);
		int Index = Convert::ToInt32(textBox15->Text);
		if (Index < 0)
		{
			MessageBox::Show("No existe esa posicion, Ingrese una nueva");
		}
		else if (Index == 0)
		{
			listaEnteros.Add(elemento);
		}
		else
		{
			listaEnteros.Insert(Index, elemento);
		}

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Dato erronio");
	}
	textBoxtemp->Text = gcnew String(listaEnteros.mostrarLista(listaEnteros.header).data());
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (listaEnteros.header == nullptr)
		{
			MessageBox::Show("La lista está vacía, intente llenar primero la lista");
		}
		else
		{
			int indice = Convert::ToInt32(textBox13->Text);
			if (indice >= listaEnteros.Count() || indice < 0)
			{
				MessageBox::Show("valor inexistente en la lista, vuelva a intentar");
			}
			else
			{
				listaEnteros.RemoveAt(indice);
				if (listaEnteros.Count() >= 1)
				{
					textBoxtemp->Text = gcnew String(listaEnteros.mostrarLista(listaEnteros.header).data());
				}
				else
				{
					textBoxtemp->Text = "";
				}
			}
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Dato erronio");
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (listaEnteros.header == nullptr)
		{
			MessageBox::Show("La lista está vacía, intente llenar primero la lista");
		}
		else
		{
			int elemento = Convert::ToInt32(textBox14->Text);
			listaEnteros.Remove(elemento);
			if (listaEnteros.Count() >= 1)
			{
				textBoxtemp->Text = gcnew String(listaEnteros.mostrarLista(listaEnteros.header).data());
			}
			else
			{
				textBoxtemp->Text = "";
			}
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Dato erronio");
	}
}
private: System::Void G7_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   void leerArchivo()
	   {
		   std::ifstream archivo;
		   std::string texto;
		   int lineaActual = 0;
		   archivo.open("Texto.txt", std::ios::in);
		   if (archivo.fail())
		   {
			   MessageBox::Show("non pa");
		   }
		   while (!archivo.eof())
		   {
			   std::getline(archivo, texto);
			   arregloCartas[lineaActual] = texto;
			   lineaActual++;
		   }
		   std::random_device rd;
		   std::uniform_int_distribution<int>dist(1, 100);
		   for (rsize_t i = 0; i < dist(rd); i++)
		   {
			   std::random_shuffle(std::begin(arregloCartas), std::end(arregloCartas));
		   }
		   archivo.close();
	   }
private: System::Void Facil_Click(System::Object^ sender, System::EventArgs^ e) {
	facil = true;
	normal = false;
	dificil = false;
	Facil->Enabled = false;
	Normal->Enabled = false;
	Dificil->Enabled = false;
	Nextcart->Enabled = true;
	G1->Enabled = true;
	G2->Enabled = true;
	G3->Enabled = true;
	G4->Enabled = true;
	G5->Enabled = true;
	G6->Enabled = true;
	G7->Enabled = true;
	leerArchivo();
	for (size_t i = 0; i < 52; i++)
	{
		System::String^ cartaActual = gcnew String(arregloCartas[i].data());
		System::String^ numActual = cartaActual->Split(',')[0];
		System::String^ colorActual = cartaActual->Split(',')[1];
		mazoPrincipal.Add(msclr::interop::marshal_as<std::string>(numActual), msclr::interop::marshal_as<std::string>(colorActual));
	};
	textBoxCartaActual->Text = gcnew String(mazoPrincipal.mostrarPrimero().data());
	Pila1.Add(mazoPrincipal.header->data, mazoPrincipal.header->color);
	mazoPrincipal.Remove();
	Pila2.Add(mazoPrincipal.header->data, mazoPrincipal.header->color);
	mazoPrincipal.Remove();
	Pila3.Add(mazoPrincipal.header->data, mazoPrincipal.header->color);
	mazoPrincipal.Remove();
	Pila4.Add(mazoPrincipal.header->data, mazoPrincipal.header->color);
	mazoPrincipal.Remove();
	Pila5.Add(mazoPrincipal.header->data, mazoPrincipal.header->color);
	mazoPrincipal.Remove();
	Pila6.Add(mazoPrincipal.header->data, mazoPrincipal.header->color);
	mazoPrincipal.Remove();
	Pila7.Add(mazoPrincipal.header->data, mazoPrincipal.header->color);
	mazoPrincipal.Remove();
	pila1->Text = gcnew String(Pila1.mostrarLista(Pila1.header).data());
	pila2->Text = gcnew String(Pila2.mostrarLista(Pila2.header).data());
	pila3->Text = gcnew String(Pila3.mostrarLista(Pila3.header).data());
	pila4->Text = gcnew String(Pila4.mostrarLista(Pila4.header).data());
	pila5->Text = gcnew String(Pila5.mostrarLista(Pila5.header).data());
	pila6->Text = gcnew String(Pila6.mostrarLista(Pila6.header).data());
	pila7->Text = gcnew String(Pila7.mostrarLista(Pila7.header).data());
}
};

}
