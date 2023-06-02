#include <iostream>
#include <stdlib.h>
using namespace std;
struct nodo{
	int dato;
	struct nodo* izq;
	struct nodo* der;
};

typedef struct nodo *lista_doble;

void insertarizq(lista_doble &cabeza, lista_doble &ultimo, int valor){
	lista_doble nodo1;
	nodo1 = new(struct nodo);
	nodo1-> dato = valor;
	nodo1->izq = NULL;
	nodo1->der = NULL;
	if (cabeza == NULL)
	{
		nodo1->izq = cabeza;
		cabeza = nodo1;
		if(ultimo == NULL){
			ultimo = cabeza;
		}
	}else{
		cabeza -> der=nodo1;
		nodo1 ->izq = cabeza;
		cabeza = nodo1;
	}
}

void insertarder(lista_doble &cabeza, lista_doble &ultimo, int valor){
	lista_doble nodo1;
	nodo1 = new(struct nodo);
	nodo1-> dato = valor;
	nodo1->izq = NULL;
	nodo1->der = NULL;
	if (ultimo == NULL)
	{
		nodo1->der = ultimo;
		ultimo = nodo1;
		if(cabeza == NULL){
			cabeza = ultimo;
		}
	}else{
		ultimo -> izq=nodo1;
		nodo1 ->der = ultimo;
		ultimo = nodo1;
	}
}

void imprimirder(lista_doble &ultimo){
	lista_doble lista_imprimir;
	lista_imprimir = ultimo;
	while(lista_imprimir != NULL){
		cout<<"- "<<lista_imprimir->dato;
		lista_imprimir = lista_imprimir->der;
	}
}

void imprimirizq(lista_doble &cabeza){
	lista_doble lista_imprimir;
	lista_imprimir = cabeza;
	while(lista_imprimir != NULL){
		cout<<"- "<<lista_imprimir->dato;
		lista_imprimir = lista_imprimir->izq;
	}
}

void buscarizq(lista_doble &cabeza, int valor){
	lista_doble lista_buscar;
	lista_buscar = cabeza;
	int contador = 1;
	while(lista_buscar != NULL){
		if(lista_buscar-> dato == valor){
			cout<<"Valor encontrado en la posicion: "<<contador<<endl;
		}
		contador++;
		lista_buscar = lista_buscar->izq;
	}
}

void buscarder(lista_doble &ultimo, int valor){
	lista_doble lista_buscar;
	lista_buscar = ultimo;
	int contador = 1;
	while(lista_buscar != NULL){
		if(lista_buscar-> dato == valor){
			cout<<"Valor encontrado en la posicion: "<<contador<<endl;
		}
		contador++;
		lista_buscar = lista_buscar->der;
	}
}

void menu1(){
	cout<<"\n\t\tLISTA DOBLEMENTE ENLAZADA\n\n";
	cout<<"1. INSERTAR X IZQ\n";
	cout<<"2. INSERTAR X DER\n";
	cout<<"3. IMPRIMIR LISTA DOBLE X IZQ\n";
	cout<<"4. IMPRIMIR LISTA DOBLE X DER\n";
	cout<<"5. BUSCAR X IZQ\n";
	cout<<"6. BUSCAR X DERECHA\n";
	cout<<"7. SALIR\n";
	return;
}

int main(){
	lista_doble listaizq = NULL;
	lista_doble listader = NULL;
	int opcion;
	int valor;
	do{
		menu1();
		cin >> opcion;
		switch(opcion){
			case 1:
				cout<<"\n NUMERO A INSERTAR POR IZQ: ";cin >> valor;
				insertarizq(listaizq,listader,valor);
				break;
			case 2:
				cout<<"\n NUMERO A INSERTAR POR DER: ";cin >> valor;
				insertarder(listaizq,listader,valor);
				break;
			case 3:
				cout<<"\n\n ELEMENTOS LISTA DOBLE X IZQ \n\n";
				imprimirizq(listaizq);
				break;
			case 4:
				cout<<"\n\n ELEMENTOS LISTA DOBLE X DER \n\n";
				imprimirder(listader);
				break;
			case 5:
				cout<<"\n\n BUSCAR ELEMENTOS X IZQ \n\n";
				cout<<"\n NUMERO A BUSCAR POR IZQ: ";cin>>valor;
				buscarizq(listaizq,valor);
				break;
			case 6:
				cout<<"\n\n BUSCAR ELEMENTO X DER: \n\n";
				cout<<"\n NUMERO A BUSCAR POR DER: ";cin>>valor;
				buscarder(listader,valor);
				break;
			default:
				cout<<"\n OPCION NO VALIDA\n";
				break;		
		}
	}while(opcion != 7);
	return 0;
}










