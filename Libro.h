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
        Libro(std::string NomO,int AnioCompradoO,ESTADO EstadoO,int CantPaginasO,std::string AutorO);
        std::string toString() const;
};
#endif
