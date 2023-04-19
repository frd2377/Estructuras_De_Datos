#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

int main(){
	long long int TAM,aux,min;
	cout<<"Ingrese la dimension de el algoritmo: ";
	cin>>TAM;
	long int lista[TAM];
	
	for (long long int i=0; i<TAM; i++){
		int numeroRandom = rand();
		lista[i] = numeroRandom;
	}
	
	auto start =clock();
	// tiempo inicial
	for (long int i = 0; i < TAM - 1; i++){
 		min = i;
 		for (long int j = i + 1; j < TAM; j++){
 			if (lista[j] < lista[min]){
 				min = j;
			}
 		}
 		if (i != min){
 			aux= lista[i];
 			lista[i] = lista[min];
 			lista[min] = aux;
		}
	}

	// tiempo final
	auto final = clock();
	double duracion = (double(final - start)/CLOCKS_PER_SEC);
	cout<<"\ntime: "<<duracion<<endl;
	
	/*for (long int i=0; i<TAM; i++){
		cout<<lista[i]<<" ";
	}*/
	system("PAUSE");
	return 0;
	
}

