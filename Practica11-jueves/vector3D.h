/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Vector3D class Definition
 */

#ifndef VECTOR3D_H
#define VECTOR3D_H

/** @brief Class Vector3D */
class Vector3D {
 public:
  Vector3D() : x_{0.0}, y_{0.0}, z_{0.0} { }
  Vector3D(double x_coordenada, double y_coordenada, double z_coordenada)
          : x_{x_coordenada}, y_{y_coordenada}, z_{z_coordenada} {}
  // 3 Getters:
  double x() const { return x_; } 
  double y() const { return y_; }
  double z() const { return z_; }
  Vector3D MultiplyVector(const double kEscalarFactor);
  double Module();
 private:
  double x_;
  double y_;
  double z_;
};

std::ostream& operator<<(std::ostream& kOutput, const Vector3D& vector1);

#endif
