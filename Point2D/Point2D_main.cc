/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Sergio Borrell Alberto alu0101563015@ull.edu.es
 * @date Dic 18 2022
 * @brief Calcula la direccion, distancias, y demas datos de un vector x, y
 * @see https://github.com/IB-2022-2023/P11-Intro-oop/blob/main/intro-oop.md
 * @bug No bug
 */

#include <iostream>
#include "Point2D.h"


void Usage(int argc, char *argv[]) {
  if (argc != 5) {
    std::cout << argv[0] << "Parametros incorrectos" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " Punto1, Punto2, Punto3, Punto4 " << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help"){
    std::cout << argv[0] << "-- Cifrado de ficheros" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << "Punto1, Punto2, Punto3, Punto4" << std::endl;
    std::cout << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  int punto_1 = std::stoi(argv[1]);
  int punto_2 = std::stoi(argv[2]);
  int punto_3 = std::stoi(argv[3]);
  int punto_4 = std::stoi(argv[4]);

  Point2D punto1(punto_1, punto_2);
  Point2D punto2(punto_3, punto_4);
  punto1.Show(1);
  punto2.Show(2);
  punto1.Move(5, 6);
  punto1.Show(1);
  std::cout << "La distancia entre los puntos es: " << punto1.Distance(punto2) << std::endl;
  Point2D punto3 = punto1.Middle(punto2);
  punto3.Show(3);
  return 0;
}
