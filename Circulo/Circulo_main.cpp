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

int main() {
  Circulo Vector1(1, 2, 3, Circulo::Color::Rojo);
  Circulo Vector2(4, 5, 6, Circulo::Color::Verde);
  Circulo Vector3(7, 8, 9, Circulo::Color::Azul);
  Vector1.Show(1);
  Vector2.Show(2);
  Vector3.Show(3);
  Vector1.Area(1);
  Vector2.Area(2);
  Vector3.Area(3);
  Vector1.Perimetro(1);
  Vector2.Perimetro(2);
  Vector3.Perimetro(3);
  Vector1.Print(1);
  Vector2.Print(2);
  Vector3.Print(3);
  Vector1.IsInterior(1, 2);
  Vector2.IsInterior(4, 5);
  Vector3.IsInterior(0, 0);
  
  return 0;
}