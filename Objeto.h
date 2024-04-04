#include "ESTADO.h"
#include <iostream>
#include <string>
using namespace std;

class Objeto{
    private:
        std::string Nom;
        int AnioComprado;
        ESTADO Estado; //enum definido en ESTADO.h
    public: 
        Objeto::Objeto(); //constructor sin parametros
        Objeto::Objeto(std::string Nom, int AnioComprado, ESTADO Estado); //constructor con parametros
        Objeto::~Objeto();
        virtual std::string toString();
};