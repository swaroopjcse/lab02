#include <iostream>

void my_assert(int expected, int actual) {
  if (expected == actual) std::cout << "OK" << std::endl;
  else std::cerr << "Expected :" << expected << ", actual: " << actual << std::endl;
}

int sum(int a, int b) {
  // TODO: implement function
  return 0; // placeholder
}

int main() {
  my_assert(5, sum(2, 3));
  my_assert(0, sum(1, -1));
  
  return 0;
}
