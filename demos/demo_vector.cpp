#include <iostream>

#include <vector.hpp>
#include <matrix.hpp>

namespace bla = minimath;


int main()
{
  size_t n = 5;
  bla::Vector<double> x(n), y(n);
  

  for (size_t i = 0; i < x.Size(); i++)
    {
      x(i) = i;
      y(i) = 10;
    }

  bla::Vector<double> z = x+y;
  
  std::cout << "x+y = " << z << std::endl;
}
