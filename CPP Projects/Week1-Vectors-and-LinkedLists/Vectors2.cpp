// File Name: Vectors2.cpp
// Author: Dia Al rahman
// Email Address: diaalrahman312@gmail.com
// Description:
// Last Changed: 25-09-2023

#include <iostream>
#include <vector>

template <typename T>

void printElements(std::vector<T> &v, int i) {
  if (i > v.size()) {
    std::cout << "Index out of range" << std::endl;
  } else {
    std::cout << v[i] << std::endl;
  }
}

int main() {
  // Chapter 16.4
  // Question 1
  std::vector v1{0, 1, 2, 3, 4};
  printElements(v1, 2);
  printElements(v1, 5);

  std::vector v2{1.1, 2.2, 3.3};
  printElements(v2, 0);
  printElements(v2, -1);

  return 0;
}