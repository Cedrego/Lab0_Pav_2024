
using namespace std;
#include "Libro.h"
#include <iostream>
Libro::Libro(){};
Libro::Libro(std::string Nom,int AnioComprado,ESTADO Estado,int CantPaginas,std::string Autor){
    this->Nombre=Nom;
    this->AnioComprado=AnioComprado;
    this->Estado=Estado;
    this->CantPaginas=CantPaginas;
    this->Autor=Autor;
};
Libro::~Libro(){};
std::string toString(){
    return "Libro: " + this->Nombre + ", "+ (this->AnioComprado)+ ", " +(this->Estado)+ ", "+ this->Autor +", "+(this->CantPaginas);
};