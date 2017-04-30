/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sistema.cpp
 * Author: jose ocampo
 * 
 * Created on 21 de abril de 2017, 08:27 PM
 */

#include "sistema.h"

sistema::sistema() {
    this->_interfaz = new interfaz();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<_interfaz->desplegarMensajeBienvenida()<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    this->_universidad = new universidad(_interfaz->solicitarNombreUniversidad());
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void sistema::iniciarSistema(){
    
    system("cmd /c cls");
    int opcionSalir = 0;
    cout<<_interfaz->desplegarMensajeBienvenida()<<endl<<endl;
    do{
                
    int opcion = _interfaz->desplegarMenuPrincipal();
    switch(opcion){
        case 1:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
            system("cmd /c cls"); 
            _universidad->colocarDireccion(_interfaz->solicitarDireccionUniversidad());
            _universidad->colocarTelefono(_interfaz->solicitarTelefonoUniversidad());
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        }break;
        case 2:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
            system("cmd /c cls"); 
            _universidad->colocarDireccion(_interfaz->solicitarDireccionUniversidad());
            _universidad->colocarTelefono(_interfaz->solicitarTelefonoUniversidad());
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        }break;
        case 3:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
            system("cmd /c cls");
////            escuela *escuelaAuxiliar = new escuela( _interfaz->solicitarNombreEscuela() );
            
            _universidad->asignarEscuelas(_interfaz->solicitarNombreEscuela());
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        }break;
        case 4:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls"); 
            cout<<_universidad->verEscuelas()<<endl<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
            
            
        }break;
        case 5:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            string nombreEscuela; 
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA A LA QUE DESEA AGREGAR EL CURSO: ";
            cin>>nombreEscuela;
//            escuela *escuelaAuxiliar =_universidad->obtenerEscuela(nombreEscuela);
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            if(escuelaAuxiliar){
                
            cout<<"LA ESCUELA BUSCADA ES: "<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            curso *cursoAuxiliar = new curso(_interfaz->solicitarSiglaCurso());
//            cursoAuxiliar->asignarNombre(_interfaz->solicitarNombreCurso());
            escuelaAuxiliar->asignarCurso(_interfaz->solicitarSiglaCurso(),_interfaz->solicitarNombreCurso());
            
            }else{
                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");

        }break;
        case 6:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            string nombreEscuela;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA DE LA QUE DESEA VER LOS CURSOS: ";
            cin>>nombreEscuela;
             objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            if(escuelaAuxiliar){
            
            cout<<escuelaAuxiliar->verCursos()<<endl;
            
            }else{
                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        }break;
        case 7:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls"); 
            cout<<_universidad->verEscuelasConCursos()<<endl<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        }break;
        case 8:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls"); 
            string nombreEscuela;
            string siglaCurso;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA RECUPERAR CURSO: ";
            cin>>nombreEscuela;
            
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            if(escuelaAuxiliar){
            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            cout<<escuelaAuxiliar->verCursosSinDetalles()<<endl;

            cout<<"INGRESE LA SIGLA DEL CURSO A RECUPERAR: ";
            cin>>siglaCurso;
            objeto *objetoCurso = escuelaAuxiliar->obtenerCurso(siglaCurso);
            curso *cursoAuxiliar = (curso*)objetoCurso;
            if(cursoAuxiliar){
                cout<<cursoAuxiliar->toString()<<endl;
                cout<<"ESTE CURSO PERTENECE A LA ESCUELA DE: "<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            }else{
                 cout<<"EL CURSO QUE BUSCA NO EXISTE"<<endl;
            }

            }else{
                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }
            
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        }break;
        case 9:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            

            string nombreEscuela;
            string siglaCurso,nuevoNombreCurso;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA MODIFICAR UN CURSO: ";
            cin>>nombreEscuela;
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            
            if(escuelaAuxiliar){
            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            cout<<escuelaAuxiliar->verCursosSinDetalles()<<endl;

            cout<<"INGRESE LA SIGLA DEL CURSO A MODIFICAR: ";
            cin>>siglaCurso;
            objeto *objetoCurso = escuelaAuxiliar->obtenerCurso(siglaCurso);
            curso *cursoAuxiliar = (curso*)objetoCurso;
            if(cursoAuxiliar){
                cout<<"EL CURSO A MODIFICAR ES:\n"<<cursoAuxiliar->toString();
                cout<<"\n\nINGRESE EL NUEVO NOMBRE NOMBRE PARA EL CURSO: ";
                cin>>nuevoNombreCurso;
                cursoAuxiliar->asignarNombre(nuevoNombreCurso);
                cout<<"CURSO MODIFICADO:\n "<<cursoAuxiliar->toString()<<endl<<endl;
            }else{
                 cout<<"EL CURSO QUE BUSCA NO EXISTE"<<endl;
            }
            
   
            }else{
                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }
           
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        }break;
        case 10:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
           
            string nombreEscuela;
            string siglaCurso;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA ELIMINAR UN CURSO: ";
            cin>>nombreEscuela;
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            
            if(escuelaAuxiliar){
              cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            cout<<escuelaAuxiliar->verCursosSinDetalles()<<endl;
            
        
            cout<<"INGRESE LA SIGLA DEL CURSO A ELIMINAR: ";
            cin>>siglaCurso;
            objeto *objetoCurso =  escuelaAuxiliar->obtenerCurso(siglaCurso);
            curso *cursoAuxiliar = (curso*)objetoCurso;
            if(cursoAuxiliar){
                cout<<"EL CURSO A ELIMINAR ES:\n"<<cursoAuxiliar->toString();
                escuelaAuxiliar->eliminarCurso(cursoAuxiliar);
            }else{
                 cout<<"EL CURSO QUE BUSCA NO EXISTE"<<endl;
            }
            
   
            }else{
                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }
            
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        }break;
        
        default:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            system("cmd /c cls"); 
            cout<<"\n\n"<<"         Ã‚Â¿DESEA SALIR DEL SISTEMA?: "<<endl;
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            cout<<"         DIGITE  1) PARA SALIR"<<endl;
            cout<<"         DIGITE  2) PARA  NO SALIR"<<endl;
            cin>>opcionSalir;
           
            
            
            
            
        }break;
        
    }    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
         system("cmd /c cls"); 
         if(opcionSalir == 1){cout<<"\n\n"<<"         Â¡Â¡ GRACIAS POR USAR NUESTRO SISTEMA DE MATRICULA !!"<<endl<<endl;}
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    }while(opcionSalir != 1);
    
    

}

sistema::~sistema() {
    delete _universidad;
    delete _interfaz;
}

