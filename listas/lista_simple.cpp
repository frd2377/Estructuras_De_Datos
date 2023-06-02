#include <iostream>

struct Nodo {
    int dato;
    Nodo* siguiente;
};

Nodo* crearNodo(int valor) {
    Nodo* nuevoNodo = new Nodo;
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = nullptr;
    return nuevoNodo;
}

Nodo* agregarElemento(Nodo* cabeza, int valor) {
    if (cabeza == nullptr) {
        cabeza = crearNodo(valor);
    } else {
        Nodo* actual = cabeza;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = crearNodo(valor);
    }
    return cabeza;
}

Nodo* quitarElemento(Nodo* cabeza, int valor) {
    Nodo* actual = cabeza;
    Nodo* anterior = nullptr;

    while (actual != nullptr) {
        if (actual->dato == valor) {
            if (anterior == nullptr) {
                cabeza = actual->siguiente;
            } else {
                anterior->siguiente = actual->siguiente;
            }
            delete actual;
            break;
        }
        anterior = actual;
        actual = actual->siguiente;
    }
    return cabeza;
}

void mostrarLista(Nodo* cabeza) {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        std::cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    std::cout << std::endl;
}

int main() {
    Nodo* miLista = nullptr;

    miLista = agregarElemento(miLista, 10);
    miLista = agregarElemento(miLista, 20);
    miLista = agregarElemento(miLista, 30);

    mostrarLista(miLista);

    miLista = quitarElemento(miLista, 20);

    mostrarLista(miLista);
    return 0;
}








