//
// Created by Emmanuel Ceballos on 5/27/2024.
//

#ifndef UNTITLED1_GUERRERO_H
#define UNTITLED1_GUERRERO_H
#include <string>
#include "Persona.h"

class Guerrero : public Persona{
private:
    std::string legion;
    std::string arma;
    std::string experiecia;

public:
    Guerrero();
    Guerrero(float altura, float peso, int edad, std::string nombre, std::string apellido, int iq, std::string legion, std::string arma, std::string experiencia);
    Guerrero(const Guerrero &rhs);
    ~Guerrero();

    std::string getLegion() const;
    std::string getArma() const;
    std::string getExperiencia() const;
};


#endif //UNTITLED1_GUERRERO_H
