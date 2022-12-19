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
using namespace std;

int main() {
  Complejo complejo1(1, 2);
  Complejo complejo2(3, 4);
  Complejo resultado;
  cout << "Complejo 1: " << complejo1 << endl;
  cout << "Complejo 2: " << complejo2 << endl;
  resultado = complejo1 + complejo2;
  cout << "Suma: " << resultado << endl;
  resultado = complejo1 - complejo2;
  cout << "Resta: " << resultado << endl;
  resultado = complejo1 * complejo2;
  cout << "Multiplicaion: " << resultado << endl;
  resultado = complejo1 / complejo2;
  cout << "Division: " << resultado << endl;
  return 0;
}