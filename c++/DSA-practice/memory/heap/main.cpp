
#include<iostream>

int main() {
  int *numPtr = new int;

  std::cout << "*numPtr: " << *numPtr << std::endl; //return value of int
  std::cout << " numPtr: " <<  numPtr << std::endl; //return heap mem location where the value of int is stored
  std::cout << "&numPtr: " << &numPtr << std::endl; //return stack mem location where the value of numPtr is stored

  *numPtr = 42; //now value of int(the heap) is 42
  std::cout << "*numPtr assigned 42." << std::endl;

  std::cout << "*numPtr: " << *numPtr << std::endl;
  std::cout << " numPtr: " <<  numPtr << std::endl;
  std::cout << "&numPtr: " << &numPtr << std::endl;

  return 0;
}

// *numPtr: 0
//  numPtr: 0x56493749feb0
// &numPtr: 0x7ffe33e45560
// *numPtr assigned 42.
// *numPtr: 42
//  numPtr: 0x56493749feb0
// &numPtr: 0x7ffe33e45560