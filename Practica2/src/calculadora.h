#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <cctype>

using namespace std;

template <class TDATO>
TDATO calculo (istream &cadena)
{
  pila<TDATO> p1;
  char c;
  char d;

  while ((cadena.peek() != EOF) && (cadena.peek()!= '\n') && (cadena.peek()!= 10))
  {
    c= cadena.peek();

    if ( (c >= '0') && (c <= '9')){
        TDATO n;
        cin >> n;

        p1.push(n);
        cadena.get();
    }else if (c=='-'){
        cin >> d;

            if ((cadena.peek()=='\n')||(cadena.peek()==' ')|| (cadena.peek()==EOF))
            {

                    TDATO aux1=p1.pop();
                    TDATO aux2=p1.pop();
                    p1.push(aux2-aux1);

            }else{
                TDATO n;
                cin >> n;

                p1.push(n*-1);

                cadena.get();
                }

    }else if(c=='+'){
                    TDATO aux1=p1.pop();
                    TDATO aux2=p1.pop();
                    p1.push(aux2+aux1);
                    cadena.get();
    }else if(c=='*'){
                    TDATO aux1=p1.pop();
                    TDATO aux2=p1.pop();
                    p1.push(aux2*aux1);
                    cadena.get();
    }else if(c=='/'){
                    TDATO aux1=p1.pop();
                    TDATO aux2=p1.pop();
                    p1.push(aux2/aux1);
                    cadena.get();
                    
  }else{
        
        cadena.get();
    }

  }
if (p1.length()==1){
  cout << "Resultado"<<endl;
  TDATO result=p1.pop();
  cout <<result<<endl;
  return result;
}else{
    cout << "La expresion esta mal escrita"<<endl;
}

}

template <class TDATO>
TDATO calcular (istream &cadena)
{
  pila<TDATO> p1;
  char c;
  char d;

  while ((cadena.peek() != EOF) && (cadena.peek()!= '\n') && (cadena.peek()!= 10))
  {
    c= cadena.peek();

    if ( (c >= '0') && (c <= '9')){
        TDATO n;
        cin >> n;

        p1.push(n);
        cadena.get();
    }else if (c=='-'){
        cin >> d;

            if ((cadena.peek()=='\n')||(cadena.peek()==' ')|| (cadena.peek()==EOF))
            {

                    TDATO aux1=p1.pop();
                    TDATO aux2=p1.pop();
                    p1.push(aux2-aux1);

            }else{
                TDATO n;
                cin >> n;

                p1.push(n*-1);

                cadena.get();
                }

    }else if(c=='+'){
                    TDATO aux1=p1.pop();
                    TDATO aux2=p1.pop();
                    p1.push(aux2+aux1);
                    cadena.get();
    }else if(c=='*'){
                    TDATO aux1=p1.pop();
                    TDATO aux2=p1.pop();
                    p1.push(aux2*aux1);
                    cadena.get();
    }else if(c=='/'){
                    TDATO aux1=p1.pop();
                    TDATO aux2=p1.pop();
                    p1.push(aux2/aux1);
                    cadena.get();

    }else if(c=='('){
        TDATO numero;
        //bool negativo=false;
        cadena.get();
        
        if(cadena.peek()=='-'){
            //soy negativo 
            //negativo=true;
            cadena.get();
             if ( (cadena.peek() >= '0') && (cadena.peek() <= '9')){
                int n;
                cin >> n;
                n = n*-1;
               numero.set_a(n);
                cadena.get();
             }
        }else{
                
               int n;
                cin >> n;
                numero.set_a(n);
                cadena.get();
                
        }         
                
        
       if(cadena.peek()=='-'){
            
            cadena.get();
             if ( (cadena.peek() >= '0') && (cadena.peek() <= '9')){
                int j;
                cin >> j;
                j = j*-1;
                numero.set_b(j);
                cadena.get();
             }
        }else{
               
                int j;
                cin >> j;
                numero.set_b(j);
                cadena.get();
                
        }         
        
        p1.push(numero);
        
        
    }else if(c=='"'){
        TDATO numero;
        //bool negativo=false;
        cadena.get();
        
        if(cadena.peek()=='-'){
            //soy negativo 
            //negativo=true;
            cadena.get();
             if ( (cadena.peek() >= '0') && (cadena.peek() <= '9')){
                int n;
                cin >> n;
                n = n*-1;
                numero.set_a(n);
                cadena.get();
             }
        }else{
                
                int n;
                cin >> n;
                numero.set_a(n);
                cadena.get();
                
        }         
                
        
       if(cadena.peek()=='-'){
            
            cadena.get();
             if ( (cadena.peek() >= '0') && (cadena.peek() <= '9')){
                int j;
                cin >> j;
                j = j*-1;
                numero.set_b(j);
                cadena.get();
             }
        }else{
               
                int j;
                cin >> j;
                numero.set_b(j);
                cadena.get();
                
        }         
        
        p1.push(numero);
        
        
    }else{
        
        cadena.get();
    }

  }
if (p1.length()==1){
  cout << "Resultado"<<endl;
  TDATO result=p1.pop();
  cout <<result<<endl;
  return result;
}else{
    cout << "La expresion esta mal escrita"<<endl;
}
}
