#include "sample.h"
using namespace exercises;
int main()
{
  Exercise ex;
  ex.x =4; // x field of object exz
  ex.y = "Hello"; //y field of object ex
  ex.print();// print() mathod of object ex

  std:: cout << "\n";
  std:: cout << ex.mult()<< "\n";
  return 0;
}
