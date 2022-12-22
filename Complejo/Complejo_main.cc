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

#include "Complejo.h"

void Usage(int argc, char *argv[]) {
  if (argc != 5) {
    std::cout << argv[0] << "Parametros incorrectos" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " numero1, numero2, numero3, numero4" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help"){
    std::cout << argv[0] << "-- Cifrado de ficheros" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " numero1, numero2, numero3, numero4" << std::endl;
    std::cout << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  int numero1 = std::stoi(argv[1]);
  int numero2 = std::stoi(argv[2]);
  Complejo complejo1(numero1, numero2);
  int numero3 = std::stoi(argv[3]);
  int numero4 = std::stoi(argv[4]);
  Complejo complejo2(numero3, numero4);
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