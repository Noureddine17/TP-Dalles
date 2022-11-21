#include <iostream> 
using namespace std;

int main ()
{
	string recommencer;
	int score ;
	score = 0;
	string Reponse;
	string Reponse2;

	do{
		cout << "Question 1 - Calculez 100-8 et entrez la reponse: \n A- 92\n B- 108\n C- 44\n D- 108"<<endl;
		cin >>Reponse;

		if(Reponse == "A") {
			score += 1;
			cout <<"Bonne reponse: A- 92 ton score est de "<<score<<" point(s)\n"<<endl;
		}	 
		else{ 
			score+=0;
			cout << "FAUX (ou verifie les maj) Ton score est de "<<score<<" points\n"<< endl;
		}

		cout << "Question 2 - En quel annee la Tour Eiffel a ete cree: \n A- 1887\n B- 1897\n C- 1892\n D- 1901"<<endl;
		cin >> Reponse2;

		if(Reponse2 == "A") {
			score += 1;
			cout <<"Bonne reponse: A- 1887, ton score est de "<<score<<" point(s)"<<endl;
		}
		else{ 
			score+=0;
			cout << "FAUX (ou verifie les maj), ton score est de "<<score<<" points"<< endl;
		}

		cout << "\nLE QCM EST FINI VEUT TU RECOMMENCER (oui/non)?"<<endl;
		cin >> recommencer;
	}while(recommencer == "oui");

return 0;
}
