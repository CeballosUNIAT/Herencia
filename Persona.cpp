//
// Created by Emmanuel Ceballos on 5/27/2024.
//

#include "Persona.h"
Persona::Persona (float altura, float peso, int edad, std::string nombre, std::string apellido, int iq) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->iq = iq;
    this->altura = altura;
    this->peso = peso;
}

Persona::Persona (const Persona &rhs) {
    this->nombre = rhs.nombre;
    this->apellido = rhs.apellido;
    this->edad = rhs.edad;
    this->iq = rhs.iq;
    this->altura = rhs.altura;
    this->peso = rhs.peso;
}

Persona::Persona() = default;

Persona::~Persona() = default;

float Persona::getAltura() const {
    return altura;
}
float Persona::getPeso() const {
    return peso;
}
int Persona::getEdad() const {
    return edad;
}
std::string Persona::getNombre() const {
    return nombre;
}
std::string Persona::getApellido() const {
    return apellido;
}
int Persona::getIq() const {
    return iq;
}

