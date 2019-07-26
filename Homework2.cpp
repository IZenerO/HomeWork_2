#include <iostream>
#include <cmath>

int main() {

  do {
    int first_arg, second_arg, third_arg;
    const uint32_t CONST_1 = 4;
    const uint32_t CONST_2 = 2;
    const uint32_t LOW_RANGE_VALUE = 2;
    const uint32_t HIGH_RANGE_VALUE = 255;
    std::cout << "Please, enter first argument of the equation in range [ " << LOW_RANGE_VALUE << "..." << HIGH_RANGE_VALUE << "]" << std::endl;
    std::cin >> first_arg;

    if (first_arg < LOW_RANGE_VALUE || first_arg > HIGH_RANGE_VALUE) {
      std::cout << "You entered incorrect first argument of the equation: " << std::endl;
      continue;
    } 
    std::cout << "Please, enter second argument of the equation in range [ " << LOW_RANGE_VALUE << "..." << HIGH_RANGE_VALUE << "]" << std::endl;
    std::cin >> second_arg;
    
    if (second_arg < LOW_RANGE_VALUE || second_arg > HIGH_RANGE_VALUE) {
      std::cout << "You entered incorrect second argument of the equation: " << std::endl;
      continue;
    } 
    std::cout << "Please, enter third argument of the equation in range [ " << LOW_RANGE_VALUE << "..." << HIGH_RANGE_VALUE << "]" << std::endl;
    std::cin >> third_arg;
    
    if (third_arg < LOW_RANGE_VALUE || third_arg > HIGH_RANGE_VALUE) {
      std::cout << "You entered incorrect third argument of the equation: " << std::endl;
      continue;
    } 
    const int DISCRIMINANT = std::pow(second_arg, 2) - (CONST_1 * first_arg * third_arg);
    if (DISCRIMINANT > 0) {
      const int DETORMINATOR_OF_ROOTS = (CONST_2 * first_arg);
      double root_1 = (-second_arg + std::sqrt(DISCRIMINANT)) / DETORMINATOR_OF_ROOTS;
      double root_2 = (-second_arg - std::sqrt(DISCRIMINANT)) / DETORMINATOR_OF_ROOTS;
      std::cout << "Discriminant: " << DISCRIMINANT << std::endl;
      std::cout << "First root: " << root_1 << std::endl;
      std::cout << "Second root: " << root_2 << std::endl;
      break;
    } else {
      std::cout << "Discriminant is negative, try another arguments: " << std::endl;
    }
  } while (true);
}