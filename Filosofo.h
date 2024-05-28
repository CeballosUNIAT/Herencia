//
// Created by Emmanuel Ceballos on 5/27/2024.
//

#ifndef UNTITLED1_FILOSOFO_H
#define UNTITLED1_FILOSOFO_H
#include <string>
#include "Persona.h"

class Filosofo : public Persona{
private:
    std::string escuela;
    std::string ciudad;
    std::string rama;

public:
    Filosofo();
    Filosofo(float altura, float peso, int edad, std::string nombre, std::string apellido, int iq, std::string escuela, std::string ciudad, std::string rama);
    Filosofo(const Filosofo &rhs);
    ~Filosofo();

    std::string getEscuela() const;
    std::string getCiudad() const;
    std::string getRama() const;
};


#endif //UNTITLED1_FILOSOFO_H
