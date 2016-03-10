#pragma once
#include <iostream>

using namespace std;

class Fracciones {

private:
    int a;
    int b;

public:
    Fracciones();
    Fracciones(int x, int y);
    Fracciones(const Fracciones&);
        ~Fracciones();
        
   int get_a(void);
   int get_b(void);
   void set_a(int x);
   void set_b(int y);
    
    Fracciones operator+ (Fracciones);
    Fracciones operator- (Fracciones);
    Fracciones operator* (Fracciones);
    Fracciones operator* (int);
    Fracciones operator/ (Fracciones);
    
    int mcd(int a, int b);
    
    friend ostream& operator << (std::ostream&, const Fracciones&);
    virtual istream& fromStream(istream& sin);
    friend istream& operator>>(istream& is, Fracciones& f);
};
