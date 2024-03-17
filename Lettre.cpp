
#include "Lettre.h"
#include <string>
#include <iostream>
#include <Vcl.StdCtrls.hpp>
#include <map>
#include <stdlib.h>
#include <windows.hpp>
#include <Windows.h>
#include <mmsystem.h>

using namespace std;

Lettre::Lettre(){

	for (int i = 0; i < 26; ++i) {
		Letters[0][i] = (String(char('A' + i )));  // Lettres de l'alphabet
		Letters[1][i] = Letters[0][i] + ".mp3";      // Noms de fichiers MP3
	}
}


void Lettre::Random(){

	srand(time(0));
	int randnum = rand() % 25;
	String LettreAlea =  Letters[0][randnum];
	String CheminAlea = Letters[1][randnum];
	Chemin = CheminAlea;
	Letre = LettreAlea;

};


bool Lettre::Verifier(String ValeurEntree){
	if (Letre == ValeurEntree){
		return(true);
	}
	else if (Letre != ValeurEntree){
		return(false);
	}

};


void Lettre::Logs(String lettre){
};


String Lettre::Sound(){
	return(Chemin);
};


void Lettre::Erreur(TLabel *Ecrito){
	Ecrito->Caption = Letre;
};
