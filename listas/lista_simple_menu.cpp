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
    int opcion;
    int valor;

    do {
        std::cout << "----- MENU -----" << std::endl;
        std::cout << "1. Agregar elemento" << std::endl;
        std::cout << "2. Quitar elemento" << std::endl;
        std::cout << "3. Mostrar lista" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Ingrese una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese el valor a agregar: ";
                std::cin >> valor;
                miLista = agregarElemento(miLista, valor);
                std::cout << "Elemento agregado correctamente." << std::endl;
                break;
            case 2:
                std::cout << "Ingrese el valor a quitar: ";
                std::cin >> valor;
                miLista = quitarElemento(miLista, valor);
                std::cout << "Elemento quitado correctamente." << std::endl;
                break;
            case 3:
                std::cout << "Lista actual: ";
                mostrarLista(miLista);
                break;
            case 4:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opcion invalida. Intente nuevamente." << std::endl;
        }

        std::cout << std::endl;

    } while (opcion != 4);

    return 0;
}
