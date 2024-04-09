using namespace std;
#include "Libro.h"
#include <iostream>
Libro::Libro(){};
Libro::Libro(std::string Nom,int AnioComprado,ESTADO Estado,int CantPaginas,std::string Autor){
    Objeto(Nom,AnioComprado,Estado);
    this->CantPaginas=CantPaginas;
    this->Autor=Autor;
};
Libro::~Libro(){};

std::string Libro::toString(){
    return "Libro: " + Nom + ", " 
    + std::to_string(AnioComprado) + ", " //to_string() != toString()
    + std::to_string(Estado) + ", "       //to_string() es parte de std
    + Autor + ", " 
    + std::to_string(CantPaginas);
    }; 