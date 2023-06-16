#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo{
	int dato;
	struct nodo *izq, *der;
};

typedef struct nodo* ARBOL;

ARBOL crearNodo(int x){
	ARBOL nuevoNodo = new(struct nodo);
	nuevoNodo->dato = x;
	nuevoNodo->izq = NULL;
	nuevoNodo->der = NULL;
	return nuevoNodo;
}

void insertar(ARBOL &arbol, int x){
	if(arbol == NULL){
		arbol = crearNodo(x);
	}else if (x < arbol->dato){
		insertar(arbol->izq,x);
	}else if (x > arbol->dato){
		insertar(arbol->der,x);
	}
}

void preOrden(ARBOL &arbol){
	ARBOL temporal = new(struct nodo);
	temporal = arbol;
	if (temporal != NULL){
		cout<<temporal->dato<<" ";
		preOrden(temporal->izq);
		preOrden(temporal->der);
	}
}

void inOrden(ARBOL &arbol){
	ARBOL temporal = new(struct nodo);
	temporal = arbol;
	if (temporal != NULL){
		inOrden(temporal->izq);
		cout<<temporal->dato<<" ";
		inOrden(temporal->der);
	}
}

void posOrden(ARBOL &arbol){
	ARBOL temporal = new(struct nodo);
	temporal = arbol;
	if (temporal != NULL){
		posOrden(temporal->izq);
		posOrden(temporal->der);
		cout<<temporal->dato<<" ";
	}
}

void verArbol(ARBOL &arbol, int n){
	ARBOL temporal = new(struct nodo);
	temporal=arbol;
	if (temporal==NULL){
		return;
	}
	verArbol(temporal->der,n+1);
	for (int i = 0; i < n; i++){
		cout<<" ";
	}
	cout<<temporal->dato<<endl;
	verArbol(temporal->izq,n+1);
}

void menu(){
	cout << "Menu Arbol" << endl;
    cout << "1. INSERTAR NODO" << endl;
    cout << "2. VER ARBOL" << endl;
    cout << "3. RECORRIDO PREORDEN" << endl;
    cout << "4. RECORRIDO POSTORDEN" << endl;
    cout << "5. RECORRIDO INORDEN" << endl;
    cout << "6. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

int main(){
	return 0;
}



















