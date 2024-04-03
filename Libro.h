#include "Objeto.h"

class Libro : public Objeto{
    private:
        int CantPaginas;
        string Autor;
    public:
        string toString();
};