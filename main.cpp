#include <iostream>
#include "Niño.h"
#include "Objeto.h"
#include "Libro.h"
#include "JuegoMesa.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 
int main(int argc, char *argv[]){
    char op;
    set<Niño*> conjuntoN; //conjunto de Niños
    set<Objeto*> conjuntoO; //conjunto de Objetos
    do{
        std::cout<<"Bienvenido al sistema de la Biblioteca"<<endl;
        std::cout<<"1-Añadir Niño"<<endl;
        std::cout<<"2-Borrar Niño"<<endl;
        std::cout<<"3-Añadir Objeto"<<endl;
        std::cout<<"4-Eliminar Objeto"<<endl;
        std::cout<<"5-Prestar Objeto"<<endl;
        std::cout<<"6-Listar Objetos Prestados"<<endl;
        std::cout<<"7-Listar Objetos Rotos"<<endl;
        std::cout<<"8-Finalizar programa"<<endl;

        switch(op){
            case '1':{
                //limpio la pantalla
                system("CLS");
                //creo las variables de niño 
                std::string nombreN;
                std::string edadN;
                std::string direccionN;
                std::string telefonoN;
                
                //pregunto por los datos
                std::cout<<"Ingrese los datos del Niño:"<<endl;
                std::cout<<"Nombre: ";
                std::cin>>nombreN;
                std::cout<<"Edad: ";
                std::cin>>edadN; 
                std::cout<<"Direccion: ";
                std::cin>>direccionN;
                std::cout<<"Telefono: ";
                std::cin>>telefonoN;
                conjuntoN.insert(new Niño(nombreN,stoi(edadN), direccionN, telefonoN));
                std::cout<<nombreN<<" ha sido agregado"<<endl;
                std::cout<<"Presione Enter para continuar...";
                getchar();
                break;
            }
            case '2':{
                //limpio la pantalla
                system("CLS");

                std::string dedChaild;
                char eliminar;
                Niño* nEncontrado=nullptr;
                cout<<"Indique el nombre del niño que desea borrar: ";
                cin>>dedChaild;
                
                for (Niño *ninio: conjuntoN){
                    if (ninio-> getNombre()==dedChaild){
                        nEncontrado=ninio;
                    }
                }
                if (nEncontrado!=nullptr){
                    std::cout<<"Niño encontrado, seguro que desea eliminarlo?   Y|N:  ";
                    std::cin>>eliminar;
                    getchar();
                    if (eliminar=='y'||eliminar=='Y'){
                        conjuntoN.erase(nEncontrado);
                        delete nEncontrado;
                        std::cout<<"El niño ha sido eliminado del sistema"<<endl;
                    } else{
                        std::cout<<"Operacion cancelada"<<endl;
                    }
                } else{
                    std::cout<<"El niño ingresado no existe"<<endl;
                }
                std::cout<<"Presione Enter para continuar...";
                getchar();
                break;
            }

            case '3':{
                //limpio la pantalla
                system("CLS");
                char tipo;
                std::cout<<"Que tipo de objeto desea ingresar?:\n 1- Libro\n 2-Juego de mesa\n 3-Cancelar"<<endl;
                cin>>tipo;
                switch(tipo){
                    case '1':{
                        //Creo variables
                        std::string nomL;
                        std::string anioCompradoL;
                        ESTADO estadoL;
                        int Estado;
                        int cantPaginasL;
                        std::string autorL;
                        char confirmacion;

                        //pido datos
                        std::cout<<"Ingrese los datos del Libro: "<<endl;
                        std::cout<<"Nombre: ";
                        std::cin>>nomL;
                        std::cout<<"Año comprado: ";
                        std::cin>>anioCompradoL;
                        std::cout<<"Estado (0-Nuevo, 1-Bien Conservado, 2-Roto): ";
                        std::cin>>Estado;
                        estadoL = static_cast<ESTADO>(Estado);  
                        std::cout<<"Cantidad de paginas:";
                        std::cin>>cantPaginasL;
                        std::cout<<"Autor: ";
                        std::cin>>autorL;
                        
                        std::cout<<"Seguro que desea ingresar este Libro?   Y|N:  ";
                        std::cin>>confirmacion;
                        getchar();
                        if (confirmacion=='y'||confirmacion=='Y'){
                            //creo una instancia y la inserto en el conjunto
                            Libro *libroNuevo = new Libro(nomL,stoi(anioCompradoL), estadoL, cantPaginasL, autorL);
                            conjuntoO.insert(libroNuevo);
                            std::cout<<"El Libro ha sido agregado al sistema";
                            break;
                            } else{
                                std::cout<<"Operacion cancelada"<<endl;
                                break;
                            }
                       
                    }
                    case '2':{
                        //Creo variables
                        std::string nomJM;
                        std::string anioCompradoJM;
                        ESTADO estadoJM;
                        int Estado;
                        int cantJugadoresJM;
                        int edadRecomendadaJM;
                        char confirmacion;

                        //pido datos
                        std::cout<<"Ingrese los datos del Juego de Mesa: "<<endl;
                        std::cout<<"Nombre: ";
                        std::cin>>nomJM;
                        std::cout<<"Año comprado: ";
                        std::cin>>anioCompradoJM;
                        std::cout<<"Estado (0-Nuevo, 1-Bien Conservado, 2-Roto): ";
                        std::cin>>Estado;
                        estadoJM = static_cast<ESTADO>(Estado);  
                        std::cout<<"Cantidad de jugadores:";
                        std::cin>>cantJugadoresJM;
                        std::cout<<"Edad recomendada: ";
                        std::cin>>edadRecomendadaJM;
                        
                        std::cout<<"Seguro que desea ingresar este Juego de Mesa?   Y|N:  ";
                        std::cin>>confirmacion;
                        getchar();
                        if (confirmacion=='y'||confirmacion=='Y'){
                            //creo una instancia y la inserto en el conjunto
                            JuegoMesa *juegoMesaNuevo = new JuegoMesa(nomJM,stoi(anioCompradoJM), estadoJM, cantJugadoresJM, edadRecomendadaJM);
                            conjuntoO.insert(juegoMesaNuevo);
                            std::cout<<"El Juego de Mesa ha sido agregado al sistema";
                            break;
                            } else{
                                std::cout<<"Operacion cancelada"<<endl;
                                break;
                            }
                        
                    }
                    case '3':{
                        std::cout<<"Operacion cancelada"<<endl;
                        break;
                    }

                }
                std::cout<<"Presione Enter para continuar...";
                getchar();
                break;
            }
        
            case '4':{
                //limpio la pantalla
                system("CLS");
                break;
            }
            case '5':{
                break;
            }
            case '6':{
                break;
            }
            case '7':{
                break;
            }
        };
    }while(op!='8');
    return 0;
}