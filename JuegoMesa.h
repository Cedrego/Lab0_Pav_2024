#ifndef JUEGOMESA_H
#define JUEGOMESA_H
#include "Objeto.h"

class JuegoMesa : public Objeto{
    private:
        int EdadRecomendada;
        int CantJugadores;
    public:
        JuegoMesa();
        JuegoMesa(std::string Nom,int AnioComprado,ESTADO Estado,int CantJugadores,int EdadRecomendada);
        ~JuegoMesa();
        std::string toString();
};
#endif