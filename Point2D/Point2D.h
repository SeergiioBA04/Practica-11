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
  Point2D(double vector_x, double vector_y);
  void Show(int numero);
  void Move(double vector_x, double vector_y);
  double Distance(Point2D punto);
  Point2D Middle(Point2D punto);
 private:
  double vector_x_;
  double vector_y_;
};
#endif