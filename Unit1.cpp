//---------------------------------------------------------------------------
#include <string>
#pragma hdrstop
#include "Unit1.h"
#include <windows.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int score = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{

	String chemin = myLettre.Sound();

	String currentDir = GetCurrentDir();
	String audioFilePath = currentDir + L"\\data\\sound\\" + chemin;

	MediaPlayer1->FileName = audioFilePath;
	MediaPlayer1->Open();
	MediaPlayer1->Play();








}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Image1->Visible = true;
	Button2->Visible = false;
	Image1->Visible = true;
	myLettre.Random();



}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonEnvoyerClick(TObject *Sender)
{
	bool verif = myLettre.Verifier(UpperCase(String(AnsiString((Edit1->Text).c_str()))));
	if (verif == true) {

		ValiderImg->Visible = true;
		Image1->Visible = false;
        Timer1->Enabled = true;



		score++;
		scorelabel->Caption = score;
		myLettre.Random();


	}else if (verif == false) {

		Label3->Visible = true;
		myLettre.Erreur(Label3);
		CroixImg->Visible = true;
		Image1->Visible = false;
		Timer2->Enabled = true;

		scorelabel->Caption = score;
		myLettre.Random();
	}

	totalScore++;
    Label4->Caption = "/" + String(totalScore);
	Edit1->Text = "";
}


//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	Timer1->Enabled = false;
	ValiderImg->Visible = false;
	Image1->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
	Timer2->Enabled = false;
	CroixImg->Visible = false;
	Label3->Visible = false;
	Image1->Visible = true;
}
//---------------------------------------------------------------------------



