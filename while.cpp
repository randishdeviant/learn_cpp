#include <iostream>

int main() {
  int i = 2;
  while (i <= 6) {
    if (i % 2 == 0) {
      std::cout << i << " adalah bilangan genap\n";
    }
    i++;
  }
}
