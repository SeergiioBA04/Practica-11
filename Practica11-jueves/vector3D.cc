/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Vector3D class Implementation
 */

#include <iostream>
#include <cmath>

#include "vector3D.h"

/**
 * @brief Displays the given vector.
 *        Overloading the insertion (<<) operator
 * @param[in] output: The output stream where text is inserted
 * @param[in] kVector: constant reference to the vector to print
 * @return the output.
 */
std::ostream& operator<<(std::ostream& output, const Vector3D& vector) {
  output << '(' << vector.x() << ", " << vector.y() << ", " << vector.z() << ")\n";
  return output;
}

/**
* @brief Multiplica un vector por un escalar
* @param[in] kEscalarFactor: Factor escalar por el que se multiplica el vector
* @return result
*/
Vector3D Vector3D::MultiplyVector(const double kEscalarFactor) const { 
  Vector3D result{x() * kEscalarFactor, y() * kEscalarFactor, z() * kEscalarFactor};
  return result;
}

/**
* @brief Calcula el módulo de un vector
* @return result : Modulo del vector
*/
double Vector3D::Module() {
  double result = sqrt((x() * x()) + (y() * y()) + (z() * z()));
  return result;
}

