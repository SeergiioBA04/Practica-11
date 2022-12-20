/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Sergio Borrell Alberto alu0101563015@ull.edu.es
 * @date Dic 18 2022
 * @brief Are, Perimetro y color de un criculo
 * @see https://github.com/IB-2022-2023/P11-Intro-oop/blob/main/intro-oop.md
 * @bug No bug
 */
#include <iostream>
#include <string>
#include "Circulo.h"

void Usage(int argc, char *argv[]) {
  if (argc != 4) {
    std::cout << argv[0] << "Parametros incorrectos" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " Punto1, Punto2, Radio" << std::endl;
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
  int punto1 = std::stoi(argv[1]);
  int punto2 = std::stoi(argv[2]);
  int radio = std::stoi(argv[3]);
  Circulo Vector1(punto1, punto2, radio, Circulo::Color::Rojo);
  Vector1.Show(1);
  Vector1.Area(1);
  Vector1.Perimetro(1);
  Vector1.Print(1);
  Vector1.IsInterior(1, 2);
  return 0;
}