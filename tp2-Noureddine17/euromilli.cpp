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
		if (numero[i]==nbr){
		    numero[i]+=1;
		   	cout <<" numero roulette " <<numero[i]<<endl;
		}
		else{
		cout << "numero roulette " <<numero[i]<<endl;
	}
}
	for (i=0; i<2; i++){
		int nbr2=rand()%50;
		etoile[i]=nbr2;
		if (etoile[i]==nbr2){
		    etoile[i]+=1;
		   	cout << "numero etoile"<<etoile[i]<<endl;
		}
		else{
		cout << "numero etoile " <<etoile[i]<<endl;
	}

}
}
