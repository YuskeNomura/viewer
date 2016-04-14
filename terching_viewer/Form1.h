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
	/// Form1 の概要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
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
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;






	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(607, 430);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(58, 559);
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
			this->label1->Location = System::Drawing::Point(11, 589);
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
			this->button1->Location = System::Drawing::Point(-9, 559);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 105;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(131, 434);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 12);
			this->label2->TabIndex = 106;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 434);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 12);
			this->label3->TabIndex = 107;
			this->label3->Text = L"label3";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(774, 219);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->TabIndex = 108;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(880, 219);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 100);
			this->pictureBox3->TabIndex = 109;
			this->pictureBox3->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(98, 490);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(56, 23);
			this->progressBar1->TabIndex = 110;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(662, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(299, 191);
			this->pictureBox4->TabIndex = 111;
			this->pictureBox4->TabStop = false;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(204, 449);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(63, 29);
			this->pictureBox5->TabIndex = 112;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(204, 484);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(63, 29);
			this->pictureBox6->TabIndex = 113;
			this->pictureBox6->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(284, 528);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 12);
			this->label4->TabIndex = 114;
			this->label4->Text = L"電気メス-胆嚢";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(284, 484);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 12);
			this->label5->TabIndex = 115;
			this->label5->Text = L"電気メス-脂肪";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(284, 434);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 12);
			this->label6->TabIndex = 116;
			this->label6->Text = L"鉗子-脂肪";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(418, 434);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 12);
			this->label7->TabIndex = 117;
			this->label7->Text = L"クリップ-胆嚢管";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(420, 528);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 12);
			this->label8->TabIndex = 118;
			this->label8->Text = L"鉗子・はさみ-胆管";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(570, 434);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 12);
			this->label9->TabIndex = 119;
			this->label9->Text = L"はさみ-胆嚢管";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(570, 484);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 12);
			this->label10->TabIndex = 120;
			this->label10->Text = L"はさみ-胆嚢動脈";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(570, 528);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 12);
			this->label11->TabIndex = 121;
			this->label11->Text = L"電気メス-胆嚢管";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(721, 544);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 12);
			this->label12->TabIndex = 122;
			this->label12->Text = L"はさみ-胆管";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(418, 484);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(90, 12);
			this->label13->TabIndex = 123;
			this->label13->Text = L"クリップ-胆嚢動脈";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(721, 501);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(64, 12);
			this->label14->TabIndex = 124;
			this->label14->Text = L"はさみ-胆嚢";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(721, 449);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(76, 12);
			this->label15->TabIndex = 125;
			this->label15->Text = L"電気メス-胆嚢";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(101, 501);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 12);
			this->label16->TabIndex = 126;
			this->label16->Text = L"胆嚢挙上";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 616);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//コンストラクタ
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		//初期画像の設定
		pictureBox1->Image = Image::FromFile("..\\imagefile\\frames_EMR_20141211_a\\frame-00000.jpg");
		// Run this procedure in an appropriate event.
		// Set to 1 second.
		timer1->Interval = 1000 / 10;
		// Enable timer.
		timer1->Enabled = true;
		timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
		button1->Text = "Stop";
		button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
		trackBar1->Maximum = framenum;

	}

			 //スライダーバーの設定
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {

		redraw(trackBar1->Value);

	}


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		trackBar1->Value++;
		redraw(trackBar1->Value);


		int min = (trackBar1->Value / 30) / 60;
		int sec = (trackBar1->Value / 30) % 60;
		int msec = (trackBar1->Value % 30)*(100 / 30);//小数点以下2桁まで表示させたいので100で割る。3桁の場合は1000で割る。
		char ttime[20];
		sprintf_s(ttime, "%02d:%02d.%02d", min, sec, msec);
		string t2time = ttime;
		String^ time = gcnew String(t2time.c_str());

		char tfra[20];
		sprintf_s(tfra, "%d/%d", trackBar1->Value, framenum);
		string t2fra = tfra;
		String^ fra = gcnew String(t2fra.c_str());

		if (586 < trackBar1->Value&&trackBar1->Value < 1482)
		{
			double diffarence = (1482 - 586) / 100.0;
			progressBar1->Value = (trackBar1->Value - 586) / diffarence;
		}
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
		if (trackBar1->Value > trackBar1->Maximum - 10)
		{
			button1->Text = "Stop";
			timer1->Enabled = true;
		}

		char t1f[100];

		//入出力
		sprintf_s(t1f, "..\\imagefile\\frames_EMR_20141211_a\\frame-%05d.jpg", trackBar1->Value);
		string t2f = t1f;
		String^ filename = gcnew String(t2f.c_str());

		Image^ img = Image::FromFile(filename);

		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->Image = img;

		grid();

		flow();
		
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		//臓器用マーカー
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

	private: void grid(){
		int grid_eye[5][5] = { 0 };
		Bitmap^ img = gcnew Bitmap(100, 100);
		Graphics^ e = Graphics::FromImage(img);

		e->FillRectangle(Brushes::White, e->VisibleClipBounds);

		float centorx = positiondata[trackBar1->Value].tyuusix;
		float centory = positiondata[trackBar1->Value].tyuusiy;

		int index;
		//x
		int inx, iny;
		for (index = trackBar1->Value; index > (trackBar1->Value - 299) && index > 0; index--){
			float diffarencex = positiondata[trackBar1->Value].tyuusix - positiondata[index].tyuusix;
			if (diffarencex < -14.5)
			{
				inx = 0;
			}
			else if (-14.5 < diffarencex  && diffarencex < -7.5)
			{
				inx = 1;
			}
			else if (-7.5 < diffarencex  && diffarencex < 7.5)
			{
				inx = 2;
			}
			else if (7.5 < diffarencex  && diffarencex < 14.5)
			{
				inx = 3;
			}
			else
			{
				inx = 4;
			}
			float diffarencey = positiondata[trackBar1->Value].tyuusiy - positiondata[index].tyuusiy;
			if (diffarencey < -14.5)
			{
				iny = 0;
			}
			else if (-14.5 < diffarencey  && diffarencey < -7.5)
			{
				iny = 1;
			}
			else if (-7.5 < diffarencey  && diffarencey < 7.5)
			{
				iny = 2;
			}
			else if (7.5 < diffarencey  && diffarencey < 14.5)
			{
				iny = 3;
			}
			else
			{
				iny = 4;
			}
			grid_eye[inx][iny]++;

		}
		int p2width = 20;
		int p2height = 20;

		for (int i = 0; i < 5 && index != 0; i++)
		{
			for (int i2 = 0; i2 < 5; i2++)
			{
				if (grid_eye[i][i2] != 0)
				{
					SolidBrush^ blackBrush = gcnew SolidBrush(Color::FromArgb(grid_eye[i][i2] * (255 / 300.0), 255, 0, 0));
					e->FillRectangle(blackBrush, p2width*i, p2height*i2, p2width, p2height);
					pictureBox2->Image = img;
				}
			}

		}


	}

	private: void flow()
	{
		char t1f[100];

		sprintf_s(t1f, "..\\arrow.jpg");
		string t2f = t1f;
		String^ filename = gcnew String(t2f.c_str());

		Image^ arrow_img = Image::FromFile(filename);

		sprintf_s(t1f, "..\\arrow_true.jpg");
		t2f = t1f;
		filename = gcnew String(t2f.c_str());

		Image^ arrow_true_img = Image::FromFile(filename);
		pictureBox5->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox5->Image = arrow_img;

		pictureBox6->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox6->Image = arrow_true_img;
		//maroni
		int maroni = 0;
	}


	};
}

