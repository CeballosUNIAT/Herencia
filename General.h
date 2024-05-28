//
// Created by Emmanuel Ceballos on 5/27/2024.
//

#ifndef UNTITLED1_GENERAL_H
#define UNTITLED1_GENERAL_H
#include "Comandante.h"
#include <string>

class General : public Comandante{
private:
    std::string estrategia;
    std::string tactica;
    std::string partido;

public:
    General();
    General(float altura, float peso, int edad, std::string nombre, std::string apellido, int iq, std::string legion,
            std::string arma, std::string experiencia, int soldados, std::string mentalidad, std::string trato,
            std::string estrategia, std::string tactica, std::string partido);
    General(const Guerrero &rhs);
    ~General();

    std::string getEstrategia() const;
    std::string getTactica() const;
    std::string getPartido() const;

};


#endif //UNTITLED1_GENERAL_H
