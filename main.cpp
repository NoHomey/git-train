#include <iostream>

int add(int n) {
  return n + 1;
}

int min(int n) {
  return n - 1;
}

int main() {
  std::cout << min(2) << std::endl;
  return 0;
}
