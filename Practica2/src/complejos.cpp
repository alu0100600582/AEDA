#include "complejos.h"
#include <cassert>



Complejos::Complejos() {
    a = 0;
    b =0;
};

Complejos::Complejos(int x, int y) {
    a=x;
    b=y;
}

Complejos::Complejos(const Complejos &Complejos) {
    a = Complejos.a;
    b = Complejos.b;
}

int Complejos::get_a() {
    return a;
}
int Complejos::get_b() {
    return b;
}

void Complejos::set_a(int x) {
     a=x;
}
void Complejos::set_b(int y) {
    b=y;
}


Complejos Complejos::operator+ (Complejos c) {
    Complejos r;
    
    r.a= a+c.a;
    r.b=b+c.b;

    
    return r;
}


Complejos Complejos::operator- (Complejos c) {
   Complejos r;
    
    r.a= a-c.a;
    r.b=b-c.b;

    
    return r;
}


Complejos Complejos::operator* (Complejos c) {
    Complejos r;
    
    r.a= (a*c.a)-(b*c.b);
    r.b=(a*c.b)+(b*c.a);

    
    return r;
}
Complejos Complejos::operator* (int c) {
    Complejos r;
    
    r.a= a*c;
    r.b=b*c;

    
    return r;
}

Complejos Complejos::operator/ (Complejos c) {
    Complejos r;

    
    r.a= (((a*c.a)+(b*c.b))/((c.a*c.a)+(c.b*c.b)));
    r.b=(((b*c.a)-(a*c.b))/((c.a*c.a)+(c.b*c.b)));

    
    return r;
}


ostream& operator << (ostream &o, const Complejos &Complejos)
{
    o << Complejos.a;
    o << " ";
    o << Complejos.b;
    o << "i";
    return o;
}
istream& Complejos::fromStream(istream& is){
    int r;
    int i;
    is >> r >> i;
	this->set_a(r);
	this->set_b(i);
	
	return is;
}



Complejos::~Complejos() {}

istream& operator>>(istream& is, Complejos& c){
    return c.fromStream(is);
}