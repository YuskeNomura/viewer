// terching_viewer.cpp : メイン プロジェクト ファイルです。

#include "stdafx.h"
#include "Form1.h"
#include "read_data.h"

using namespace terching_viewer;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// コントロールが作成される前に、Windows XP ビジュアル効果を有効にします
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	//必要なデータの読み込み
	read_data();


	// メイン ウィンドウを作成して、実行します
	Application::Run(gcnew Form1());
	
	return 0;
}


