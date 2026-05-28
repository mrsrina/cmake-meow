#include "meow.hpp"

#include <iostream>
#include <string_view>

void meow::sound(std::string_view message) {
  std::cout << MAJOR_CAT << " said: " << message << std::endl;
}
