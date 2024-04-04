#include "Objeto.h"

class JuegoMesa : public Objeto{
    private:
        int EdadRecomendada;
        int CantJugadores;
    public:
        virtual std::string toString();
};