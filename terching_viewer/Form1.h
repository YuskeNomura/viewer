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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
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
			this->pictureBox2->Location = System::Drawing::Point(765, 272);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->TabIndex = 108;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(880, 272);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 100);
			this->pictureBox3->TabIndex = 109;
			this->pictureBox3->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(98, 474);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 110;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 573);
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
			double diffarence = (1482 - 586)/100.0;
			progressBar1->Value = (trackBar1->Value - 586)/diffarence;
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
		printf("TMP");
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

		for (int i = 0; i < 5&& index!=0; i++)
		{
			for (int i2 = 0; i2 < 5; i2++)
			{
				if (grid_eye[i][i2] != 0)
				{
					SolidBrush^ blackBrush = gcnew SolidBrush(Color::FromArgb(grid_eye[i][i2] * (255 / 300.0),255, 0, 0));
					e->FillRectangle(blackBrush, p2width*i, p2height*i2, p2width, p2height);
					pictureBox2->Image = img;
				}
			}

		}

	}

	
};
}

