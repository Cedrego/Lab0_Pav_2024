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
        Objeto(std::string Nom, int AnioComprado, ESTADO Estado); //constructor con parametros
        ~Objeto();
        virtual std::string toString();
        std::string getNombre();
};

#endif