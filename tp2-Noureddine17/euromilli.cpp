#include <iostream> 
#include <stdlib.h>
using namespace std;


int main (){

	int numero[50]={0};
	int etoile[11]={0};
	int nbr,i,nbr2;
	srand(time(NULL));
	
	
	
	for (i=0; i<5; i++){
		int nbr=rand()%50;
		numero[i]=nbr;
		cout << numero[i]<<endl;
	}

	for (i=0; i<2; i++){
		int nbr2=rand()%50;
		etoile[i]=nbr2+1;
		cout << etoile[i]<<endl;
	}

}
