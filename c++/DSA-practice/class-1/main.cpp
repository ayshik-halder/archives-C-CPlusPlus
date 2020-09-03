#include <iostream>
#include "Cube.h"

int main() {
  Cube a;
  a.setlength(3.48);
  double volume = a.getVolume();
  std::cout << "Volume: " << volume << std::endl;
  return 0;
}
