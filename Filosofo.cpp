//
// Created by Emmanuel Ceballos on 5/27/2024.
//

#include "Filosofo.h"
Filosofo::Filosofo() : Persona() {
    escuela = "";
    ciudad = "";
    rama = "";
}

Filosofo::Filosofo(float altura, float peso, int edad, std::string nombre, std::string apellido, int iq, std::string escuela, std::string ciudad, std::string rama): Persona(altura,peso,edad,nombre,apellido,iq){
    this -> escuela = escuela;
    this -> ciudad = ciudad;
    this -> rama = rama;
}

Filosofo::Filosofo(const Filosofo &rhs){
    this -> escuela = rhs.escuela;
    this -> ciudad = rhs.ciudad;
    this -> rama = rhs.rama;
}

Filosofo::~Filosofo() = default;

std::string Filosofo::getEscuela() const {
    return escuela;
}

std::string Filosofo::getCiudad() const {
    return ciudad;
}

std::string Filosofo::getRama() const {
    return rama;
}