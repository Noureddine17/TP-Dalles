#include <iostream> 
#include <stdlib.h>
using namespace std;


/*	Affichez n elements d'une liste 

int main ()
{
	
	int tabEntier[15]={11,34,56,98};
	
	for(int i=0;i<=3;i++){
	
	cout << tabEntier[i]<<endl;
	}
	
}*/


/* 	Affichez le plus grand ou plus petit elemlents de la liste
  
int main () {

	int tab[5] = {12,51,8,9,74};
	int temp = tab[0];
	
	for(int i=1; i<=4;i++){

		if (temp > tab[i]){
		
			temp = tab[i];
		}

	}
	
	cout << temp<<endl;
}
*/

int main () {

	int tab[5];
	srand(time(NULL));
	for (int i=0; i<5; i++){
	int nbr=rand()%50;
	
	
	
	tab[i]=nbr;
	cout << tab[i]<<endl;
	
	
	}









}


		




