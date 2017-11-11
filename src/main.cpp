#include <iostream>

#include "vector.h"

void VectorMain() {
  int n = 0;
  std::cin >> n;

  nitrogenice::Vector vector(n); 
  for (int i = 0; i < n; i++) 
    std::cin >> vector[i];

  double sum = 0;
  for (int i = 0; i < n; i++)
    sum += vector[i];

  std::cout << "Sum of elements in vector = " << sum << std::endl;
}

int main(void) {
  VectorMain();

  return 0;
}
