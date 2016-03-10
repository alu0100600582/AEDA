#include <iostream>
using namespace std;

typedef int TDATO;

class nodo {
   public:
    nodo(TDATO v, nodo *sig = NULL)
    {
       valor = v;
       siguiente = sig;
    }

   private:
    TDATO valor;
    nodo *siguiente;
        
   friend class lista;
};
 
typedef nodo *pnodo;
 
class lista {
   public:
    lista() { primero = actual = NULL; }
    ~lista();
    
    void Insertar(int v);
    void Borrar(int v);
    bool ListaVacia() { return primero == NULL; } 
    void Mostrar();
    void Siguiente() { if(actual) actual = actual->siguiente; }
    void Primero() { actual = primero; }
    void Ultimo() { Primero(); if(!ListaVacia()) while(actual->siguiente) Siguiente(); }
    bool Actual() { return actual != NULL; }
    int ValorActual() { return actual->valor; }
    
   private:
    pnodo primero, actual;
};
