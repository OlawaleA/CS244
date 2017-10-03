#ifndef SAMPLE_H
#define SAMPLE_H
#include <iostream>
#include <string>
using namespace std;

namespace exercises
{
  class Exercise
  {
  public:
    int x;
    string y;

    void print()
    {
      cout << x <<" " <<y;
    }
    string mult()
    {
      string result = "";
      for (int i=0 ; i<x; i+=1)
      {
        result +=y;
      }
      return result;
    }
  };
}
#endif
