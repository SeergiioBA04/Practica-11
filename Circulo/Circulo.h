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

#ifndef Circulo_H
#define Circulo_H
class Circulo {
 public:
  enum class Color {
    Rojo,
    Verde,
    Azul
  };
  Circulo();
  Circulo(double vector_x, double vector_y, double vector_r, Color vector_c);
  void Show(int numero);
  void Area(int numero);
  void Perimetro(int numero);
  void Print(int numero);
  void IsInterior(double vector_x, double vector_y);
 private:
  double vector_x_;
  double vector_y_;
  double vector_r_;
  Color vector_c_;
};

#endif