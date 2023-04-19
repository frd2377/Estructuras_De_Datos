#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
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
	
	double start =clock();
	// tiempo inicial
	for (long long int i=1; i<TAM; i++){
		for (long long int j=0 ; j<TAM - 1; j++){
			if (lista[j] > lista[j+1]){
				temp = lista[j];
				lista[j] = lista[j+1];
				lista[j+1] = temp; 
			}
		}
	}
	// tiempo final
	double final = clock();
	double duracion = (double(final - start)/CLOCKS_PER_SEC);
	cout<<"\ntime: "<<duracion;
	
	/*for (long int i=0; i<TAM; i++){
		cout<<lista[i]<<" ";
	}*/
	
	return 0;
	
}


























