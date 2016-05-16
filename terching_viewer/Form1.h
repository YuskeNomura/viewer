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


	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;







	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label16;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;






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
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 5);
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
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(662, 251);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->TabIndex = 108;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(843, 251);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 100);
			this->pictureBox3->TabIndex = 109;
			this->pictureBox3->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(73, 516);
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
			this->pictureBox5->Location = System::Drawing::Point(160, 490);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(63, 29);
			this->pictureBox5->TabIndex = 112;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(379, 490);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(63, 29);
			this->pictureBox6->TabIndex = 113;
			this->pictureBox6->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(255, 494);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 21);
			this->label4->TabIndex = 114;
			this->label4->Text = L"脂肪剥離";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label5->Location = System::Drawing::Point(463, 494);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 21);
			this->label5->TabIndex = 115;
			this->label5->Text = L"クリッピング";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label6->Location = System::Drawing::Point(639, 494);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 21);
			this->label6->TabIndex = 116;
			this->label6->Text = L"切断";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label7->Location = System::Drawing::Point(816, 494);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 21);
			this->label7->TabIndex = 117;
			this->label7->Text = L"胆嚢遊離";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label16->Location = System::Drawing::Point(60, 494);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(94, 21);
			this->label16->TabIndex = 126;
			this->label16->Text = L"胆嚢挙上";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(757, 399);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 19);
			this->textBox1->TabIndex = 127;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(556, 490);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(63, 29);
			this->pictureBox7->TabIndex = 128;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(728, 490);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(63, 29);
			this->pictureBox8->TabIndex = 129;
			this->pictureBox8->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label8->Location = System::Drawing::Point(672, 218);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 16);
			this->label8->TabIndex = 130;
			this->label8->Text = L"熟練医の映像";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(765, 433);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 16);
			this->label2->TabIndex = 131;
			this->label2->Text = L"エラーメッセージ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(662, 358);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 16);
			this->label3->TabIndex = 132;
			this->label3->Text = L"初心者の視線分布";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label9->Location = System::Drawing::Point(843, 358);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(133, 16);
			this->label9->TabIndex = 133;
			this->label9->Text = L"熟練医の視線分布";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label10->Location = System::Drawing::Point(13, 438);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 16);
			this->label10->TabIndex = 134;
			this->label10->Text = L"初心者の映像";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 616);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label16);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
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

		if (trackBar1->Value<framenum)
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
			progressBar1->SetBounds(label16->Location.X, progressBar1->Location.Y, progressBar1->Width, progressBar1->Height);
			double diffarence = (1482 - 586) / 100.0;
			progressBar1->Value = (trackBar1->Value - 586) / diffarence;
		}

		else if (1482 < trackBar1->Value&&trackBar1->Value < 10000)
		{
			progressBar1->Location.Offset(label4->Location.X-progressBar1->Location.X,progressBar1->Location.Y);
			progressBar1->SetBounds(label4->Location.X, progressBar1->Location.Y,progressBar1->Width,progressBar1->Height);
			double diffarence = (10000 - 1482) / 100.0;
			progressBar1->Value = (trackBar1->Value - 1482) / diffarence;
		}
		label1->Text = time;

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

		if (trackBar1->Value % 100 == 0)
		{
			errorProvider1->SetError(textBox1, "temp");
		}
		
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
		pictureBox6->Image = arrow_img;

		pictureBox7->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox7->Image = arrow_img;

		pictureBox8->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox8->Image = arrow_img;
	}


	};
}

