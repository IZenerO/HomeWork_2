#include <iostream>
#include <cmath>

int main() {

  do {
    int first_arg, second_arg, third_arg;
    const int CONST_1 = 4;
    const int CONST_2 = 2;
    const unsigned int LOW_RANGE_VALUE = 2;
    const unsigned int HIGH_RANGE_VALUE = 255;
    std::cout << "Please, enter first argument of the equation in range [2...255]: " << std::endl;
    std::cin >> first_arg;

    if (first_arg >= LOW_RANGE_VALUE && first_arg <= HIGH_RANGE_VALUE) {
      std::cout << "Please, enter second argument of the equation in range [2...255]: " << std::endl;
      std::cin >> second_arg;
    } else {
        std::cout << "You entered incorrect argument of the equation: " << std::endl;
        continue;
    }
    if (second_arg >= LOW_RANGE_VALUE && second_arg <= HIGH_RANGE_VALUE) {
      std::cout << "Please, enter third argument of the equation in range[2...255]: " << std::endl;
      std::cin >> third_arg;
    }
    if (third_arg >= LOW_RANGE_VALUE && third_arg <= HIGH_RANGE_VALUE) {
      const int DISCRIMINANT = std::pow(second_arg, 2) - (CONST_1 * first_arg * third_arg);
      const int DETORMINATOR_OF_ROOTS = (CONST_2 * first_arg);
      std::cout << "Discriminant: " << DISCRIMINANT << std::endl;
      if (DISCRIMINANT > 0) {
        double root_1 = (-second_arg + std::sqrt(DISCRIMINANT)) / DETORMINATOR_OF_ROOTS;
        double root_2 = (-second_arg - std::sqrt(DISCRIMINANT)) / DETORMINATOR_OF_ROOTS;
        std::cout << "First root: " << root_1 << std::endl;
        std::cout << "Second root: " << root_2 << std::endl;
        break;
      } else {
          std::cout << "Discriminant is negative, try another arguments: " << std::endl;
      }
    } else {
        std::cout << "You entered incorrect argument of the equation: " << std::endl;
    }
  } while (true);
}