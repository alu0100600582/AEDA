#pragma once
#include "../Entities/nodo.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <cctype> 

using namespace std;
//DEFINIMOS EL TEMPLATE DE LA CLASE PILA
template <class TDATO>
class pila{
    private:
    
   nodo<TDATO>* ini_;

  
  public:
  
      pila(void);
      ~pila(void);
      void push(TDATO numero);
      TDATO pop(void);
      void imprimir(void);
      bool empty (void);
      int length(void);
};
//DEFINICION DE LOS METODOS 
template <class TDATO>
pila<TDATO>::pila(void){
    ini_=NULL;
 
  }
  template <class TDATO>
 pila<TDATO>::~pila(void){
    
   while (ini_!=NULL){
      ini_=ini_->get_next();
      
    }
    delete ini_;
  }
  template <class TDATO>
  void pila<TDATO>::push(TDATO numero){
    
      //insertar por la cabeza
      nodo<TDATO> * anadir  = new nodo<TDATO>(numero,ini_);
      
      //anadir.set_dato(numero);
      //anadir.set_next(ini_);
      ini_ = anadir ;
  
    
  }
  template <class TDATO>
  TDATO pila<TDATO>::pop(void){
      
     if (empty()==false){
        TDATO aux;
        
        aux = ini_->get_dato();
        ini_=ini_->get_next(); 
        
    return aux;
  }else {
    cout << "La Pila esta vacia"<<endl;
    //return 0;
  }
  }
  
   template <class TDATO>
    void pila<TDATO>::imprimir(void){
      if (empty()==false){
         nodo<TDATO>* nodoaux=ini_;
     while (nodoaux!=NULL){
      
      TDATO aux;
     
    
      aux = nodoaux->get_dato();
      nodoaux=nodoaux->get_next();
      cout << aux<<endl;
      
    }
  }else {
    cout << "La Pila esta vacia"<<endl;
  }
  }
  template <class TDATO>
  bool pila<TDATO>::empty (void){
    if(ini_==NULL){
        return true;
      
      }else{ 
        return false;
      }
  }
  
  template <class TDATO> 
  int pila<TDATO>::length(void){
      int tamanho=0;
      if (empty()==false){
         nodo<TDATO>* nodoaux=ini_;
     while (nodoaux!=NULL){
      
      TDATO aux;
     
    
      aux = nodoaux->get_dato();
      nodoaux=nodoaux->get_next();
      tamanho++;
      
    }
  }else {
    cout << "La Pila esta vacia"<<endl;
  }
  return tamanho;
  }