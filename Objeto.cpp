#include "Objeto.h"

Objeto::Objeto(){};
Objeto::Objeto(std::string NomO, int AnioCompradoO, ESTADO EstadoO){
    this->Nom=NomO;
    this->AnioComprado=AnioCompradoO; 
    this->Estado=EstadoO;
};

std::string Objeto::getNombre(){
    return Nom;
};

Objeto::~Objeto(){};

