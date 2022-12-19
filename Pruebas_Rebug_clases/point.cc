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
#include <string>
#include <cmath>

#include "point.h"

/*
 * @brief constructor por defecto
 */

Point2D::Point2D() : x_{0}, y_{0}, z_{0} {
    std::cout << "DEBUG: Constructor Point2D por DEFECTO ejecutado" << std::endl;

}

/*
 * @brief constructor con parametros
 */

Point2D::Point2D(double x, double y, double z) : x_{x}, y_{y}, z_{z} {
    std::cout << "DEBUG: Constructor Point2D con PARAMETROS ejecutado" << std::endl;
}

void Point2D::Suma() {
    int suma_vectores;
    suma_vectores =  x_ + y_ + z_;
    std::cout << "La suma de x, y, z es : " << suma_vectores << std::endl;

}

/*
 * @brief metodo para mostrar las coordenadas del punto
 */

void Point2D::Show(int a) {
    std::cout << "Las coordenadas del punto" << a << " son: (" << x_ << ", " << y_ << ", " << z_ <<")" << std::endl;    
}

/*
 * @brief metodo para mover las coordenadas del punto
 */

void Point2D::Move(double x, double y, double z) {
    x_ = x;
    y_ = y;
    z_ = z;
    //std::cout << "Las coordenadas del punto han sido cambiadas a: (" << x_ << ", " << y_ << ", " << z_ <<")" << std::endl;
}

/*
 * @brief metodo para calcular la distancia entre dos puntos
 */

double Point2D::Distance(Point2D p) {
    double distance = sqrt(pow((p.x_ - x_), 2) + pow((p.y_ - y_), 2)) + pow((p.z_ - z_), 2);
    return distance;
}

/*
 * @brief metodo para calcular el punto medio entre dos puntos
 */

Point2D Point2D::Middle(Point2D p) {
    double x = (p.x_ + x_) / 3;
    double y = (p.y_ + y_) / 3;
    double z = (p.z_ + z_) / 3;
    Point2D middle(x, y, z);
    return middle;
}

std::ostream& operator<<(std::ostream& os, const Point2D& point2D ) {
  os << "("<< point2D.x_ << ", " << point2D.y_ << ", " << point2D.z_ << ")";
  return os;
}