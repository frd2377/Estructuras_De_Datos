//Frd
#include <iostream>
using namespace std;
int main(){
	int min,aux,TAM;
	cout<<"Ingrese la dimension de la lista:"<<endl;
	cin>>TAM;
	int lista[TAM];
	for (int i = 0; i < TAM; i++){
		cout<<"Ingrese el valor "<<i+1<<" de la lista"<<endl;
 		cin>>lista[i];
	}
	cout<<"Lista desordenada\n";
	for (int i = 0; i < TAM; i++){
 		cout<<lista[i]<<" ";
	}
	cout<<endl;	
	for (int i = 0; i < TAM - 1; i++){
		min = i;
 		for (int j = i + 1; j < TAM; j++){
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
	cout<<"Lista ordenada\n";
	for (int i = 0; i < TAM; i++){
 		cout<<lista[i]<<" ";
	}
	return 0;
} 

