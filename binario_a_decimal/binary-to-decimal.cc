 /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo
  * @date 29 de octubre de 2023   
  * @brief un programa que convierte numeros binarios a decimales.
  *
  */

#include <cmath>
#include <iostream>

// La función convert toma un número binario como argumento y lo convierte en decimal.
int convert(unsigned long int binario) {
  int decimal{0}, i{0}, resto{0};
  while (binario != 0) {
    resto = binario % 10; // Obtiene el último dígito binario.
    binario /= 10; // Elimina el último dígito binario.
    
    // Comprueba si el dígito binario es válido (0 o 1).
    if (resto != 0 && resto != 1) {
      return 0; // Si no es válido, devuelve 0 para indicar un valor de entrada incorrecto.
    }
    
    // Calcula el valor decimal utilizando la fórmula binaria (suma ponderada de potencias de 2).
    decimal += resto * std::pow(2, i);
    ++i; // Incrementa el exponente para la próxima potencia de 2.
  }
  return decimal; // Devuelve el valor decimal convertido.
}

int main() {

unsigned long int binario; // Variable para almacenar el número binario.  
std::cout << "Public test case" << std::endl;
// El programa solicita números binarios en la entrada estándar (teclado).
while (std::cin >> binario) {
  // Llama a la función convert para realizar la conversión.
  if (convert(binario) == 0) {
    std::cout << "Wrong Input" << std::endl; // Si la función devuelve 0, el número binario no es válido.
    continue;
  }
 // Muestra el resultado de la conversión en la salida estándar (consola).
  std::cout << convert(binario) << std::endl;
}
return 0; 
}

