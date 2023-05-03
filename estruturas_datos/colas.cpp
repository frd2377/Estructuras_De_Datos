#include <queue>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	queue <int> cola;
	int opcion;
	int dato;
	while(true){
		cout<<"Menu operaciones --> Pila"<<endl;
		cout<<"1) Encolar Dato\n2) Desencolar dato\n3) Ver frente\n4) Ver final\n5) Esta vacia\n";
		cout<<"Opcion >> ";
		cin >> opcion;
		if(opcion == 1){
			system("cls");
			cout<<"Ingrese el dato que desea agregar a la cola >> ";
			cin >> dato;
			cola.push(dato);
			cout<<endl;
		}
		else if(opcion == 2){
			system("cls");
			if(cola.empty()){
				cout<<"La cola esta vacia\n"<<endl;
			}else{
				cout<<"Dato extraido de la cola: "<<cola.front()<<endl<<endl;
				cola.pop();
			}
		}
		else if(opcion == 3){
			system("cls");
			if(cola.empty()){
				cout<<"La pila esta vacia\n"<<endl;
			}else{
				cout<<"El frente de la cola es: "<<cola.front()<<endl<<endl;
			}
		}
		else if(opcion == 4){
			system("cls");
			if(cola.empty()){
				cout<<"La cola esta vacia\n"<<endl;
			}else{
				cout<<"El valor del final de la cola es "<<cola.back()<<endl;
			}
		}
		else if(opcion == 5){
			system("cls");
			if(cola.empty()){
				cout<<"La cola esta vacia\n"<<endl;
			}else{
				cout<<"La cola no esta vacia\n";
			}
		}
	}
	return 0;
}





















