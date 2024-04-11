#ifndef JUEGOMESA_H
#define JUEGOMESA_H
#include "Objeto.h"

class JuegoMesa : public Objeto{
    private:
        int EdadRecomendada;
        int CantJugadores;
    public:
        JuegoMesa();
        JuegoMesa(std::string NomO,int AnioCompradoO,ESTADO EstadoO,int CantJugadoresO,int EdadRecomendadaO);
        ~JuegoMesa();
        std::string toString() const;
};
#endif
