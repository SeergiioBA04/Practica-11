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

int main() {
  Fecha fecha1(1, 2, 2020);
  Fecha fecha2(3, 4, 2121);
  Fecha resultado;
  std::cout << "Fecha 1: " << fecha1 << std::endl;
  std::cout << "Fecha 2: " << fecha2 << std::endl;
  std::cout << "Fecha 1 es bisiesto: ";
  if (fecha1.es_bisiesto() == true) {
    std::cout << "yes";
  } 
  else {
    std::cout << "no";
  }
  std::cout << std::endl;
  std::cout << "Fecha 2 es bisiesto: ";
  if (fecha2.es_bisiesto() == true) {
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
  std::cout << "Fecha 2 es valida: ";
  if (fecha2.es_valida() == true) {
    std::cout << "yes";
  }
  else {
    std::cout << "no";
  }
  std::cout << std::endl;
  return 0;
}
