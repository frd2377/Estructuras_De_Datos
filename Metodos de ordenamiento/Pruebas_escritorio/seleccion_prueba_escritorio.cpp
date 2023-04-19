#include <iostream>

using namespace std;

int main(){
	system("Title Ordenamiento por seleccion");
	int lista [] ={50,20,40,80,30};
	int TAM = sizeof(lista)/sizeof(lista[0]);
	int aux,min;
	
	cout<<"\nLista Desordenada"<<endl;

	for (int i = 0; i<TAM; i++){
		cout<<lista[i]<<" ";
	}
	cout<<endl;
	
	cout<<"i\tmin\tj\tlista[j]<lista[min]\ti!=min\taux\tlista[i]\tlista[min]\tlista\n";	
	for (int i = 0; i<TAM-1; i++){
		min = i;
		for(int j = i+1;j<TAM;j++){
			cout<<i<<"\t"<<min<<"\t"<<j<<"\t";
			cout<<lista[j]<<"<"<<lista[min]<<"\t\t\t";
			if(lista[j] < lista[min]){
				min = j;
				cout<<"\t\t\t"<<endl;
			}else{
				cout<<"\t\t\t"<<endl;
			}
		}
		
		if(i != min){
			cout<<"\t\t\t\t\t\t"<<i<<"!="<<min<<"\t";
			aux = lista[i];
			cout<<aux<<"\t";
			lista[i] = lista[min];
			cout<<lista[i]<<"\t\t";
			lista[min] = aux;
			cout<<lista[min]<<"\t\t";
			for(int j = 0;j<TAM;j++){
				cout<<lista[j]<<" ";
			}
			cout<<endl;
		}
	}
	
	cout<<"\nLista Ordenada"<<endl;
	for (int i = 0; i<TAM; i++){
		cout<<lista[i]<<" ";
	}
	system("pause");
	
}

















