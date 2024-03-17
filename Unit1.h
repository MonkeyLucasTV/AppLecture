//---------------------------------------------------------------------------
#include "Lettre.h"
#include <Vcl.MPlayer.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.StdCtrls.hpp>


#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------

#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *Button1;
	TImage *Image1;
	TLabel *Label1;
	TEdit *Edit1;
	TButton *ButtonEnvoyer;
	TButton *Button2;
	TMediaPlayer *MediaPlayer1;
	TLabel *scorelabel;
	TLabel *Label2;
	TImage *CroixImg;
	TImage *ValiderImg;
	TTimer *Timer1;
	TTimer *Timer2;
	TLabel *Label3;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall ButtonEnvoyerClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
private:	// Déclarations utilisateur
	Lettre myLettre;
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
