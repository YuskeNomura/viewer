#pragma once

#include "read_data.h"

namespace terching_viewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 �̊T�v
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;





	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(258, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(480, 360);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(59, 515);
			this->trackBar1->Maximum = 10000;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(903, 45);
			this->trackBar1->TabIndex = 102;
			this->trackBar1->TickFrequency = 100;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 545);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 12);
			this->label1->TabIndex = 104;
			this->label1->Text = L"label1";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(-8, 515);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 105;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 256);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 12);
			this->label2->TabIndex = 106;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(71, 338);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 12);
			this->label3->TabIndex = 107;
			this->label3->Text = L"label3";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 573);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"title";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Click += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//�R���X�g���N�^
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		//�����摜�̐ݒ�
		pictureBox1->Image = Image::FromFile("..\\imagefile\\frames_EMR_20141211_a\\frame-00000.jpg");
		// Run this procedure in an appropriate event.
		// Set to 1 second.
		timer1->Interval = 1000 / 30;
		// Enable timer.
		timer1->Enabled = true;
		timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
		button1->Text = "Stop";
		button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
		trackBar1->Maximum = framenum;

	}

			 //�X���C�_�[�o�[�̐ݒ�
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {

		redraw(trackBar1->Value);
		/* char t1f[100];
		int cal_imgnum = (trackBar1->Value)*(17660.0/10000.0);
		sprintf_s(t1f,"..\\imagefile\\frames_EMR_20141211_a\\frame-%05d.jpg",cal_imgnum);
		string t2f=t1f;
		String^ filename = gcnew String(t2f.c_str());

		Image^ img = Image::FromFile( filename );

		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->Image = img;
		*/
	}


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		trackBar1->Value++;
		redraw(trackBar1->Value);
		/*
		char t1f[100];
		int cal_imgnum = (trackBar1->Value)*(17660.0/10000.0);
		sprintf_s(t1f,"..\\imagefile\\frames_EMR_20141211_a\\frame-%05d.jpg",cal_imgnum);
		string t2f=t1f;
		String^ filename = gcnew String(t2f.c_str());

		Image^ img = Image::FromFile( filename );

		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->Image = img;
		*/

		int min = (trackBar1->Value / 30) / 60;
		int sec = (trackBar1->Value / 30) % 60;
		int msec = (trackBar1->Value % 30)*(100 / 30);//�����_�ȉ�2���܂ŕ\�����������̂�100�Ŋ���B3���̏ꍇ��1000�Ŋ���B
		char ttime[20];
		sprintf_s(ttime, "%02d:%02d.%02d", min, sec, msec);
		string t2time = ttime;
		String^ time = gcnew String(t2time.c_str());

		char tfra[20];
		sprintf_s(tfra, "%d/%d", trackBar1->Value, framenum);
		string t2fra = tfra;
		String^ fra = gcnew String(t2fra.c_str());

		label1->Text = time;
		label2->Text = fra;

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (button1->Text == "Stop")
		{
			button1->Text = "Start";
			timer1->Enabled = false;
		}
		else
		{
			button1->Text = "Stop";
			timer1->Enabled = true;

		}
	}

	private: void redraw(int framenum){
		if (trackBar1->Value > trackBar1->Maximum)
		{
			button1->Text = "Stop";
			timer1->Enabled = true;
		}

		char t1f[100];
		
		//���o��
		sprintf_s(t1f, "..\\imagefile\\frames_EMR_20141211_a\\frame-%05d.jpg", trackBar1->Value);
		string t2f = t1f;
		String^ filename = gcnew String(t2f.c_str());

		Image^ img = Image::FromFile(filename);

		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->Image = img;
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		//����p�}�[�J�[
		SolidBrush^ redBrush = gcnew SolidBrush(Color::FromArgb(200, 255, 0, 0));
		SolidBrush^ yellowBrush = gcnew SolidBrush(Color::FromArgb(200, 0, 255, 0));

		// Create location and size of ellipse.
		
		float width = 15.0F;
		float height = 15.0F;

		// Fill ellipse on screen.
		float x = positiondata[trackBar1->Value].tannoux * (pictureBox1->Width / 640.0);
		float y = positiondata[trackBar1->Value].tannouy * (pictureBox1->Height / 480.0);
		e->Graphics->FillEllipse(redBrush, x, y, width, height);

		x = positiondata[trackBar1->Value].tannoukanx * (pictureBox1->Width / 640.0);
		y = positiondata[trackBar1->Value].tannoukany * (pictureBox1->Height / 480.0);
		e->Graphics->FillEllipse(redBrush, x, y, width, height);

		x = positiondata[trackBar1->Value].tannoudoumyakux * (pictureBox1->Width / 640.0);
		y = positiondata[trackBar1->Value].tannoudoumyakuy * (pictureBox1->Height / 480.0);
		e->Graphics->FillEllipse(redBrush, x, y, width, height);

		char tfra[200];
		sprintf_s(tfra, "%f-%f", positiondata[trackBar1->Value].tannoudoumyakux, x);
		string t3fra = tfra;
		String^ fra = gcnew String(t3fra.c_str());
		label3->Text = fra;

	}

	};
}

