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

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Complejo {
 public:
  Complejo();
  Complejo(const double real, const double imaginario);
  double real() const { return real_; }
  double imaginario() const { return imaginario_; }
  Complejo operator+(const Complejo& complejo) const;
  Complejo operator-(const Complejo& complejo) const;
  Complejo operator*(const Complejo& complejo) const;
  Complejo operator/(const Complejo& complejo) const;
  friend ostream& operator<<(ostream& os, const Complejo& complejo);
 private:
  double real_{0};
  double imaginario_{0};
};

#endif