#include <iostream>

using namespace std;

struct Nodo {
    int data;
    Nodo* next;
};

void insertarNodo(Nodo*& cabeza, int valor) {
    Nodo* nuevoNodo = new Nodo;
    nuevoNodo->data = valor;
    nuevoNodo->next = nullptr;

    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
        cabeza->next = cabeza;
    } else {
        Nodo* temp = cabeza;
        while (temp->next != cabeza) {
            temp = temp->next;
        }
        temp->next = nuevoNodo;
        nuevoNodo->next = cabeza;
    }
}

void mostrarLista(Nodo* cabeza) {
    if (cabeza == nullptr) {
        cout << "La lista está vacía." << endl;
        return;
    }

    Nodo* temp = cabeza;
    cout << "Elementos de la lista: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != cabeza);

    cout << endl;
}

int main() {
    Nodo* cabeza = nullptr;

    insertarNodo(cabeza, 1);
    insertarNodo(cabeza, 2);
    insertarNodo(cabeza, 3);

    mostrarLista(cabeza);

    return 0;
}
