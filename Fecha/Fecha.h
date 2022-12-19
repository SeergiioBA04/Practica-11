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

//Crear una clase Fecha que tenga los atributos dia, mes y año. La clase debe tener un constructor que reciba como parámetros los tres atributos y un método que imprima la fecha en formato dd/mm/aaaa.
//Deba decir si es bisiesto o no.
//Decir si es una fecha válida o no.

#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <string>
#include <cmath>

class Fecha {
 public:
  Fecha();
  Fecha(const int dia, const int mes, const int anio);
  int dia() const { return dia_; }
  int mes() const { return mes_; }
  int anio() const { return anio_; }
  bool es_bisiesto() const;
  bool es_valida() const;
  friend std::ostream& operator<<(std::ostream& os, const Fecha& fecha);
  friend std::istream& operator>>(std::istream& is, Fecha& fecha);
 private:
  int dia_{0};
  int mes_{0};
  int anio_{0};
};

#endif