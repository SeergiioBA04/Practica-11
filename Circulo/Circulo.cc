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
#include <cmath>
#include "Circulo.h"

/*
 * @brief constructor por defecto
 */
Circulo::Circulo() : vector_x_{0}, vector_y_{0}, vector_r_{0}, vector_c_{Color::Rojo} {
  std::cout << "DEBUG: Constructor Circulo por DEFECTO ejecutado" << std::endl;
}

/*
 * @brief constructor con parametros
 */
Circulo::Circulo(double vector_x, double vector_y, double vector_r, Color vector_c) : vector_x_{vector_x}, vector_y_{vector_y}, vector_r_{vector_r}, vector_c_{vector_c} {
  std::cout << "DEBUG: Constructor Circulo con PARAMETROS ejecutado" << std::endl;
}

/*
 * @brief metodo para mostrar las coordenadas del punto
 */
void Circulo::Show(int numero) {
  std::cout << "El circulo " << numero << " tiene las coordenadas: (" << vector_x_ << ", " << vector_y_ << ")" << std::endl;
}

/*
 * @brief metodo para calcular el area del circulo
 */
void Circulo::Area(int numero){
  double area = M_PI * pow(vector_r_, 2);
  std::cout << "El area del circulo " << numero << " es: " << area << std::endl;
}

/*
 * @brief metodo para calcular el perimetro del circulo
 */
void Circulo::Perimetro(int numero) {
  double perimetro = 2 * M_PI * vector_r_;
  std::cout << "El perimetro del circulo " << numero << " es: " << perimetro << std::endl;
}

/*
 * @brief metodo para imprimir el color del circulo
 */
void Circulo::Print(int numero) {
  switch (vector_c_) {
  case Color::Rojo:
    std::cout << "El color del circulo " << numero << " es: Rojo" << std::endl;
  break;
  case Color::Verde:
    std::cout << "El color del circulo " << numero << " es: Verde" << std::endl;
  break;
  case Color::Azul:
    std::cout << "El color del circulo " << numero << " es: Azul" << std::endl;
  break;
  }
}

/*
 * @brief metodo para comprobar si un punto esta dentro del circulo
 */

void Circulo::IsInterior(double x, double y) {
  double distancia = sqrt(pow(vector_x_ - vector_x_, 2) + pow(vector_y_ - vector_y_, 2));
  if (distancia <= vector_r_) {
    std::cout << "El punto (" << vector_x_ << ", " << vector_y_ << ") esta dentro del circulo" << std::endl;
  } 
  else {
    std::cout << "El punto (" << vector_x_ << ", " << vector_y_ << ") esta fuera del circulo" << std::endl;
  }
}