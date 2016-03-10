#pragma once
#include <iostream>

using namespace std;

class Complejos {

private:
    int a;
    int b;

public:
    Complejos();
    Complejos(int x, int y);
    Complejos(const Complejos&);
        ~Complejos();
   
   int get_a(void);
   int get_b(void);
   void set_a(int x);
   void set_b(int y);
   
    Complejos operator+ (Complejos);
    Complejos operator- (Complejos);
    Complejos operator* (Complejos);
    Complejos operator* (int);
    Complejos operator/ (Complejos);
    virtual istream& fromStream(istream& sin);
    friend ostream& operator << (std::ostream&, const Complejos&);
    friend istream& operator>>(istream& is, Complejos& c);

};