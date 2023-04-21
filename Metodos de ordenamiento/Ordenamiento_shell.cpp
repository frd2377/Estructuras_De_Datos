#include <iostream>
using namespace std;
int Arreglo[100];
void LeerArreglo(int Numero);
void Shell(int Numero);

int main(){
	int Num;
	cout<<"Ingrese dimension del arreglo : ";
	cin>>Num;
	LeerArreglo(Num);
	Shell(Num);
	cout<<endl;
	return 0;
}

void LeerArreglo(int Numero){
	int i;
	for(i=1;i<=Numero;i++){
		cout<<"Arreglo["<<i<<"]=";
		cin>>Arreglo[i];
	}
}

void Shell(int Numero){
	int i,j,k,incremento,aux;
	incremento = Numero/2;
	cout<<"--Algoritmo de ordenamiento Shell--\n";
	cout<<"--Lista Desordenada--\n";
	for(int i=1;i<=Numero;i++){
		cout<<Arreglo[i]<<" ";
	}
	cout<<"\n--Prueba de escritorio--"<<endl;
	cout<<"j\tincremento\tlista[j]>=lista[j+incremento]\taux=lista[j]\tlista[j]\tlista[j+incremento]\tlista\n";
	while(incremento>0){
		for(i=incremento+1;i<=Numero;i++){
			j = i - incremento;
			while(j>0){
				if(Arreglo[j]>=Arreglo[j+incremento]){
					cout<<j-1<<"\t";
					cout<<incremento<<"\t\t";
					cout<<Arreglo[j]<<">="<<Arreglo[j+incremento]<<"\t\t\t\t";
					aux = Arreglo[j];
					cout<<aux<<"\t\t";
					Arreglo[j] = Arreglo[j+incremento];
					cout<<Arreglo[j]<<"\t\t";
					Arreglo[j+incremento] = aux;
					cout<<Arreglo[j+incremento]<<"\t\t\t";
					for(int i=1;i<=Numero;i++){
						cout<<Arreglo[i]<<" ";
					}
					cout<<endl;		
					//cout<<j<<">0"<<endl;
				}else{
					cout<<j-1<<"\t";
					cout<<incremento<<"\t\t";
					cout<<Arreglo[j]<<">="<<Arreglo[j+incremento]<<"\t\t\t\t-\t\t-\t\t-\t\t\t";
					for(int i=1;i<=Numero;i++){
						cout<<Arreglo[i]<<" ";
					}
					cout<<endl;
					//cout<<j<<">0"<<endl;
					j=0;
				}
				j = j - incremento;
			}
		}
		incremento = incremento/2;
	}
	cout<<"\nLista Ordenada\n";
	for(int i=1;i<=Numero;i++){
		cout<<Arreglo[i]<<" ";
	}
}



















