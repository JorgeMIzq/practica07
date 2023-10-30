/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 
 * @author Jorge Machado Izquierdo
 * @date 26 de octubre de 2023
 * @brief Write a program that reads two numbers x and y, and prints all numbers between x and y (or between y and x), in decreasing order.
 * number of coins on its white squares.
 */


#include <iostream>

int main() {
  int x_numero, y_numero;
  std::cin >> x_numero >> y_numero;
  if (x_numero > y_numero) {
    for (int i = x_numero; i >= y_numero; --i) {
      std::cout << i << std::endl;
      }
    } else {
      for (int i = y_numero; i >= x_numero; --i) {
        std::cout << i << std::endl;
      }
    }
  std::cout << std::endl;
  return 0;
}

