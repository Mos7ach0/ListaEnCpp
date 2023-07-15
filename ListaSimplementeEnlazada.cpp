#include <iostream>
using namespace std;


struct Nodo {
    int dato;
    Nodo* siguiente;
};


class ListaEnlazada {
private:
    Nodo* inicio;

public:
    // Sabado 15 de julio
    ListaEnlazada() {
        inicio = nullptr;
        
    }

    // Sabado 15 de julio
    void insertar(int dato) {
        Nodo* nuevoNodo = new Nodo;
        nuevoNodo->dato = dato;
        nuevoNodo->siguiente = inicio;
        inicio = nuevoNodo;
    }

    // Sabado 15 de julio 
    void imprimir() {
        Nodo* temp = inicio;
        while (temp != nullptr) {
            cout << temp->dato << " ";
            temp = temp->siguiente;
        }
        cout << endl;
    }

    // volverNuloPorValor es su nombre anterior
    void eliminar(int valor){
        Nodo* temp = inicio;
        Nodo* nodoAnterior = nullptr;

        while(temp != nullptr){
            if(temp->dato == valor){
                if(nodoAnterior != nullptr){
                    nodoAnterior->siguiente = temp->siguiente;
                } else {
                    inicio = temp->siguiente;
                }
                delete temp;
                break;
            }
            nodoAnterior = temp;
            temp = temp->siguiente;
        }
    }

    int obtener(int valor){
        return 0;
    }

};

int main() {
}