 /** 
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo
  * @date 29 de octubre de 2023   
  * @brief un programa que convierte numeros becimales a binario.
  *
  */

#include <iostream>

int main() {
    long long int num1;
    std::string binario = "";

    while (std::cin >> num1) {
      // Comprobamos que el número no sea negativo
      while (num1 < 0) {
          std::cin >> num1;
      }
      if (num1 == 0) { //comprobamos si es cero
            binario = "0";
      } 
      while (num1 > 0) {
        if (num1 % 2 == 0) {
          binario = "0" + binario;
        } else {
          binario = "1" + binario;
        }
      num1 = num1 / 2;
      } 
      /*si es mayor que cero se mira el resto de 2. Si es cero se le añade un
     * cero al principio de la cadena de texto y si da uno pues se le añade un uno.
     * Luego se divide entre dos y se repite el loop, añadiendo al princio de la
     * cadena unos y ceros hasta que num1 sea cero, entonces se imprime el resultado
     * */

      std::cout << binario << std::endl;
    }
}

