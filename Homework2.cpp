#include <iostream>
#include <cmath>

int main() {
  int first_arg, second_arg, third_arg;
  const int const_1 = 4;
  const int const_2 = 2;

  do {
    std::cout << "Please, enter first argument of the equation in range [2...10]: " << std::endl;
    std::cin >> first_arg;
    if (first_arg <= 10 && first_arg >= 2) {
      std::cout << "Please, enter second argument of the equation in range [1...255]: " << std::endl;
      std::cin >> second_arg;
      if (second_arg >= 1 && second_arg <= 255) {
        std::cout << "Please, enter third argument of the equation in range[1...255]: " << std::endl;
        std::cin >> third_arg;
        if (third_arg >= 1 && third_arg <= 255) {
          int discriminant = std::pow(second_arg, 2) - (const_1 * first_arg * third_arg);
          std::cout << "Discriminant: " << discriminant << std::endl;
          if (discriminant > 0) {
            double root_1 = (-second_arg + std::sqrt(discriminant)) / (const_2 * first_arg);
            double root_2 = (-second_arg - std::sqrt(discriminant)) / (const_2 * first_arg);
            std::cout << "First root: " << root_1 << std::endl;
            std::cout << "Second root: " << root_2 << std::endl;
            return 0;
          }
          else {
            std::cout << "Discriminant is negative, try another arguments: " << std::endl;
            continue;
          }
        }
        else {
          std::cout << "You entered incorrect argument of the equation: " << std::endl;
          continue;
        }
      }
      else {
        std::cout << "You entered incorrect argument of the equation: " << std::endl;
        continue;
      }
    }
    else {
      std::cout << "You entered incorrect argument of the equation" << std::endl;
      continue;
    }
  } while (true);

}