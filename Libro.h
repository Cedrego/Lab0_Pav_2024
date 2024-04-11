#ifndef LIBRO_H
#define LIBRO_H
#include "Objeto.h"

class Libro : public Objeto{
    private:
        int CantPaginas;
        std::string Autor;
    public:
        Libro();
        ~Libro();
        Libro(std::string Nom,int AnioComprado,ESTADO Estado,int CantPaginas,std::string Autor);
        std::string toString();  
};
#endif