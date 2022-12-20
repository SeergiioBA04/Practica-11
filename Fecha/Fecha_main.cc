/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Sergio Borrell Alberto alu0101563015@ull.edu.es
 * @date Dic 18 2022
 * @brief Muestra las fechas, años bisisestos...
 * @see https://github.com/IB-2022-2023/P11-Intro-oop/blob/main/intro-oop.md
 * @bug No bug
 */

#include "Fecha.h"

void Usage(int argc, char *argv[]) {
  if (argc != 4) {
    std::cout << argv[0] << "Parametros incorrectos" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " Dia, Mes, Anio" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help"){
    std::cout << argv[0] << "-- Cifrado de ficheros" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " Dia, Mes, Anio" << std::endl;
    std::cout << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  int dia = std::stoi(argv[1]);
  int mes = std::stoi(argv[2]);
  int anio = std::stoi(argv[3]);
  Fecha fecha1(dia, mes, anio);
  Fecha resultado;
  std::cout << "Fecha 1: " << fecha1 << std::endl;
  std::cout << "Fecha 1 es bisiesto: ";
  if (fecha1.es_bisiesto() == true) {
    std::cout << "yes";
  } 
  else {
    std::cout << "no";
  }
  std::cout << std::endl;
  std::cout << "Fecha 1 es valida: ";
  if (fecha1.es_valida() == true) {
    std::cout << "yes";
  }
  else {
    std::cout << "no";
  }
  std::cout << std::endl;
  return 0;
}
