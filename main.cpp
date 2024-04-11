#include "Ninio.h"
#include "Libro.h"
#include "JuegoMesa.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
 
int main(int argc, char *argv[]){
    char op;
    set<Ninio*> conjuntoN; //conjunto de Niños
    set<Objeto*> conjuntoO; //conjunto de Objetos
    do{
		system("cls");
        std::cout<<"Bienvenido al sistema de la Biblioteca"<<endl;
        std::cout<<"0-Cargar datos de prueba"<<endl;
        std::cout<<"1-Añadir Ninio"<<endl;
        std::cout<<"2-Borrar Ninio"<<endl;
        std::cout<<"3-Añadir Objeto"<<endl;
        std::cout<<"4-Eliminar Objeto"<<endl;
        std::cout<<"5-Prestar Objeto"<<endl;
        std::cout<<"6-Listar Objetos Prestados"<<endl;
        std::cout<<"7-Listar Objetos Rotos"<<endl;
        std::cout<<"8-Finalizar programa"<<endl;
		
		std::cin>>op;
		getchar();
		
        switch(op){
            case '0':{
                //Inserto Libros de prueba
                
                conjuntoO.insert(new Libro("Nacidos de la bruma: El imperio final",2022,static_cast<ESTADO>(2),688,"Brandon Sanderson"));
                conjuntoO.insert(new Libro("Las Malas",2022,static_cast<ESTADO>(0),240,"Camila Sosa Villada"));
                conjuntoO.insert(new Libro("El cocodrilo al que no le gustaba el agua",2016,static_cast<ESTADO>(2),32,"Gemma Merino"));
                /*--------------------*/
                //Inserto Juegos de Mesa de prueba
                conjuntoO.insert(new JuegoMesa("Juego Uno",2022,static_cast<ESTADO>(2),10,7));
                conjuntoO.insert(new JuegoMesa("Mazo de Cartas",2019,static_cast<ESTADO>(0),4,7));
                conjuntoO.insert(new JuegoMesa("Dados",2020,static_cast<ESTADO>(2),6,2));
                /*--------------------*/
                //Inserto Ninios de prueba
                conjuntoN.insert(new Ninio("María Laura",10,"Nueva Palmira 1521","099298190"));
                conjuntoN.insert(new Ninio("Alex",5,"Humberto Primo 1501","29094141"));
                /*--------------------*/
                //Inserto prestamos de prueba
                Ninio *nEncontrado=nullptr;
                Objeto *objetoBuscarA=nullptr;
                Objeto *objetoBuscarB=nullptr;
                Objeto *objetoBuscarC=nullptr;

                for (Ninio *ninio: conjuntoN){
                    if (strcmp(ninio->getNombre().c_str(),"María Laura")==0){
                                nEncontrado=ninio;
                        if (nEncontrado!=nullptr){
                            //busco al niño
                            for (Objeto *obj: conjuntoO){
                                if (strcmp(obj->getNombre().c_str(),"Mazo de Cartas")==0){
                                    objetoBuscarA=obj;
                                }
                                if (strcmp(obj->getNombre().c_str(),"Nacidos de la bruma: El imperio final")==0){
                                    objetoBuscarB=obj;
                                }
                                if (strcmp(obj->getNombre().c_str(),"Dados")==0){
                                    objetoBuscarC=obj;
                                }
                            }
                            if (objetoBuscarA!=nullptr){
                                nEncontrado->prestarObjeto(objetoBuscarA);
                            }
                            if (objetoBuscarB!=nullptr){
                                nEncontrado->prestarObjeto(objetoBuscarB);
                            }
                            if (objetoBuscarC!=nullptr){
                                nEncontrado->prestarObjeto(objetoBuscarC);
                            }
                        }
                        nEncontrado=nullptr;
                        objetoBuscarA=nullptr;
                        objetoBuscarB=nullptr;
                    }
                    if (strcmp(ninio->getNombre().c_str(),"Alex")==0){
                                nEncontrado=ninio;
                        if (nEncontrado!=nullptr){
                            //busco al niño
                            for (Objeto *obj: conjuntoO){
                                if (strcmp(obj->getNombre().c_str(),"Juego Uno")==0){
                                    objetoBuscarA=obj;
                                }
                                if (strcmp(obj->getNombre().c_str(),"El cocodrilo al que no le gustaba el agua")==0){
                                    objetoBuscarB=obj;
                                }
                            }
                            if (objetoBuscarA!=nullptr){
                                nEncontrado->prestarObjeto(objetoBuscarA);
                            }
                            if (objetoBuscarB!=nullptr){
                                nEncontrado->prestarObjeto(objetoBuscarB);
                            }
                        }
                    nEncontrado=nullptr;
                    objetoBuscarA=nullptr;
                    objetoBuscarB=nullptr;
                    }
                }
                break;
            }
            case '1':{
                //limpio la pantalla
                system("cls");
                //creo las variables de niño 
                std::string nombreN;
                std::string edadN;
                std::string direccionN;
                std::string telefonoN;
                
                //pregunto por los datos
                std::cout<<"Ingrese los datos del Ninio:"<<endl;
                std::cout<<"Nombre: ";
                std::cin>>nombreN;
                std::cout<<"Edad: ";
                std::cin>>edadN; 
                std::cout<<"Direccion: ";
                std::cin>>direccionN;
                std::cout<<"Telefono: ";
                std::cin>>telefonoN;
                conjuntoN.insert(new Ninio(nombreN,stoi(edadN), direccionN, telefonoN));
                std::cout<<nombreN<<" ha sido agregado"<<endl;
                std::cout<<"Presione Enter para continuar...";
                getchar();
                break;
            }
            case '2':{
                //limpio la pantalla
                system("cls");

                std::string dedChaild;
                char eliminar;
                Ninio* nEncontrado=nullptr;
                cout<<"Indique el nombre del niño que desea borrar: ";
                cin>>dedChaild;
                
                for (Ninio *ninio : conjuntoN){
                    if (ninio-> getNombre()==dedChaild){
                        nEncontrado=ninio;
                    }
                }
                if (nEncontrado!=nullptr){
                    std::cout<<"Ninio encontrado, seguro que desea eliminarlo?   Y|N:  ";
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
                system("cls");
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
                            std::cout<<"El Libro ha sido agregado al sistema"<<endl;
							std::cout<<"Presione Enter para continuar...";
							getchar();
                            break;
                            } else{
                                std::cout<<"Operacion cancelada"<<endl;
								std::cout<<"Presione Enter para continuar...";
								getchar();
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
                            std::cout<<"El Juego de Mesa ha sido agregado al sistema"<<endl;
							std::cout<<"Presione Enter para continuar...";
							getchar();
                            break;
                            } else{
                                std::cout<<"Operacion cancelada"<<endl;
								std::cout<<"Presione Enter para continuar...";
								getchar();
                                break;
                            }
                        
                    }
                    case '3':{
                        std::cout<<"Operacion cancelada"<<endl;
                        break;
                    }

                }
                break;
            }
            case '4':{
                //limpio la pantalla
                system("cls");
                //creo variables que voy a usar despues
                std::string objetoEliminar;
                std::set<string> objetosNinio;
                Objeto *objetoEncontrado=nullptr;
                char eliminar;

                //pregunto por el nombre
                std::cout<<"Indique el nombre del Objeto que desea eliminar: ";
                std::cin>>objetoEliminar;

                //busco el objeto
                for (Objeto *obj: conjuntoO){
                    if (obj->getNombre()==objetoEliminar){
                        objetoEncontrado=obj;
                    }
                }
                //si lo encuentro, pregunto si quiere eliminarlo
                if (objetoEncontrado!=nullptr){
                    std::cout<<"Objeto encontrado, seguro que desea eliminarlo?   Y|N:  ";
                    std::cin>>eliminar;
                    getchar();
                    //en caso de confirmar, se procede con la operacion
                    if (eliminar=='y'||eliminar=='Y'){
                        conjuntoO.erase(objetoEncontrado);

                        //loop para encontrar si un niño tiene el objeto
                        for (Ninio *niño: conjuntoN){
                            //creo una lista y guardo los contenidos de ListarObjetosPrestados
                            objetosNinio=niño->ListarObjetosPrestados();
                            //recorro la lista de objetos prestados en busca del objeto encontrado
                            auto it = objetosNinio.find(objetoEncontrado->getNombre());
                            //si lo encuentra, lo elimina
                            if (it!=objetosNinio.end()){
                                niño->devolverObjeto(objetoEncontrado);
                            }
                        }
                        std::cout<<"El objeto ha sido eliminado del sistema"<<endl;
                    } else{
                        std::cout<<"Operacion cancelada"<<endl;
                    }
                } else{
                    std::cout<<"El objeto ingresado no existe"<<endl;
                }
                std::cout<<"Presione Enter para continuar...";
                getchar();
                break;
            }
            case '5':{
                //limpio la pantalla
                system("cls");
                std::string objetoPrestar;
                std::string ninioPrestar;
                Ninio *nEncontrado=nullptr;
                Objeto *objetoBuscar=nullptr;
                std::set<string> objetosNinio;
                char confirm;

                std::cout<<"Cual objeto desea prestar?: ";
                std::cin>>objetoPrestar;
				getchar();
                //busco el objeto
                for (Objeto *obj: conjuntoO){
                    if (strcmp(obj->getNombre().c_str(),objetoPrestar.c_str())==0){
                        objetoBuscar=obj;
                        //si encuentro el objeto, busco si un niño lo tiene
                        if (objetoBuscar!=nullptr){
                            //loop para encontrar si un niño tiene el objeto
                            for (Ninio *niño: conjuntoN){
                                //creo una lista y guardo los contenidos de ListarObjetosPrestados
                                objetosNinio=niño->ListarObjetosPrestados();
                                //recorro la lista de objetos prestados en busca del objeto encontrado
                                auto it = objetosNinio.find(objetoBuscar->getNombre());
                                //si lo encuentra, se cancela la operacion
                                if (it!=objetosNinio.end()){
                                    std::cout<<"Objeto ya prestado a "<<niño->getNombre()<<", operacion interrumpida"<<endl;
                                    std::cout<<"Presione Enter para continuar...";
                                    getchar();
                                    break;
                                }
                            }
                            //si el loop no encuentra que el objeto haya sido prestado, continua
                            std::cout<<"A quien desea prestarselo?: ";
                            std::cin>>ninioPrestar;

                            //busco al niño
                            for (Ninio *ninio: conjuntoN){
                                if (ninio-> getNombre()==ninioPrestar){
                                nEncontrado=ninio;
                                }
                            }
                            //si el niño existe, confirmo que quiera prestarle el objeto
                            if (nEncontrado!=nullptr){
                            std::cout<<"Ninio encontrado, seguro que desea prestar el Objeto?   Y|N:  ";
                            std::cin>>confirm;
                            getchar();
                            if (confirm=='y'||confirm=='Y'){
                                //se agrega el objeto a la lista de objetos prestados del niño
                                nEncontrado->prestarObjeto(objetoBuscar);
                                std::cout<<"Se le ha prestado el objeto al niño"<<endl;
                            } else{
                                std::cout<<"Operacion cancelada"<<endl;
                            }
                            } else{
                                //si el niño no existe
                                std::cout<<"El niño ingresado no existe"<<endl;
                            }
                        }
                    }
                }
                
                std::cout<<"Presione Enter para continuar...";
                getchar();
                break;
            }
            case '6':{
                std::string ninioD;
                Ninio *nEncontrado=nullptr;
                std::set<string> objetosNinio;
                // Limpio la pantalla
                system("cls");
                // --------------------- //
                std::cout<<"Ingrese nombre del niño dueño de los objetos a mostrar: ";
                std::cin>>ninioD;
                //busco al niño
                for (Ninio *ninio: conjuntoN){
                    if ( ninio->getNombre() == ninioD){
                        nEncontrado=ninio;
                    }
                }
                //si el niño existe, confirmo que quiera prestarle el objeto
                if (nEncontrado!=nullptr){
                    objetosNinio = nEncontrado->ListarObjetosPrestados();
                    cout<<"Objetos prestados a "<<nEncontrado->getNombre()<<": "<<endl;
                    for (auto it=objetosNinio.begin(); it != objetosNinio.end(); ++it){
                            cout <<endl<< *it;
                        }
                } else{
                    //si el niño no existe
                    std::cout<<"El niño ingresado no existe"<<endl;
                }
                std::cout<<"Presione Enter para continuar...";
                getchar();
                break;
            }
            case '7':{
                break;
            }
        };
    }while(op!='8');
    return 0;
}
