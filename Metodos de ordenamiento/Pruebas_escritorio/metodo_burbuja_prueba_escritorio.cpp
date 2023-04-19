#include <iostream>
using namespace std;

int main(){
	int lista[5];
	int temp;
	int TAM = sizeof(lista)/sizeof(*lista);
	
	cout<<"-- Metodo de ordenamiento de burbuja --"<<endl;
	for(int i=0; i<TAM; i++){
		cout<<"Ingrese el valor "<<i+1<<": ";	
		cin >> lista[i];
	}
	cout<<"Nuestra lista a ordenar el la siguiente\n[";
	for(int i=0; i<TAM; i++){
		cout<<lista[i]<<" ";	
	}
	cout<<"]\n";
	cout<<endl;
	cout<<"Prueba de escritorio"<<endl;
	cout<<"i\tj\tlista[j]\tlista[j+1]\ttemp\tlista[j]\tlista[j+1]\tlista"<<endl;
	for(int i=1; i<TAM; i++){
		for(int j=0; j < TAM - 1; j++){
			cout<<i<<"\t"<<j<<"\t"<<lista[j]<<"\t\t"<<lista[j+1]<<"\t\t";
			if(lista[j] > lista[j+1]){
				temp = lista[j];
				cout<<temp<<"\t";
				lista[j] = lista[j+1];
				cout<<lista[j]<<"\t\t";
				lista[j+1] = temp;
				cout<<lista[j+1]<<"\t";				
			}else{
				cout<<"\t\t\t\t";
			}
			cout<<"\t";
			for(int i=0; i<TAM; i++){
				cout<<lista[i]<<" ";
			}		
			cout<<endl;
		}
	}
	cout<<endl;
	cout<<"Lista ordenada:\n[";
	for(int i=0; i<TAM; i++){
		cout<<lista[i]<<" ";	
	}
	cout<<"]\n";
	return 0;
}



















