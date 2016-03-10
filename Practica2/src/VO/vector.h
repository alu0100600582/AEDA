#include <iostream>

#define DEF_SIZE 1


using namespace std;

typedef int TDATO;

class Vector
{
private:
  TDATO *V;
  int first, last;
public:
  Vector(const int = DEF_SIZE);
  ~Vector() { delete[] V; }
  void init(const TDATO&);
  int size() const
  { return last - first + 1; }
  int getFirst() const { return first; }
  int getLast() const { return last; }
  void print(void);
};
