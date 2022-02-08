#include <iostream>
#include "foo.hpp"

using namespace std;

int foo(int const _a)
{
  int result = 0;
  cout <<"In param = "<<_a<<endl;
  result = 42;

  return result;
}