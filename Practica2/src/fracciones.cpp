#include "fracciones.h"
#include <cassert>



Fracciones::Fracciones() {
    a = 0;
    b =0;
};

Fracciones::Fracciones(int x, int y) {
    a=x;
    b=y;
}

Fracciones::Fracciones(const Fracciones &Fracciones) {
    a = Fracciones.a;
    b = Fracciones.b;
}

int Fracciones::get_a() {
    return a;
}
int Fracciones::get_b() {
    return b;
}
void Fracciones::set_a(int x) {
     a=x;
}
void Fracciones::set_b(int y) {
    b=y;
}
Fracciones Fracciones::operator+ (Fracciones c) {
    Fracciones r;
    int aux;
    int mini;
    int mini2;
    int mini3;
    
    
    mini=b*c.b;
    mini2=mini/b;
    mini3=mini/c.b;
    
    r.a=mini2*a+mini3*c.a;
    r.b=mini;
    
    aux= mcd(r.a,r.b);
    
    r.a=r.a/aux;
    r.b=r.b/aux;
    
    return r;
}


Fracciones Fracciones::operator- (Fracciones c) {
    Fracciones r;
    int aux;
    int mini;
    int mini2;
    int mini3;
    
    
    mini=b*c.b;
    mini2=mini/b;
    mini3=mini/c.b;
    
    r.a=mini2*a-mini3*c.a;
    r.b=mini;
    
    aux= mcd(r.a,r.b);
    
    r.a=r.a/aux;
    r.b=r.b/aux;
    
    return r;
}


Fracciones Fracciones::operator* (Fracciones c) {
    Fracciones r;
    int aux;
    r.a= a*c.a;
    r.b=b*c.b;

    
    aux= mcd(r.a,r.b);
    
    r.a=r.a/aux;
    r.b=r.b/aux;
    
    return r;
}

Fracciones Fracciones::operator* (int c) {
    Fracciones r;
    
    r.a= a*c;
    r.b=b*c;

    
  
    return r;
}

Fracciones Fracciones::operator/ (Fracciones c) {
    Fracciones r;
    int aux;
    
    r.a= a*c.b;
    r.b=b*c.a;

    
     aux= mcd(r.a,r.b);
    
    r.a=r.a/aux;
    r.b=r.b/aux;
     return r;
}


ostream& operator << (ostream &o, const Fracciones &Fracciones)
{
    o << Fracciones.a;
    o << "/";
    o << Fracciones.b;
    return o;
}
istream& Fracciones::fromStream(istream& is){
    int d;
    int n;
    is >> d >> n;
	this->set_a(d);
	this->set_b(n);
	
	return is;
}

istream& operator>>(istream& is, Fracciones& f){
    return f.fromStream(is);
}

Fracciones::~Fracciones() {}

int Fracciones::mcd(int a, int b){
 

	if(a < 0){
		a = a*-1;
	}
	if(b < 1){
		b =a * -1;

	}

	if ( a==0|| b==0){
    	return a;
    }    

	while (a!=b){

		if (a>b)
			a = a-b;

		else
			b = b-a;
	}

	return a;
    
}