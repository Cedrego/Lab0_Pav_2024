#include "DTObjetoRoto.h"

DTObjetoRoto::DTObjetoRoto(){};

DTObjetoRoto::DTObjetoRoto(std::string NombreObjetoR, bool PrestadoR, std::string NombreNinioR){
    this->NombreObjeto=NombreObjetoR;
    this->Prestado=PrestadoR;
    this->NombreNinio=NombreNinioR;
}

DTObjetoRoto::~DTObjetoRoto(){};

std::string DTObjetoRoto::getNombreObjeto(){
    return this->NombreObjeto;
};

bool DTObjetoRoto::getPrestado(){
    return this->Prestado;
};

std::string DTObjetoRoto::getNombreNinio(){
    return this->NombreNinio;
};