//
// Created by Emmanuel Ceballos on 5/27/2024.
//

#include "Guerrero.h"
Guerrero::Guerrero() : Persona() {
    legion = "";
    arma = "";
    experiecia = "";
}

Guerrero::Guerrero(float altura, float peso, int edad, std::string nombre, std::string apellido, int iq, std::string legion, std::string arma, std::string experiencia): Persona(altura,peso,edad,nombre,apellido,iq){
    this -> legion = legion;
    this -> arma = arma;
    this -> experiecia = experiencia;
}

Guerrero::Guerrero(const Guerrero &rhs){
    this -> legion = rhs.legion;
    this -> arma = rhs.arma;
    this -> experiecia = rhs.experiecia;
}

Guerrero::~Guerrero() = default;

std::string Guerrero::getLegion() const {
    return legion;
}

std::string Guerrero::getArma() const {
    return arma;
}

std::string Guerrero::getExperiencia() const {
    return experiecia;
}