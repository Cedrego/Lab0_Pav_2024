#include "DTObjetoRoto.h"

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

// Sobrecarga del operador de inserción de flujo
std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& obj) {
    os << obj.NombreObjeto << ", Prestado " << (obj.Prestado ? "SI" : "NO");
    if (obj.Prestado) {
        os << ", " << obj.NombreNinio;
    }
    return os;
};