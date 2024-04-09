#include "Libro.h"
#include <iostream>
using namespace std;

Libro::Libro(){};
Libro::Libro(std::string Nom,int AnioComprado,ESTADO Estado,int CantPaginas,std::string Autor){
    Objeto(Nom,AnioComprado,Estado);
    this->CantPaginas=CantPaginas;
    this->Autor=Autor;
};
Libro::~Libro(){};
string toString(){
        return "Libro: " + this->Nom + ", " 
        + std::to_string(this->AnioComprado) + ", " //to_string() != toString()
        + std::to_string(this->Estado) + ", "       //to_string() es parte de std
        + this->Autor + ", " 
        + std::to_string(this->CantPaginas);
};