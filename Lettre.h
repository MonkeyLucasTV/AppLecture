
#include <string>

using namespace std;

class Lettre{


	private:
		String Letre;
		String Chemin;
		String Letters[2][26];


	public:
		Lettre();
		void Random();
		String Sound();
		bool Verifier(String ValeurEntree);
		void Logs(String lettre);
		void Erreur(TLabel *Ecrito);

};
