/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Sergio Borrell Alberto alu0101563015@ull.edu.es
 * @date Dic 18 2022
 * @brief Calculadora de numeros complejos
 * @see https://github.com/IB-2022-2023/P11-Intro-oop/blob/main/intro-oop.md
 * @bug No bug
 */

// Path: Practica11-ejercisios\Complejo\Complejo_main.cpp

#include "Complejo.h"

int main() {
  Complejo complejo1(1, 2);
  Complejo complejo2(3, 4);
  Complejo resultado;
  std::cout << "Complejo 1: " << complejo1 << std::endl;
  std::cout << "Complejo 2: " << complejo2 << std::endl;
  resultado = complejo1 + complejo2;
  std::cout << "Suma: " << resultado << std::endl;
  resultado = complejo1 - complejo2;
  std::cout << "Resta: " << resultado << std::endl;
  resultado = complejo1 * complejo2;
  std::cout << "Multiplicaion: " << resultado << std::endl;
  resultado = complejo1 / complejo2;
  std::cout << "Division: " << resultado << std::endl;
  return 0;
}