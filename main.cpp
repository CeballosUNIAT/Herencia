#include <iostream>
#include "Persona.h"
#include "Guerrero.h"
#include "Filosofo.h"
#include "Comandante.h"
#include "General.h"
#include <string>

int main() {
    Guerrero juanito (1.72,70.5,25,"Juan","De los Palotes",87, "Fenix", "Alabarda", "35 meses");
    std::cout << "Nombre: " << juanito.getNombre()<< std::endl;
    std::cout << "Familia: " << juanito.getApellido()<< std::endl;
    std::cout << "Altura: " << juanito.getAltura()<< std::endl;
    std::cout << "Peso: " << juanito.getPeso()<< std::endl;
    std::cout << "Edad: " << juanito.getEdad()<< std::endl;
    std::cout << "Inteligencia: " << juanito.getIq()<< std::endl;
    std::cout << "Legion: " << juanito.getLegion()<< std::endl;
    std::cout << "Arma: " << juanito.getArma()<< std::endl;
    std::cout << "Tiempo de servicio: " << juanito.getExperiencia()<< std::endl<< std::endl;

    Filosofo pericles (1.86,97.9,57,"Pericles", "Oracles", 123,"Aristoteles", "Alejandria","Existencialismo");
    std::cout << "Nombre: " << pericles.getNombre()<< std::endl;
    std::cout << "Familia: " << pericles.getApellido()<< std::endl;
    std::cout << "Altura: " << pericles.getAltura()<< std::endl;
    std::cout << "Peso: " << pericles.getPeso()<< std::endl;
    std::cout << "Edad: " << pericles.getEdad()<< std::endl;
    std::cout << "Inteligencia: " << pericles.getIq()<< std::endl;
    std::cout << "Escuela de procedencia: " << pericles.getEscuela()<< std::endl;
    std::cout << "Ubicacion: " << pericles.getCiudad()<< std::endl;
    std::cout << "Especialidad: " << pericles.getRama()<< std::endl<< std::endl;

    Comandante neron (1.65,60,35,"Neron","Xenon",115,"Leon","Sable", "1 decada",50,"Activa","Estricto");
    std::cout << "Nombre: " << neron.getNombre()<< std::endl;
    std::cout << "Familia: " << neron.getApellido()<< std::endl;
    std::cout << "Altura: " << neron.getAltura()<< std::endl;
    std::cout << "Peso: " << neron.getPeso()<< std::endl;
    std::cout << "Edad: " << neron.getEdad()<< std::endl;
    std::cout << "Inteligencia: " << neron.getIq()<< std::endl;
    std::cout << "Legion: " << neron.getLegion()<< std::endl;
    std::cout << "Arma: " << neron.getArma()<< std::endl;
    std::cout << "Tiempo de servicio: " << neron.getExperiencia()<< std::endl;
    std::cout << "Soldados a su cargo: " << neron.getSoldados()<< std::endl;
    std::cout << "Mentalidad: " << neron.getMentalidad()<< std::endl;
    std::cout << "Trato a sus subordinados: " << neron.getTrato()<< std::endl<< std::endl;

    General maximo (1.93,86,40,"Maximo","Merilio",147,"Escorpio","Artilleria","5 lustros", 2500, "Pasiva","amable","Desgaste", "Asedio","Imperialista");
    std::cout << "Nombre: " << maximo.getNombre()<< std::endl;
    std::cout << "Familia: " << maximo.getApellido()<< std::endl;
    std::cout << "Altura: " << maximo.getAltura()<< std::endl;
    std::cout << "Peso: " << maximo.getPeso()<< std::endl;
    std::cout << "Edad: " << maximo.getEdad()<< std::endl;
    std::cout << "Inteligencia: " << maximo.getIq()<< std::endl;
    std::cout << "Legion: " << maximo.getLegion()<< std::endl;
    std::cout << "Arma: " << maximo.getArma()<< std::endl;
    std::cout << "Tiempo de servicio: " << maximo.getExperiencia()<< std::endl;
    std::cout << "Soldados a su cargo: " << maximo.getSoldados()<< std::endl;
    std::cout << "Mentalidad: " << maximo.getMentalidad()<< std::endl;
    std::cout << "Trato a sus subordinados: " << maximo.getTrato()<< std::endl;
    std::cout << "Estrategia favorita: " << maximo.getEstrategia()<< std::endl;
    std::cout << "Tactica predilecta: " << maximo.getTactica()<< std::endl;
    std::cout << "Pertenece al patido: " << maximo.getPartido()<< std::endl;
    return 0;
}
