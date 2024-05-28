//
// Created by Emmanuel Ceballos on 5/27/2024.
//

#ifndef UNTITLED1_COMANDANTE_H
#define UNTITLED1_COMANDANTE_H
#include "Guerrero.h"
#include <string>

class Comandante : public Guerrero{
private:
    int soldados;
    std::string mentalidad;
    std::string trato;

public:
    Comandante();
    Comandante(float altura, float peso, int edad, std::string nombre, std::string apellido, int iq, std::string legion,
               std::string arma, std::string experiencia, int soldados, std::string mentalidad, std::string trato);
    Comandante(const Guerrero &rhs);
    ~Comandante();

    int getSoldados() const;
    std::string getMentalidad() const;
    std::string getTrato() const;
};


#endif //UNTITLED1_COMANDANTE_H
