#pragma once
#include "Pila.h"
#include"Node.h"
namespace Proyecto011225419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		static int Vacio = 0;
		static int Tpial;
		static int NPilastexto;
		static int ContB = 0;//Negro
		static int ContZ = 0;//Azul
		static int ContW = 0;//Blanco
		static int ContR = 0;// Rojo
		static int ContY = 0;//Amarillo
		static int ContG = 0;//Verde
		static int ContP = 0;//Morado
		static int ContN = 0;//Azul Marino
		static array<String^>^ archivocolumnas;


		static Pila^ pila1 = gcnew Pila();//pilas para cada color
		static Pila^ pila2 = gcnew Pila();//pilas para cada color
		static Pila^ pila3 = gcnew Pila();//pilas para cada color
		static Pila^ pila4 = gcnew Pila();//pilas para cada color
		static Pila^ pila5 = gcnew Pila();//pilas para cada color
		static Pila^ pila6 = gcnew Pila();//pilas para cada color
		static Pila^ pila7 = gcnew Pila();//pilas para cada color
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
		   static Pila^ pila8 = gcnew Pila();//pilas para cada color


	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ Sarchivo;
	private: System::Windows::Forms::Button^ Bsubir;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtdireccion;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtTpila;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Sarchivo = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Bsubir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtdireccion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTpila = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Sarchivo
			// 
			this->Sarchivo->FileName = L"Subida de archivo";
			this->Sarchivo->Filter = L"All files (*.*)|*.*";
			// 
			// Bsubir
			// 
			this->Bsubir->BackColor = System::Drawing::Color::PaleVioletRed;
			this->Bsubir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bsubir->Location = System::Drawing::Point(150, 109);
			this->Bsubir->Name = L"Bsubir";
			this->Bsubir->Size = System::Drawing::Size(119, 71);
			this->Bsubir->TabIndex = 0;
			this->Bsubir->Text = L"Subir archivo";
			this->Bsubir->UseVisualStyleBackColor = false;
			this->Bsubir->Click += gcnew System::EventHandler(this, &MyForm::Bsubir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Path";
			// 
			// txtdireccion
			// 
			this->txtdireccion->Location = System::Drawing::Point(150, 63);
			this->txtdireccion->Name = L"txtdireccion";
			this->txtdireccion->Size = System::Drawing::Size(168, 22);
			this->txtdireccion->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(554, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Color manía";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(21, 186);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(705, 435);
			this->dataGridView1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(667, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(226, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ingrese Tamaño de la pila";
			// 
			// txtTpila
			// 
			this->txtTpila->Location = System::Drawing::Point(903, 59);
			this->txtTpila->Name = L"txtTpila";
			this->txtTpila->Size = System::Drawing::Size(155, 22);
			this->txtTpila->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(373, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 71);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(869, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 39);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Facil";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(949, 235);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 39);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Dificil";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1032, 171);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 39);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Medio";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(934, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Dificultades";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(813, 353);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 55);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Pila";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Fuchsia;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1030, 352);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 55);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Cola";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(924, 315);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Modalidaes";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(944, 457);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Pasos";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(801, 497);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(156, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Posicion de entra";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(805, 543);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 22);
			this->textBox1->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1026, 497);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(163, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Posicion de salida";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1030, 543);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(159, 22);
			this->textBox2->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(1243, 727);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtTpila);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtdireccion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Bsubir);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void ReestablecerMatriz() {
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->ColumnHeadersVisible = false;
		dataGridView1->RowHeadersVisible = false;
	}
		   //Cuantos colores hay en el archivo
		   void CantidadColores(String^ color) {
			   color->ToUpper();
			   char conv;
			   conv = Convert::ToChar(color);
			   switch (conv)
			   {
			   case'B':
				   ContB++;
				   break;

			   case'Z':
				   ContZ++;
				   break;

			   case'W':
				   ContW++;
				   break;

			   case'R':
				   ContR++;
				   break;

			   case'Y':
				   ContY++;
				   break;

			   case'G':
				   ContG++;
				   break;

			   case'P':
				   ContP++;
				   break;

			   case'N':
				   ContN++;
				   break;

			   default:
				   MessageBox::Show("Erro", "Ingreso algo incorrecot", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   break;
			   }
		   }
		   //Si algun color es mas grande que la maxima tamaño de la pila
		   bool ColoresMayor(int TamañoPila) {
			   bool respuesta = false;
			   if (ContB > TamañoPila || ContZ > TamañoPila || ContW > TamañoPila || ContR > TamañoPila || ContY > TamañoPila || ContG > TamañoPila || ContP > TamañoPila || ContN > TamañoPila)
			   {
				   respuesta = true;
			   }
			   return  respuesta;
		   }
		   //Colores
		   Color setcolor(String^ Lcolor) {
			   if (Lcolor == "B")
			   {
				   return Color::Black;
			   }
			   else if (Lcolor = "Z")
			   {
				   return Color::Blue;
			   }
			   else if (Lcolor = "W")
			   {
				   return Color::WhiteSmoke;
			   }
			   else if (Lcolor = "R")
			   {
				   return Color::Red;
			   }
			   else if (Lcolor = "Y")
			   {
				   return Color::Yellow;
			   }
			   else if (Lcolor = "G")
			   {
				   return Color::Green;
			   }
			   else if (Lcolor = "P")
			   {
				   return Color::Purple;
			   }
			   else if (Lcolor = "N")
			   {
				   return Color::AliceBlue;
			   }
			   else
			   {
				   return Color::White;
			   }
		   }
		   void llenardata(int tamañopila, int Npila) {

			   for (int i = 0; i < Npila; i++) //int i =0 i==0
			   {
				   DataGridViewTextBoxColumn^ columan = gcnew DataGridViewTextBoxColumn();
				   columan->Width = 100;
				   dataGridView1->Columns->Add(columan);
			   }
			   dataGridView1->Rows->Add(tamañopila);
			   Pila^ pilaaux = gcnew Pila();
			   Pila^ pilaaux2 = gcnew Pila();//No estaba
			   Pila^ pilaaux3 = gcnew Pila();//No estaba
			   for (int i = 0; i <Npila; i++)
			   {

				   if (i == Npila-1)
				   {
					   int Tpila = pila1->tamaño();
					   for (int j =(tamañopila); j>(tamañopila- Tpila); j--)
					   {						   
						   pilaaux->addFront(pila1->GetFrot());
						   pila1->RemoveFront();
						   dataGridView1[i,j]->Style->BackColor= setcolor(pilaaux->GetFrot());
					   }

				   }
				   //De taca para delante no lo tenia
			
				   //hasta aca termina lo que no tenia 
			   }

		   }

		   int NcoloresMayorNpilas() {
			   int ContadorGeneral;
			   if (ContB > 0)
			   {
				   ContadorGeneral++;
			   }
			   else if (ContZ > 0)
			   {
				   ContadorGeneral++;
			   }
			   else if (ContW > 0)
			   {
				   ContadorGeneral++;
			   }
			   else if (ContR > 0)
			   {
				   ContadorGeneral++;
			   }
			   else if (ContY > 0)
			   {
				   ContadorGeneral++;
			   }
			   else if (ContG > 0) {
				   ContadorGeneral++;
			   }
			   else if (ContP > 0)
			   {
				   ContadorGeneral++;
			   }
			   else if (ContN > 0)
			   {
				   ContadorGeneral++;
			   }
			   return ContadorGeneral;
		   }

	private: System::Void Bsubir_Click(System::Object^ sender, System::EventArgs^ e) {


		Sarchivo->FileName = "";
		if (Sarchivo->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			ReestablecerMatriz();
			txtdireccion->Text = Sarchivo->FileName;
			array<String^>^ archivoLineas = File::ReadAllLines(Sarchivo->FileName);

			if (archivoLineas->Length > 0)
			{
				array<String^>^ archivocolumnas = archivoLineas[0]->Split('X');
				NPilastexto = archivocolumnas->Length;//columans

				if (archivoLineas->Length > 0)
				{
					for (size_t i = 0; i < archivocolumnas->Length; i++)
					{
						int valor = archivocolumnas[0]->Length;//ni esto

						for (size_t j = 0; j <= archivocolumnas[i]->Length - 2; j++)
						{
							//String^ palabra = (archivocolumnas[i]->Split(',')[i]);//antes eran i
							String^ palabra = archivocolumnas[i]->Split(',')[j];
							if (palabra == "")
							{
								Vacio++;
							}
							else
							{


								CantidadColores(palabra);
								if (i == 0)
								{
									pila1->addFront(palabra);
								}
								else if (i == 1)
								{
									pila2->addFront(palabra);
								}
								else if (i == 2)
								{
									pila3->addFront(palabra);
								}
								else if (i == 3) {
									pila4->addFront(palabra);
								}
								else if (i == 4) {
									pila5->addFront(palabra);
								}
								else if (i == 5) {
									pila6->addFront(palabra);
								}
								else if (i == 6) {
									pila7->addFront(palabra);
								}
								else if (i == 7) {
									pila8->addFront(palabra);
								}
							}
						}
					}
				}
			}


		}
		else
		{
			MessageBox::Show("Archivo vacio", "El Archivo no contienen nada", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}

		if (NcoloresMayorNpilas() < NPilastexto && ColoresMayor(int::Parse(txtTpila->Text)) == false)
		{
			MessageBox::Show("Si funciono", "si sirve", MessageBoxButtons::OK, MessageBoxIcon::Information);

			llenardata(int::Parse(txtTpila->Text), NPilastexto);
		}

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
