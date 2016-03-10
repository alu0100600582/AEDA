#pragma once

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <cctype> 
//typedef int TDATO;
template <class TDATO>
class nodo{
    
    TDATO dato_;
    
    nodo* next_; 
    
     public:
     
     nodo(TDATO numero, nodo* next);
     ~nodo(void);
     void set_dato(TDATO numero , nodo* next);
     TDATO get_dato();
     nodo* get_next (void);
     void set_next (nodo* next);
};

//DEFINICION DE LOS METODOS
template <class TDATO>
nodo<TDATO>::nodo(TDATO numero, nodo* next){
        dato_=numero;
        next_ =next; 
    }
    
template <class TDATO>    
nodo<TDATO>::~nodo(void){}

template <class TDATO>     
     void nodo<TDATO>::set_dato(TDATO numero , nodo* next){
         dato_=numero;
         next_=next; 
     }
     
template <class TDATO>     
     TDATO nodo<TDATO>::get_dato(void){
     
         return  dato_;
         
     }
     
template <class TDATO>     
     nodo<TDATO>* nodo<TDATO>::get_next (void){
         return next_;
     }
     
template <class TDATO>     
     void nodo<TDATO>::set_next (nodo* next){
         next_=next;
     }