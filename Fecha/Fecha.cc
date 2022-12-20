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

Fecha::Fecha() {}

Fecha::Fecha(const int dia, const int mes, const int anio) {
  dia_ = dia;
  mes_ = mes;
  anio_ = anio;
}

bool Fecha::es_bisiesto() const {
  if (anio_ % 4 == 0 && anio_ % 100 != 0 || anio_ % 400 == 0) {
    return true;
  }
  else {
    return false;
  }
}

bool Fecha::es_valida() const {
  if (dia_ < 1 || mes_ < 1 || anio_ < 1800 || anio_ > 9999 || mes_ > 12 ||
      dia_ > 31) {
    return false;
  }
  if (!es_bisiesto() && mes_ == 2 && dia_ > 28) {
    return false;
  }
  if (mes_ == 2 && dia_ > 29) {
    return false;
  }
  if ((mes_ > 7 && mes_ % 2 != 0 && dia_ > 30) ||
      (mes_ <= 7 && mes_ % 2 == 0 && dia_ > 30)) {
    return false;
  }
  return true;
}

std::ostream &operator<<(std::ostream &os, const Fecha &fecha) {
  os << fecha.dia_ << "/" << fecha.mes_ << "/" << fecha.anio_;
  return os;
}

std::istream &operator>>(std::istream &is, Fecha &fecha) {
  is >> fecha.dia_ >> fecha.mes_ >> fecha.anio_;
  return is;
}
