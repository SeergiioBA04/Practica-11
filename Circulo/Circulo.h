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
        enum class Color {Rojo, Verde, Azul};
        Circulo();
        Circulo(double x, double y, double r, Color c);
        void Show(int a);
        void Area(int a);
        void Perimetro(int a);
        void Print(int a);
        void IsInterior(double x, double y);
    private:
        double x_;
        double y_;
        double r_;
        Color c_;
};

#endif