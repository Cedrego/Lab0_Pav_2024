#include "Objeto.h"

class JuegoMesa : public Objeto{
    private:
        int EdadRecomendada;
        int CantJugadores;
    public:
        JuegoMesa::JuegoMesa();
        JuegoMesa::JuegoMesa(std::string Nom,int AnioComprado,ESTADO Estado,int CantJugadores,int EdadRecomendada);
        JuegoMesa::~JuegoMesa();
        virtual std::string toString(){
            return "Libro: " + Nom + ", " 
            + std::to_string(AnioComprado) + ", " //to_string() != toString()
            + std::to_string(Estado) + ", "       //to_string() es parte de std
            + std::to_string(EdadRecomendada) + ", " 
            + std::to_string(CantJugadores);
        };
};