//
// Created by Emmanuel Ceballos on 5/27/2024.
//

#include "Comandante.h"

Comandante::Comandante() : Guerrero() {
    soldados = 0;
    mentalidad = "";
    trato = "";
}

Comandante::Comandante(float altura, float peso, int edad, std::string nombre, std::string apellido, int iq, std::string legion, std::string arma, std::string experiencia, int soldados, std::string mentalidad, std::string trato) : Guerrero(altura,peso,edad,nombre,apellido,iq,legion,arma,experiencia) {
    this ->soldados = soldados;
    this ->mentalidad = mentalidad;
    this ->trato = trato;
}

Comandante::~Comandante() = default;

int Comandante::getSoldados() const {
    return soldados;
}

std::string Comandante::getMentalidad() const {
    return mentalidad;
}

std::string Comandante::getTrato() const {
    return trato;
}