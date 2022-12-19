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

/*Create a class Point2D
 *Show() to print in screen the cordenates of the point
 *Move to change the coodenates os the point
 *Distance to calculate the distance between two points
 *Middle to calculate middle point
*/

#ifndef POINT2D_H
#define POINT2D_H

class Point2D {
    public:
        Point2D();
        Point2D(double x, double y);
        void Show(int a);
        void Move(double x, double y);
        double Distance(Point2D p);
        Point2D Middle(Point2D p);
    private:
        double x_;
        double y_;
};

#endif