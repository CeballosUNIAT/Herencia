//
// Created by Emmanuel Ceballos on 5/27/2024.
//
#include <string>
#ifndef UNTITLED1_PERSONA_H
#define UNTITLED1_PERSONA_H


class Persona {
private:
    float altura{};
    float peso{};
    int edad{};
    std::string nombre;
    std::string apellido;
    int iq;

public:
    Persona();
    Persona(float altura, float peso, int edad, std::string nombre, std::string apellido, int iq);
    Persona (const Persona &rhs);

    float getAltura() const;
    float getPeso() const;
    int getEdad() const ;
    std::string getNombre() const;
    std::string getApellido() const;
    int getIq() const;
    ~Persona();
};


#endif //UNTITLED1_PERSONA_H
