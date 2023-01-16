#include <iostream> 
#include <stdlib.h>
using namespace std;


int main (){

	bool numero[50]={0};
	bool etoile[11]={0};
	int tirage[5]={0};
	int t_e[2]={0};
	int nbr;
	srand(time(NULL));
	
	for (int i=0;i<5;i++){
	
		do{
			nbr=rand()%50;
		}
		while(numero[nbr]==1);	
		numero[nbr]=1;
		tirage[i]=nbr+1;
	}

	for(int x=0; x<5 ;x++)
	{
	cout<<"Numero : "<<tirage[x]<<"\n";
	}
	
	for (int i=0;i<2;i++){
		do{
		
			nbr=rand()%11;
		}
		while(etoile[nbr]==1);	
		etoile[nbr]=1;
		t_e[i]=nbr+1;
	}
	
	for(int x=0; x<2 ;x++)
	{
	cout<<"numero etoiles : "<<t_e[x]<<"\n";
	}
		
		
}
