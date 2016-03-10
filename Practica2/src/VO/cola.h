#include <iostream>
using namespace std;

typedef int TDATO;

class nodo {
   public:
    nodo(TDATO v, nodo *sig = NULL) {
       valor = v;
       siguiente = sig;
    }

   private:
    TDATO valor;
    nodo *siguiente;
        
   friend class cola;
};
 
typedef nodo *pnodo;
 
class cola {
   public:
    cola() : ultimo(NULL), primero(NULL) {}
    ~cola();
    
    void Push(int v);
    int Pop();
    
   private:
    pnodo primero, ultimo;
};
