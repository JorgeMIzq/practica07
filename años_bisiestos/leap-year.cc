 /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo
  * @date 29 de octubre de 2023  
  * @brief un programa que te dice si el año es bisiesto o no 
  *
  */

#include <iostream>

int main() {

int year;
std::cout << "Ingrese un año: ";
std::cin >> year;
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
  std::cout << year << " es un año bisiesto." << std::endl;
} else {
  std::cout << year << " no es un año bisiesto." << std::endl;
}

return 0;
}

