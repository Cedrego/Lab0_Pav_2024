#ifndef OBJETO_H
#define OBJETO_H
#include "ESTADO.h"
#include <iostream>
#include <string>
using namespace std;

class Objeto{
    protected:
        std::string Nom;
        int AnioComprado;
        ESTADO Estado; //enum definido en ESTADO.h
    public: 
        Objeto(); //constructor sin parametros
        Objeto(std::string NomO, int AnioCompradoO, ESTADO EstadoO); //constructor con parametros
        virtual ~Objeto();
        virtual std::string toString() const=0;
        std::string getNombre();
        ESTADO getEstado();
};

#endif
