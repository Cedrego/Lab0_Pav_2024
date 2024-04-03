#include "ESTADO.h"
#include <string>

static class Objeto{
    protected:
        string Nombre;
        int AñoComprado;
        ESTADO Estado;
    public:
    static string toString();
};