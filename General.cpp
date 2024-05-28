//
// Created by Emmanuel Ceballos on 5/27/2024.
//

#include "General.h"

General::General() : Comandante() {
    estrategia = "";
    tactica = "";
    partido = "";
}

General::General(float altura, float peso, int edad, std::string nombre, std::string apellido, int iq, std::string legion, std::string arma, std::string experiencia,
                       int soldados, std::string mentalidad, std::string trato, std::string estrategia, std::string tactica, std::string partido) :
                       Comandante(altura,peso,edad,nombre,apellido,iq,legion,arma,experiencia, soldados, mentalidad, trato) {
    this ->estrategia = estrategia;
    this ->tactica = tactica;
    this ->partido = partido;
}

General::~General() = default;

std::string General::getEstrategia() const {
    return estrategia;
}

std::string General::getTactica() const {
    return tactica;
}

std::string General::getPartido() const {
    return partido;
}