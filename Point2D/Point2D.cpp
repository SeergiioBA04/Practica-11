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

#include "Point2D.h"

/*
 * @brief constructor por defecto
 */

Point2D::Point2D() : x_{0}, y_{0} {
    std::cout << "DEBUG: Constructor Point2D por DEFECTO ejecutado" << std::endl;

}

/*
 * @brief constructor con parametros
 */

Point2D::Point2D(double x, double y) : x_{x}, y_{y} {
    std::cout << "DEBUG: Constructor Point2D con PARAMETROS ejecutado" << std::endl;
}

/*
 * @brief metodo para mostrar las coordenadas del punto
 */

void Point2D::Show(int numero) {
    std::cout << "Las coordenadas del punto" << numero << " son: (" << vector_x_ << ", " << vector_y_ << ")" << std::endl;    
}

/*
 * @brief metodo para mover las coordenadas del punto
 */

void Point2D::Move(double x, double y) {
    vector_x_ = vector_x;
    vector_y_ = vector_y;

    std::cout << "Las coordenadas del punto han sido cambiadas a: (" << vector_x_ << ", " << vector_y_ << ")" << std::endl;
}

/*
 * @brief metodo para calcular la distancia entre dos puntos
 */

double Point2D::Distance(Point2D punto) {
    double distance = sqrt(pow((punto.vector_x_ - vector_x_), 2) + pow((punto.vector_y_ - vector_y_), 2));
    return distance;
}

/*
 * @brief metodo para calcular el punto medio entre dos puntos
 */

Point2D Point2D::Middle(Point2D punto) {
    double x = (punto.vector_x_ + vector_x_) / 2;
    double y = (punto.vector_y_ + vector_y_) / 2;
    Point2D middle(vector_x, vector_y);
    return middle;
}
