#include "Objeto.h"

class JuegoMesa : public Objeto{
    private:
        int EdadRecomendada;
        int CantJugadores;
    public:
        std::string toString();
};