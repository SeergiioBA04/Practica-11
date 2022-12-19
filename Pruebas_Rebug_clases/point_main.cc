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
#include <iostream>
#include <string>
#include <cmath>

#include "point.h"

int main() {
    Point2D p1(5, 1, 2);
    Point2D p2(2, 0, 3);
    std::cout << "Las coordenadas del punto1 son : " << p1 << std::endl;
    //p1.Show(1);
    p2.Show(2);
    p1.Suma();
    p1.Move(5, 6, 3);
    p1.Show(1);
    std::cout << "La distancia entre los puntos es: " << p1.Distance(p2) << std::endl;
    Point2D p3 = p1.Middle(p2);
    p3.Show(3);
    return 0;
}
