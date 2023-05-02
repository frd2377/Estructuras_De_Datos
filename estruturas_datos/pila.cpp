#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;
int main(){
	stack <int> pila;
	int opcion;
	int dato;
	while(true){
		cout<<"Menu operaciones --> Pila"<<endl;
		cout<<"1) Insertar Dato\n2) Extraer dato\n3) Ver cima\n4) Esta vacia\n";
		cout<<"Opcion >> ";
		cin >> opcion;
		if(opcion == 1){
			system("cls");
			cout<<"Ingrese el dato que desea agregar a la pila >> ";
			cin >> dato;
			pila.push(dato);
			cout<<endl;
		}
		else if(opcion == 2){
			system("cls");
			if(pila.empty()){
				cout<<"La pila esta vacia\n"<<endl;
			}else{
				cout<<"Dato extraido de la pila: "<<pila.top()<<endl<<endl;
			}
		}
		else if(opcion == 3){
			system("cls");
			if(pila.empty()){
				cout<<"La pila esta vacia\n"<<endl;
			}else{
				cout<<"El valor de la cima es: "<<pila.top()<<endl<<endl;
			}
		}
		else if(opcion == 4){
			system("cls");
			if(pila.empty()){
				cout<<"La pila esta vacia\n"<<endl;
			}else{
				cout<<"La pila no esta vacia\n\n";
			}
		}
	}
	return 0;
}






















