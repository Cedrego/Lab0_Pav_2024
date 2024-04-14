#include "Ninio.h"
#include "Libro.h"
#include "JuegoMesa.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "DTObjetoRoto.h"
using namespace std;
 
int main(int argc, char *argv[]){
    char op;
    set<Ninio*> conjuntoN; //conjunto de Ninios
    set<Objeto*> conjuntoO; //conjunto de Objetos
    do{
		system("cls");
        std::cout<<"Bienvenido al sistema de la Biblioteca"<<endl;
        std::cout<<"0-Cargar datos de prueba"<<endl;
        std::cout<<"1-Aniadir Ninio"<<endl;
        std::cout<<"2-Borrar Ninio"<<endl;
        std::cout<<"3-Aniadir Objeto"<<endl;
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
                conjuntoN.insert(new Ninio("Maria Laura",10,"Nueva Palmira 1521","099298190"));
                conjuntoN.insert(new Ninio("Alex",5,"Humberto Primo 1501","29094141"));
                /*--------------------*/
                //Inserto prestamos de prueba
                Ninio *nEncontrado=nullptr;
                Objeto *objetoBuscarA=nullptr;
                Objeto *objetoBuscarB=nullptr;
                Objeto *objetoBuscarC=nullptr;

                for (Ninio *ninio: conjuntoN){
                    if (strcmp(ninio->getNombre().c_str(),"Maria Laura")==0){
                                nEncontrado=ninio;
                        if (nEncontrado!=nullptr){
                            //busco al ninio
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
                            //busco al ninio
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
                //creo las variables de ninio 
                std::string nombreN;
                std::string edadN;
                std::string direccionN;
                std::string telefonoN;
                
                //pregunto por los datos
                std::cout<<"Ingrese los datos del Ninio:"<<endl;
                std::cout<<"Nombre: ";
                std::getline(std::cin,nombreN);
                std::cout<<"Edad: ";
                std::getline(std::cin,edadN);
                std::cout<<"Direccion: ";
                std::getline(std::cin,direccionN);
                std::cout<<"Telefono: ";
                std::getline(std::cin,telefonoN);
                conjuntoN.insert(new Ninio(nombreN,stoi(edadN), direccionN, telefonoN));
                std::cout<<nombreN<<" ha sido agregado"<<endl;
                std::cout<<"Presione Enter para continuar...";
                getchar();
                getchar();
                break;
            }
            case '2':{
                //limpio la pantalla
                system("cls");

                std::string dedChaild;
                char eliminar;
                Ninio* nEncontrado=nullptr;
                std::set<Objeto*> objetosNinio;
                cout<<"Indique el nombre del ninio que desea borrar: ";
                std::getline(cin,dedChaild);
                
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
                        //busco si el ninio tiene algún objeto prestado
                        objetosNinio = nEncontrado->getObjetosPrestados();
                        for (auto it=objetosNinio.begin(); it != objetosNinio.end(); ++it){
                                //si encuentro alguno, lo vuelvo a insertar en el conjunto de objetos
                                conjuntoO.insert(*it);
                        }
                        conjuntoN.erase(nEncontrado);
                        delete nEncontrado;
                        std::cout<<"El ninio ha sido eliminado del sistema"<<endl;
                    } else{
                        std::cout<<"Operacion cancelada"<<endl;
                    }
                } else{
                    std::cout<<"El ninio ingresado no existe"<<endl;
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
                        std::getline(std::cin,nomL);
                        std::cout<<"Anio comprado: ";
                        std::getline(std::cin,anioCompradoL);
                        std::cout<<"Estado (0-Nuevo, 1-Bien Conservado, 2-Roto): ";
                        std::cin>>Estado;
                        estadoL = static_cast<ESTADO>(Estado);  
                        std::cout<<"Cantidad de paginas:";
                        std::cin>>cantPaginasL;
                        std::cout<<"Autor: ";
                        std::getline(std::cin,autorL);
                        
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
                        std::getline(std::cin,nomJM);
                        std::cout<<"Anio comprado: ";
                        std::getline(std::cin,anioCompradoJM);
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
                Ninio *duenio;
                Objeto *objetoEncontrado=nullptr;
                bool objetoPrestado=false;
                char eliminar;

                //pregunto por el nombre
                std::cout<<"Indique el nombre del Objeto que desea eliminar: ";
                std::getline(std::cin,objetoEliminar);

                //busco el objeto en el conjuntoO
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
                        std::cout<<"El objeto ha sido eliminado del sistema"<<endl;
                    } else{
                        std::cout<<"Operacion cancelada"<<endl;
                    }
                } else{
                    //si no lo encuentro en el conjuntoO, pruebo en conjuntoN
                    //loop para encontrar si un ninio tiene el objeto
                        for (Ninio *ninio: conjuntoN){
                            //creo una lista y guardo los contenidos de ListarObjetosPrestados
                            objetosNinio=ninio->ListarObjetosPrestados();
                            for (Objeto *obj: ninio->getObjetosPrestados()){
                                //comparo el nombre del objeto actual contra el que quiero eliminar
                                //si coincide, guardo la localización de ninio y objeto
                                if (obj->getNombre()==objetoEliminar){
                                    objetoEncontrado=obj;
                                    duenio=ninio;
                                    objetoPrestado=true;
                                }
                            }
                        } 
                        //objetoPrestado=true ==> objeto fue encontrado
                        if(objetoPrestado){
                            //confirmo si quiere eliminarlo
                            std::cout<<"Objeto encontrado, seguro que desea eliminarlo?   Y|N:  ";
                            std::cin>>eliminar;
                            if (eliminar=='y'||eliminar=='Y'){
                                duenio->devolverObjeto(objetoEncontrado);
                                std::cout<<"El objeto ha sido eliminado del sistema"<<endl;
                                } else{
                                    std::cout<<"Operacion cancelada"<<endl;
                                }
                        } else{
                            std::cout<<"El objeto no existe"<<endl;
                        }
                }  
                std::cout<<"Presione Enter para continuar...";
                getchar();
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
                std::getline(std::cin,objetoPrestar);
				getchar();
                //busco el objeto
                for (Objeto *obj: conjuntoO){
                    if (strcmp(obj->getNombre().c_str(),objetoPrestar.c_str())==0){
                        objetoBuscar=obj;
                        //si encuentro el objeto
                        if (objetoBuscar!=nullptr){
                            std::cout<<"A quien desea prestarselo?: ";
                            std::getline(std::cin,ninioPrestar);

                            //busco al ninio
                            for (Ninio *ninio: conjuntoN){
                                if (ninio-> getNombre()==ninioPrestar){
                                nEncontrado=ninio;
                                }
                            }
                            //si el ninio existe, confirmo que quiera prestarle el objeto
                            if (nEncontrado!=nullptr){
                            std::cout<<"Ninio encontrado, seguro que desea prestar el Objeto?   Y|N:  ";
                            std::cin>>confirm;
                            getchar();
                            if (confirm=='y'||confirm=='Y'){
                                //se agrega el objeto a la lista de objetos prestados del ninio
                                //y se elimina del conjunto principal para evitar que se pueda volver a prestar
                                nEncontrado->prestarObjeto(objetoBuscar);
                                conjuntoO.erase(objetoBuscar); 
                                std::cout<<"Se le ha prestado el objeto al ninio"<<endl;
                            } else{
                                std::cout<<"Operacion cancelada"<<endl;
                            }
                            } else{
                                //si el ninio no existe
                                std::cout<<"El ninio ingresado no existe"<<endl;
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
                std::cout<<"Ingrese nombre del ninio duenio de los objetos a mostrar: ";
                std::getline(std::cin,ninioD);
                //busco al ninio
                for (Ninio *ninio: conjuntoN){
                    if ( ninio->getNombre() == ninioD){
                        nEncontrado=ninio;
                    }
                }
                //si el ninio existe, itero sobre los objetos del ninio
                if (nEncontrado!=nullptr){
                    objetosNinio = nEncontrado->ListarObjetosPrestados();
                    cout<<"Objetos prestados a "<<nEncontrado->getNombre()<<": "<<endl;
                    for (auto it=objetosNinio.begin(); it != objetosNinio.end(); ++it){
                            cout <<endl<< *it;
                        }
                } else{
                    //si el ninio no existe
                    std::cout<<"El ninio ingresado no existe"<<endl;
                }
                std::cout<<"\nPresione Enter para continuar...";
                getchar();
                break;
            }
            case '7':{
                // Limpio la pantalla
                system("cls");
                set<Objeto*> objetosNinio;
                set<DTObjetoRoto*> objetosRotos;
                
                //busco objetos rotos en conjuntoO
                for (Objeto *obj:conjuntoO){
                    if(obj->getEstado()==Roto){
                        //por la forma en la que esta hecha el programa, si un objeto se encuentra
                        //en conjuntoO, entonces no esta siendo prestado y por lo tanto se registra de esta manera
                        objetosRotos.insert(new DTObjetoRoto(obj->getNombre(), false, "     " ));
                    }
                }
                //busco objetos rotos prestados
                for(Ninio *child:conjuntoN){
                    objetosNinio=child->getObjetosPrestados();
                    for (Objeto *objeto:objetosNinio){
                            if(objeto->getEstado()==Roto){
                               objetosRotos.insert(new DTObjetoRoto(objeto->getNombre(), true, child->getNombre())); 
                            }
                        }
                }
                //si no hay ningun objeto roto
                if (objetosRotos.empty()){
                    std::cout<<"No hay objetos rotos"<<endl;
                } else{
                    //de lo contrario, los listo
                    std::cout<<"Los objetos rotos son: "<<endl;
                    for(DTObjetoRoto *rotos:objetosRotos){
                        std::cout<<*rotos<<endl;
                    }
                }
                std::cout<<"Presione Enter para continuar...";
                getchar();
                break;
            }
        };
    }while(op!='8');
    return 0;
}
