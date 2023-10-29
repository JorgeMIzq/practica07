  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo
  * @date 29 de octubre de 2023  
  * @brief un programa que lee un número natural e imprime como salida la suma de los dígitos del número en cuestión.
  *
  */

#include <iostream>

int main() {
int numero, suma = 0;
// Solicitar al usuario que ingrese un número natural
std::cout << "Ingresa un número natural: ";
std::cin >> numero;
if (numero < 0) {
  std::cout << "El número ingresado no es un número natural." << std::endl;
  return 1; // Salir del programa con un código de error
}
int numero_original = numero; // Guardar una copia del número original
// Calcular la suma de los dígitos
while (numero > 0) {
  int digito = numero % 10; // Obtener el dígito menos significativo
  suma += digito; // Sumar el dígito a la suma total
  numero /= 10; // Eliminar el dígito menos significativo
}
// Imprimir la suma de los dígitos
std::cout << "La suma de los dígitos de " << numero_original << " es: " << suma << std::endl;

return 0; // Salir del programa con éxito
}

