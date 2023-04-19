#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	long long int TAM,temp;
	cout<<"Ingrese la dimension de el algoritmo: ";
	cin>>TAM;
	long int lista[TAM];
	
	for (long long int i=0; i<TAM; i++){
		int numeroRandom = rand();
		lista[i] = numeroRandom;
	}
	
	cout<<"\nLista desordenada:\n";
	for (long int i=0; i<TAM; i++){
		cout<<lista[i]<<" ";
	}
	
	cout<<endl;
	
	for (long long int i=1; i<TAM; i++){
		for (long long int j=0 ; j<TAM - 1; j++){
			if (lista[j] > lista[j+1]){
				temp = lista[j];
				lista[j] = lista[j+1];
				lista[j+1] = temp; 
			}
		}
	}
	
	cout<<"\nLista ordenada:\n";
	for (long int i=0; i<TAM; i++){
		cout<<lista[i]<<" ";
	}
	
	return 0;
	
}