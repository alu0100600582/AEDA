#include "VO/pila.h"
#include "calculadora.h"
#include "complejos.h"
#include "fracciones.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <cctype> 
#include <string>

using namespace std;

int main (void){


  bool aux=false;
  
  char tecla;
  do{
  cout << "Calculadora"<<endl;
  cout << "Opcion1: Enteros"<<endl;
  cout << "Opcion2: Decimales"<<endl;
  cout << "Opcion3 :Racionales"<<endl;
  cout << "Opcion4: Complejos"<<endl;
  cout << "Opcion 5: Salir"<<endl;

   cin >> tecla;
  
    switch(tecla){
    case '1':{
          getchar();
          cout << "Introduzca la expresion a calcular. Ejemplo: 2 7 + 1 4 + /"<<endl;
          calculo<int>(cin);
          break;
            }
       case '2':{
           getchar();
          cout << "Introduzca la expresion a calcular. Ejemplo: 2.1 7.6 + 1.9 4.6 + *"<<endl;
         calculo<float>(cin);
       break;
            }
       case '3':{
           getchar();
          cout << "Introduzca la expresion a calcular. Ejemplo: (comillas)2 7(comillas) (comillas)1 4(comillas) + (comillas)8 6(comillas) (comillas)7 9(comillas) + *"<<endl;
         calcular<Fracciones>(cin);
       break;
            }
       case '4':{
           getchar();
         cout << "Introduzca la expresion a calcular. Ejemplo: (2 7) (1 4) + (8 6) (7 9) + *"<<endl;
         calcular<Complejos>(cin);
       break;
            }
       case '5':{
            getchar();
           aux=true;
           break;
            }
      	default: cout << "Opcion no valida.\n"; break;
    }
    
  }while(aux==false);
  

}
 
 
