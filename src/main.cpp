#include <iostream>
#include <vector>

#include "vector.h"
#include "node.h"

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

void PointerMain() {
  using namespace nitrogenice;

  Node<int> n3(5);
  n3.set_left(std::make_shared<Node<int>>(3));
  n3.set_right(std::make_shared<Node<int>>(4));

  std::vector<int> traversed = n3.traverse();
  for (auto e: traversed)
    std::cout << e << std::endl;
}

int main() {
  std::string main_mode;

  std::cout << "What do you want to run?\n";
  std::cout << "[Currently supported modes: {vector, pointer}\n";
  std::cin >> main_mode;

  if (main_mode == "vector") {
    VectorMain();
  } else if (main_mode == "pointer") {
    PointerMain();
  } else {
    std::cout << "Not supported yet :(\n";
  }

  return 0;
}
