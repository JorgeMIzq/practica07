/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 
 * @author Jorge Machado Izquierdo
 * @date 29 de octubre de 2023
 * @brief Write a program that reads pairs of numbers n and m with n ≥ m, and
 * for each pair prints Hn − Hm.
 */
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double numero1, numero2;
  while (cin >> numero1 >> numero2) {
    double H{0.0};
    for (int i = numero2 + 1; i <= numero1; i++) {
      H += 1.0 / i;
    }
    cout << fixed << setprecision(10) << H << endl;
  }
}
