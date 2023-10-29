  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo
  * @date 29 de octubre de 2023  
  * @brief un programa que imprime los n-términos de la serie fibonacci.
  *
  */

#include <iostream>

int main() {
int numero_elementos;
std::cout << "Ingrese el número de términos para la serie fibonacci:";
std::cin >> numero_elementos; //ponemos los n-términos
if (numero_elementos <= 0) {
  std::cout << "El número ingresado tiene que ser positivo." << std::endl;
  return 1;
} //nos aseguramos que pone un número entero positivo 
std::cout << "los " << numero_elementos << " primeros números de la serie "
<< "Fibonacci son:" << std::endl;
int primer_termino = 0 , segundo_termino = 1;
for (int i = 1; i <= numero_elementos; i++) { 
  std::cout << primer_termino << " "; //ponemos el termino
  int placeholder = primer_termino; //cogemos otra variable int y ponemos el 
  //primer termino
  primer_termino = segundo_termino; // igualamos el primero al segundo
  segundo_termino = placeholder + segundo_termino; // sumamos el antiguo
  // primer termino con el segundo
}
std::cout << std::endl;

return 0;
}
