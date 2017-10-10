#ifndef SQUARES_H
#define SQUARES_H
#include <iostream>
#include <sstream>
using namespace std;

namespace shapes
{
  class Square1
  {
  public:
  int side;

  Square1()
  {
    side =1;
    cout<<"Object has been created using default constructor"<<endl;
  }
  Square1(int side)
  {
    this->side =side;
    cout<<"Object has been created using overloaded constructor"<<endl;
  }
  ~Square1()
  {
    cout <<"object has been destroyed"<<endl;
  }
  };

  class Square2
  {
  public:
  int* side;

  Square2()
  {
    side = new int;
    *side = 1;
    cout<<"Object has been created using default constructor"<<endl;
  }
  Square2(int side)
  {
    this->side = new int;
    *(this->side) = side;
    cout<<"Object has been created using overloaded constructor"<<endl;
  }
  ~Square2()
  {
    delete side;
    cout<< "object has been destroyed"<<endl;
  }
  };
}

#endif
