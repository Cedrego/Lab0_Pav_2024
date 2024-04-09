#include "Objeto.h"

class JuegoMesa : public Objeto{
    private:
        int EdadRecomendada;
        int CantJugadores;
    public:
        JuegoMesa::JuegoMesa();
        JuegoMesa::JuegoMesa(std::string Nom,int AnioComprado,ESTADO Estado,int CantJugadores,int EdadRecomendada);
        JuegoMesa::~JuegoMesa();
        std::string toString();
};