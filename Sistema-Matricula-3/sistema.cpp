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
    
//    this->_matricula = new matricula();
    this->_interfazSistema = new interfazSistema();
    this->_interfazUniversidad = new interfazUniversidad();
    this->_interfazEscuela = new interfazEscuela();
    this->_interfazCurso = new interfazCurso();
    this->_interfazProfesor = new interfazProfesor();
    this->_universidad = new universidad(((interfazUniversidad*)_interfazUniversidad)->solicitarNombre());
    
    
}
sistema::~sistema() {
//    delete _matricula;
    delete _universidad;
    delete _interfazSistema;
    delete _interfazUniversidad;
    delete _interfazEscuela;
    delete _interfazCurso;
    delete _interfazProfesor;
    
}


void sistema::menuUniversidad(){
    //casteamos las interfaces para acceder a los metodos de cada una en especifico
    interfazUniversidad *interfazU =    (interfazUniversidad*)_interfazUniversidad;
    interfazEscuela *interfazE =    (interfazEscuela*)_interfazEscuela;
    
    int opcionSalir = 0;
    do{
        int opcion = interfazU->desplegarMenu();
    switch(opcion){
        case 1:{
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
            system("cmd /c cls"); 
            _universidad->colocarDireccion( interfazU->solicitarDireccionUniversidad());
            _universidad->colocarTelefono(interfazU->solicitarTelefonoUniversidad());
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
        }break;
        case 2:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
            system("cmd /c cls");
            _universidad->colocarDireccion( interfazU->solicitarDireccionUniversidad());
            _universidad->colocarTelefono(interfazU->solicitarTelefonoUniversidad());
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
        }break;
        case 3:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
            system("cmd /c cls");
            _universidad->asignarEscuelas( interfazE->solicitarNombre());
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
        default :{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            system("cmd /c cls"); 
            cout<<"\n\n"<<"         ¿DESEA REGRESAR AL MENU PRINCIPAL?: "<<endl;
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            cout<<"         DIGITE  1) PARA SALIR"<<endl;
            cout<<"         DIGITE  2) PARA  NO SALIR"<<endl;
            cin>>opcionSalir;
           
        } 
        break;
        
        
    }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
         system("cmd /c cls"); 
         if(opcionSalir == 1){cout<<"\n\n"<<"         ¡¡ REGRESANDO A MENU PRINCIPAL !!"<<endl<<endl;}
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    }while(opcionSalir != 1);
    
}
void sistema::menuEscuela(){
    //casteamos las interfaces para acceder a los metodos de cada una en especifico
    interfazCurso *interfazCur =    (interfazCurso*)_interfazCurso;
    interfazEscuela *interfazEscu =    (interfazEscuela*)_interfazEscuela;
    
    int opcionSalir = 0;
    do{
        int opcion = interfazEscu->desplegarMenu();
    switch(opcion){
        case 1:{
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            string nombreEscuela; 
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA A LA QUE DESEA AGREGAR EL CURSO: ";
            cin>>nombreEscuela;

            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            if(escuelaAuxiliar){
                
            cout<<"LA ESCUELA BUSCADA ES: "<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            
            

            escuelaAuxiliar->asignarCurso(interfazCur->solicitarSiglaCurso(),interfazCur->solicitarNombre(),interfazCur->solicitarCreditosCurso());
            
            }else{
                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");

        }break;
        case 2:{
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
        case 3:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls"); 
            cout<<_universidad->verEscuelasConCursos()<<endl<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
        
        }break;
        case 4:{
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
         case 5:{
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
         case 6:{
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
        default :{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            system("cmd /c cls"); 
            cout<<"\n\n"<<"         ¿DESEA REGRESAR AL MENU PRINCIPAL?: "<<endl;
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            cout<<"         DIGITE  1) PARA SALIR"<<endl;
            cout<<"         DIGITE  2) PARA  NO SALIR"<<endl;
            cin>>opcionSalir;
           
        } 
        break;
        
        
    }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
         system("cmd /c cls"); 
         if(opcionSalir == 1){cout<<"\n\n"<<"         ¡¡ REGRESANDO A MENU PRINCIPAL !!"<<endl<<endl;}
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    }while(opcionSalir != 1);
    
}
void sistema::menuCurso(){
       //casteamos las interfaces para acceder a los metodos de cada una en especifico
    interfazProfesor *interfaZProfe =    (interfazProfesor*)_interfazProfesor;
    interfazCurso *interfazCur = (interfazCurso*)_interfazCurso;
    
    
    int opcionSalir = 0;
    do{
        int opcion = interfazCur->desplegarMenu();
    switch(opcion){
        case 1:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            string nombreEscuela; 
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA A LA QUE DESEA AGREGAR EL PROFESOR: ";
            cin>>nombreEscuela;
            
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            if(escuelaAuxiliar){
                
            cout<<"LA ESCUELA BUSCADA ES: "<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;

            escuelaAuxiliar->asignarProfesor(interfaZProfe->solicitarNombre(),interfaZProfe->solicitarIdProfesor());
            
            }else{
                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        }break;
        case 2:{
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            

            string nombreEscuela, idProfe,nuevoNombre;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA MODIFICAR EL NOMBRE DE UN PROFESOR: ";
            cin>>nombreEscuela;
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            
            if(escuelaAuxiliar){
            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            cout<<escuelaAuxiliar->verProfesores()<<endl;

            cout<<"INGRESE EL ID DEL PROFESOR A MODIFICAR: ";
            cin>>idProfe;
            
            objeto *objetoProfe = escuelaAuxiliar->buscarProfesorPorCedula(idProfe);
            profesor *profesorAuxiliar = (profesor*)objetoProfe;
            if(profesorAuxiliar){
                cout<<"EL PROFESOR A MODIFICAR ES:\n"<<profesorAuxiliar->toString();
                cout<<"\n\nINGRESE EL NUEVO NOMBRE NOMBRE PARA EL PROFESOR: ";
                cin>>nuevoNombre;
                profesorAuxiliar->asignarNombre(nuevoNombre);
                cout<<"PROFESOR MODIFICADO:\n "<<profesorAuxiliar->toString()<<endl<<endl;
            }else{
                 cout<<"EL PROFESOR QUE BUSCA NO EXISTE"<<endl;
            }
            
   
            }else{
                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }
           
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
          
        }break;
        case 3:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            

            string nombreEscuela, idProfe,nuevoNombre;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA BUSCAR EL PROFESOR: ";
            cin>>nombreEscuela;
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            
            if(escuelaAuxiliar){
            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;

            cout<<"INGRESE EL ID DEL PROFESOR: ";
            cin>>idProfe;
            objeto *objetoCurso = escuelaAuxiliar->buscarProfesorPorCedula(idProfe);
            profesor *profesorAuxiliar = (profesor*)objetoCurso;
            if(profesorAuxiliar){
                cout<<profesorAuxiliar->toString();
            }else{
                 cout<<"EL PROFESOR QUE BUSCA NO EXISTE"<<endl;
            }
            
   
            }else{
                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }
           
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
                
            
        
        }break;
        case 4:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            

            string nombreEscuela;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA CONSULTAR LA LISTA DE PROFESORES: ";
            cin>>nombreEscuela;
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            
            if(escuelaAuxiliar){
            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            

            cout<<escuelaAuxiliar->verProfesores();
            
            }else{
                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }
           
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        }break;
         case 5:{
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            
            
            int numeroGrupo;
            string nombreEscuela,sigla,IDProfe;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA AGREGAR PROFESOR A UN CURSO: ";
            cin>>nombreEscuela;
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            
            if(escuelaAuxiliar){
            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            
            cout<<escuelaAuxiliar->verCursosSinDetalles();
            cout<<"INGRESE LA SIGLA DEL CURSO AL QUE DESEA AGREGAR PROFESOR: ";
            cin>>sigla;
            objeto *objetoAuxiliar = escuelaAuxiliar->obtenerCurso(sigla);
            curso *cursoauxiliar = (curso*)objetoAuxiliar;
            
            do{
            numeroGrupo = interfazCur->solicitarNumeroGrupo();
            }while(cursoauxiliar->grupoExistente(numeroGrupo) == true);
            
            
//            cursoauxiliar->agregarGrupo(numeroGrupo);
            cout<<escuelaAuxiliar->verProfesores();
            cout<<"INGRESE id DEL PROFESOR A AGREGAR: ";
            cin>>IDProfe;
            objeto * profeAuxiliar = escuelaAuxiliar->buscarProfesorPorCedula(IDProfe);
            cursoauxiliar->asignarProfesorGrupo(profeAuxiliar,numeroGrupo);
            (  (profesor*)profeAuxiliar)->asignarCurso(cursoauxiliar);
            

            
            
   
            }else{
                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }
           
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
            
        
        }break;
         case 6:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            
            
            int numeroGrupo;
            string nombreEscuela,sigla,IDProfe;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA DESASIGNAR PROFESOR DE UN CURSO: ";
            cin>>nombreEscuela;
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            
            if(escuelaAuxiliar){
            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            
            cout<<escuelaAuxiliar->verCursosSinDetalles();
            cout<<"INGRESE LA SIGLA DEL CURSO EN EL QUE DESEA DESASIGNAR UN PROFESOR: ";
            cin>>sigla;
            objeto *objetoAuxiliar = escuelaAuxiliar->obtenerCurso(sigla);
            curso *cursoauxiliar = (curso*)objetoAuxiliar;
            
               
            cout<<cursoauxiliar->verProfesoresCurso();
            cout<<"INGRESE id DEL PROFESOR A DESASIGNAR: ";//////
            cin>>IDProfe;
            objeto *profeAuxiliar = escuelaAuxiliar->buscarProfesorPorCedula(IDProfe);
            cursoauxiliar->desasignarProfesor(IDProfe);
            ((profesor*)profeAuxiliar)->eliminarCurso(sigla);
            

            
            
   
            }else{
                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }
           
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");    
        
        }break;
         case 7:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            
            
            
            string nombreEscuela,sigla;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA VER PROFESORES DE UN CURSO: ";
            cin>>nombreEscuela;
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            
            if(escuelaAuxiliar){
            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            
            cout<<escuelaAuxiliar->verCursosSinDetalles();
            cout<<"INGRESE LA SIGLA DEL CURSO DEL QUE DESEA VER PROFESORES: ";
            cin>>sigla;
            objeto *objetoAuxiliar = escuelaAuxiliar->obtenerCurso(sigla);
            curso *cursoauxiliar = (curso*)objetoAuxiliar;
            
            if(cursoauxiliar){
                cout<<cursoauxiliar->obtenerProfesoresDeCurso();
            }else{
                cout<<"EL CURSO QUE BUSCA NO EXISTE"<<endl;
            }
            
   
            }else{
                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }
           
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
                
        
        }break;
         case 8:{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            system("cmd /c cls");
            string nombreEscuela,cedula;
            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA VER CURSOS DE UN PROFESOR: ";
            cin>>nombreEscuela;
            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
            
            if(escuelaAuxiliar){
            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
            
            cout<<escuelaAuxiliar->verProfesores();
            cout<<"INGRESE EL ID DEL PROFESOR DEL QUE DESEA VER CURSOS: ";
            cin>>cedula;
            objeto *objetoAuxiliar = escuelaAuxiliar->buscarProfesorPorCedula(cedula);
            profesor *profeAuxiliar = (profesor*)objetoAuxiliar;
            
            if(profeAuxiliar){
                cout<<profeAuxiliar->verCursos();
            }else{
                cout<<"EL PROFE QUE BUSCA NO EXISTE"<<endl;
            }
            
   
            }else{
                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
            }
           
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            system("cmd /c pause");
        
        }break;
        default :{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            system("cmd /c cls"); 
            cout<<"\n\n"<<"         ¿DESEA REGRESAR AL MENU PRINCIPAL?: "<<endl;
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            cout<<"         DIGITE  1) PARA SALIR"<<endl;
            cout<<"         DIGITE  2) PARA  NO SALIR"<<endl;
            cin>>opcionSalir;
           
        } 
        break;
        
        
    }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
         system("cmd /c cls"); 
         if(opcionSalir == 1){cout<<"\n\n"<<"         ¡¡ REGRESANDO A MENU PRINCIPAL !!"<<endl<<endl;}
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    }while(opcionSalir != 1);
    
}

void sistema::iniciar(){ // ESTE METODO ES EL QUE LLAMA A LOS DEMAS METODOS PARA EJECUTAR EL PROGRAMA
    
    int opcionSalir = 0;
    //AQUI CASTEAMOS LAS INTERFACES PARA ACCEDER A CADA UNA EN ESPECIFICO
    interfazSistema *interfazSiste =  (interfazSistema*)_interfazSistema;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
     do{
     int opcion = interfazSiste->desplegarMenu();
    switch(opcion){
        case 1: {
            system("cmd /c cls");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            menuUniversidad();
        }break;
        case 2: {
            system("cmd /c cls");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            menuEscuela();
        }break;
         case 3: {
             system("cmd /c cls");
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            menuCurso();
        }break;
        default :{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            system("cmd /c cls"); 
            cout<<"\n\n"<<"         ¿DESEA SALIR DEL SISTEMA?: "<<endl;
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            cout<<"         DIGITE  1) PARA SALIR"<<endl;
            cout<<"         DIGITE  2) PARA  NO SALIR"<<endl;
            cin>>opcionSalir;
        }break;
    
    }
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
         system("cmd /c cls"); 
         if(opcionSalir == 1){cout<<"\n\n"<<"         ¡¡ GRACIAS POR USAR NUESTRO SISTEMA DE MATRICULA !!"<<endl<<endl;}
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    
    }while(opcionSalir != 1);
    
    
    
    
}


/* EL METODO iniciarSistema() ESTA COMENTADO PERO LUEGO HAY QUE BORRARLO */

//void sistema::iniciarSistema(){
//    
//    system("cmd /c cls");
//    int opcionSalir = 0;
//    //cout<<_interfaz->desplegarMensajeBienvenida()<<endl<<endl;
//    do{
//        int opcion ;        
//   // int opcion = _interfaz->desplegarMenuPrincipal();
//    switch(opcion){
//        case 1:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
//            system("cmd /c cls"); 
//           // _universidad->colocarDireccion(_interfaz->solicitarDireccionUniversidad());
//            //_universidad->colocarTelefono(_interfaz->solicitarTelefonoUniversidad());
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//            
//        }break;
//        case 2:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
//            system("cmd /c cls"); 
//           // _universidad->colocarDireccion(_interfaz->solicitarDireccionUniversidad());
//            //_universidad->colocarTelefono(_interfaz->solicitarTelefonoUniversidad());
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//            
//        }break;
//        case 3:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
//            system("cmd /c cls");
//
//            
//           // _universidad->asignarEscuelas(_interfaz->solicitarNombreEscuela());
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//            
//        }break;
//        case 4:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls"); 
//            cout<<_universidad->verEscuelas()<<endl<<endl;
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//            
//            
//            
//        }break;
//        case 5:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            string nombreEscuela; 
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA A LA QUE DESEA AGREGAR EL CURSO: ";
//            cin>>nombreEscuela;
//
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            if(escuelaAuxiliar){
//                
//            cout<<"LA ESCUELA BUSCADA ES: "<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//
//            //escuelaAuxiliar->asignarCurso(_interfaz->solicitarSiglaCurso(),_interfaz->solicitarNombreCurso(),_interfaz->solicitarCreditosCurso());
//            
//            }else{
//                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//
//        }break;
//        case 6:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            string nombreEscuela;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA DE LA QUE DESEA VER LOS CURSOS: ";
//            cin>>nombreEscuela;
//             objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            if(escuelaAuxiliar){
//            
//            cout<<escuelaAuxiliar->verCursos()<<endl;
//            
//            }else{
//                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//            
//        }break;
//        case 7:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls"); 
//            cout<<_universidad->verEscuelasConCursos()<<endl<<endl;
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//            
//        }break;
//        case 8:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls"); 
//            string nombreEscuela;
//            string siglaCurso;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA RECUPERAR CURSO: ";
//            cin>>nombreEscuela;
//            
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            cout<<escuelaAuxiliar->verCursosSinDetalles()<<endl;
//
//            cout<<"INGRESE LA SIGLA DEL CURSO A RECUPERAR: ";
//            cin>>siglaCurso;
//            objeto *objetoCurso = escuelaAuxiliar->obtenerCurso(siglaCurso);
//            curso *cursoAuxiliar = (curso*)objetoCurso;
//            if(cursoAuxiliar){
//                cout<<cursoAuxiliar->toString()<<endl;
//                cout<<"ESTE CURSO PERTENECE A LA ESCUELA DE: "<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            }else{
//                 cout<<"EL CURSO QUE BUSCA NO EXISTE"<<endl;
//            }
//
//            }else{
//                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//            
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//            
//        }break;
//        case 9:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            
//
//            string nombreEscuela;
//            string siglaCurso,nuevoNombreCurso;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA MODIFICAR UN CURSO: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            cout<<escuelaAuxiliar->verCursosSinDetalles()<<endl;
//
//            cout<<"INGRESE LA SIGLA DEL CURSO A MODIFICAR: ";
//            cin>>siglaCurso;
//            objeto *objetoCurso = escuelaAuxiliar->obtenerCurso(siglaCurso);
//            curso *cursoAuxiliar = (curso*)objetoCurso;
//            if(cursoAuxiliar){
//                cout<<"EL CURSO A MODIFICAR ES:\n"<<cursoAuxiliar->toString();
//                cout<<"\n\nINGRESE EL NUEVO NOMBRE NOMBRE PARA EL CURSO: ";
//                cin>>nuevoNombreCurso;
//                cursoAuxiliar->asignarNombre(nuevoNombreCurso);
//                cout<<"CURSO MODIFICADO:\n "<<cursoAuxiliar->toString()<<endl<<endl;
//            }else{
//                 cout<<"EL CURSO QUE BUSCA NO EXISTE"<<endl;
//            }
//            
//   
//            }else{
//                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//           
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//            
//        }break;
//        case 10:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//           
//            string nombreEscuela;
//            string siglaCurso;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA ELIMINAR UN CURSO: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//              cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            cout<<escuelaAuxiliar->verCursosSinDetalles()<<endl;
//            
//            
//            cout<<"INGRESE LA SIGLA DEL CURSO A ELIMINAR: ";
//            cin>>siglaCurso;
//            objeto *objetoCurso =  escuelaAuxiliar->obtenerCurso(siglaCurso);
//            curso *cursoAuxiliar = (curso*)objetoCurso;
//            if(cursoAuxiliar){
//                cout<<"EL CURSO A ELIMINAR ES:\n"<<cursoAuxiliar->toString();
//                escuelaAuxiliar->eliminarCurso(cursoAuxiliar);
//            }else{
//                 cout<<"EL CURSO QUE BUSCA NO EXISTE"<<endl;
//            }
//            
//   
//            }else{
//                cout<<"lA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//            
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//            
//            
//            
//        }break;
//        case 11:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            string nombreEscuela; 
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA A LA QUE DESEA AGREGAR EL PROFESOR: ";
//            cin>>nombreEscuela;
//            
//            
//           
//
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            if(escuelaAuxiliar){
//                
//            cout<<"LA ESCUELA BUSCADA ES: "<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//
//            //escuelaAuxiliar->asignarProfesor(_interfaz->solicitarNombreProfesor(),_interfaz->solicitarIdProfesor());
//            
//            }else{
//                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//
//        
//        }break;
//        case 12:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            
//
//            string nombreEscuela, idProfe,nuevoNombre;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA MODIFICAR EL NOMBRE DE UN PROFESOR: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            cout<<escuelaAuxiliar->verProfesores()<<endl;
//
//            cout<<"INGRESE EL ID DEL PROFESOR A MODIFICAR: ";
//            cin>>idProfe;
//            
//            objeto *objetoProfe = escuelaAuxiliar->buscarProfesorPorCedula(idProfe);
//            profesor *profesorAuxiliar = (profesor*)objetoProfe;
//            if(profesorAuxiliar){
//                cout<<"EL PROFESOR A MODIFICAR ES:\n"<<profesorAuxiliar->toString();
//                cout<<"\n\nINGRESE EL NUEVO NOMBRE NOMBRE PARA EL PROFESOR: ";
//                cin>>nuevoNombre;
//                profesorAuxiliar->asignarNombre(nuevoNombre);
//                cout<<"PROFESOR MODIFICADO:\n "<<profesorAuxiliar->toString()<<endl<<endl;
//            }else{
//                 cout<<"EL PROFESOR QUE BUSCA NO EXISTE"<<endl;
//            }
//            
//   
//            }else{
//                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//           
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//                
//        
//            
//        
//        }break;
//        case 13:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            
//
//            string nombreEscuela, idProfe,nuevoNombre;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA BUSCAR EL PROFESOR: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//
//            cout<<"INGRESE EL ID DEL PROFESOR: ";
//            cin>>idProfe;
//            objeto *objetoCurso = escuelaAuxiliar->buscarProfesorPorCedula(idProfe);
//            profesor *profesorAuxiliar = (profesor*)objetoCurso;
//            if(profesorAuxiliar){
//                cout<<profesorAuxiliar->toString();
//            }else{
//                 cout<<"EL PROFESOR QUE BUSCA NO EXISTE"<<endl;
//            }
//            
//   
//            }else{
//                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//           
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//                
//        
//            
//        
//        }break;
//        case 14:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            
//
//            string nombreEscuela;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA CONSULTAR LA LISTA DE PROFESORES: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            
//
//            cout<<escuelaAuxiliar->verProfesores();
//            
//            
//   
//            }else{
//                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//           
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//                
//            
//            
//        
//        }break;
//        case 15:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            
//            
//            int numeroGrupo;
//            string nombreEscuela,sigla,IDProfe;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA AGREGAR PROFESOR A UN CURSO: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            
//            cout<<escuelaAuxiliar->verCursosSinDetalles();
//            cout<<"INGRESE LA SIGLA DEL CURSO AL QUE DESEA AGREGAR PROFESOR: ";
//            cin>>sigla;
//            objeto *objetoAuxiliar = escuelaAuxiliar->obtenerCurso(sigla);
//            curso *cursoauxiliar = (curso*)objetoAuxiliar;
//            
//            do{
//            //numeroGrupo = _interfaz->solicitarNumeroGrupo();
//            }while(cursoauxiliar->grupoExistente(numeroGrupo) == true);
//            
//            
////            cursoauxiliar->agregarGrupo(numeroGrupo);
//            cout<<escuelaAuxiliar->verProfesores();
//            cout<<"INGRESE id DEL PROFESOR A AGREGAR: ";
//            cin>>IDProfe;
//            objeto * profeAuxiliar = escuelaAuxiliar->buscarProfesorPorCedula(IDProfe);
//            cursoauxiliar->asignarProfesorGrupo(profeAuxiliar,numeroGrupo);
//            (  (profesor*)profeAuxiliar)->asignarCurso(cursoauxiliar);
//            
//
//            
//            
//   
//            }else{
//                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//           
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//                
//            
//            
//        
//        }break;
//        case 16:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            
//            
//            int numeroGrupo;
//            string nombreEscuela,sigla,IDProfe;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA DESASIGNAR PROFESOR DE UN CURSO: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            
//            cout<<escuelaAuxiliar->verCursosSinDetalles();
//            cout<<"INGRESE LA SIGLA DEL CURSO EN EL QUE DESEA DESASIGNAR UN PROFESOR: ";
//            cin>>sigla;
//            objeto *objetoAuxiliar = escuelaAuxiliar->obtenerCurso(sigla);
//            curso *cursoauxiliar = (curso*)objetoAuxiliar;
//            
//               
//            cout<<cursoauxiliar->verProfesoresCurso();
//            cout<<"INGRESE id DEL PROFESOR A DESASIGNAR: ";//////
//            cin>>IDProfe;
//            objeto *profeAuxiliar = escuelaAuxiliar->buscarProfesorPorCedula(IDProfe);
//            cursoauxiliar->desasignarProfesor(IDProfe);
//            ((profesor*)profeAuxiliar)->eliminarCurso(sigla);
//            
//
//            
//            
//   
//            }else{
//                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//           
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");    
//        
//        
//        }break;
//        case 17:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
////            objeto * estudianteMatricula = new estudianteBecado();
//            
//            
//            int numeroGrupo;
//            string nombreEscuela,sigla;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA MATRICULAR ESTUDIANTE A UN CURSO: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            
//            cout<<escuelaAuxiliar->verCursosSinDetalles();
//            
//            cout<<"INGRESE LA SIGLA DEL CURSO EN QUE DESEA MATRICULAR ESTUDIANTE: ";
//            cin>>sigla;
//            objeto *objetoAuxiliar = escuelaAuxiliar->obtenerCurso(sigla);
//            curso *cursoauxiliar = (curso*)objetoAuxiliar;
//            
//            cout<<cursoauxiliar->verGruposSinEstudiantes()<<endl;
//            
//            do{
//                cout<<"INGRESE EL NUMERO DEL GRUPO EN QUE DESEA MATRICULAR ESTUDIANTE: ";
//                cin>>numeroGrupo;
//            }while(cursoauxiliar->grupoExistente(numeroGrupo) == false);
//            
//            
//            
////            objeto *e1 = new estudianteBecado("DIDIER","OCAMPO","MARTINEZ","152325","207330432","COSTARRICENSE",0.10);
////            
////            _matricula->matricularEstudiante(cursoauxiliar,(estudiante*)e1,numeroGrupo);
////            ((estudianteBecado*)e1)->asignarCurso(cursoauxiliar);
//            
//
//   
//            }else{
//                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//           
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//                
//            
//            
//        
//        }break;
//        case 18:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            
//            
//            
//            string nombreEscuela,sigla;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA VER PROFESORES DE UN CURSO: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            
//            cout<<escuelaAuxiliar->verCursosSinDetalles();
//            cout<<"INGRESE LA SIGLA DEL CURSO DEL QUE DESEA VER PROFESORES: ";
//            cin>>sigla;
//            objeto *objetoAuxiliar = escuelaAuxiliar->obtenerCurso(sigla);
//            curso *cursoauxiliar = (curso*)objetoAuxiliar;
//            
//            if(cursoauxiliar){
//                cout<<cursoauxiliar->obtenerProfesoresDeCurso();
//            }else{
//                cout<<"EL CURSO QUE BUSCA NO EXISTE"<<endl;
//            }
//            
//   
//            }else{
//                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//           
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//                
//            
//            
//        
//        }break;
//        case 19:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            
//            
//            
//            string nombreEscuela,cedula;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA VER CURSOS DE UN PROFESOR: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            
//            cout<<escuelaAuxiliar->verProfesores();
//            cout<<"INGRESE EL ID DEL PROFESOR DEL QUE DESEA VER CURSOS: ";
//            cin>>cedula;
//            objeto *objetoAuxiliar = escuelaAuxiliar->buscarProfesorPorCedula(cedula);
//            profesor *profeAuxiliar = (profesor*)objetoAuxiliar;
//            
//            if(profeAuxiliar){
//                cout<<profeAuxiliar->verCursos();
//            }else{
//                cout<<"EL PROFE QUE BUSCA NO EXISTE"<<endl;
//            }
//            
//   
//            }else{
//                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//           
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//                
//            
//            
//        
//        }break;
//        case 20:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
//            system("cmd /c cls");
//            
//            
//            int numeroGrupo;
//            string nombreEscuela,sigla,cedula;
//            cout<<_universidad->verEscuelasSinDetalles()<<"\n";
//            cout<<"INGRESE NOMBRE DE LA ESCUELA EN LA QUE DESEA CALCULAR PAGOCREDITOS DE ESTUDIANTE: ";
//            cin>>nombreEscuela;
//            objeto *objetoAuxiliar = _universidad->obtenerEscuela(nombreEscuela);
//            escuela *escuelaAuxiliar = (escuela*)objetoAuxiliar;
//            
//            if(escuelaAuxiliar){
//            cout<<escuelaAuxiliar->obtenerNombre()<<endl<<endl;
//            
//            cout<<escuelaAuxiliar->verCursosSinDetalles();
//            
//            cout<<"INGRESE LA SIGLA DEL CURSO EN QUE DESEA CALCULAR PAGOCREDITOS DE ESTUDIANTE: ";
//            cin>>sigla;
//            objeto *objetoAuxiliar = escuelaAuxiliar->obtenerCurso(sigla);
//            curso *cursoauxiliar = (curso*)objetoAuxiliar;
//            objeto *estudianteAuxiliar = NULL; // puntero para guardar el puntero que retorna el curso
//            cout<<cursoauxiliar->toString()<<endl;
//            
//            cout<<"INGRESE EL ID DEL ESTUDIANTE EN QUE DESEA CALCULAR PAGOCREDITOS DE ESTUDIANTE: ";
//            cin>>cedula;
//            estudianteAuxiliar = cursoauxiliar->obtenerEstudiantePorId(cedula);
//            
//            //cout<<"EL MONTO A PAGAR DEL ESTUDIANTE: "<<((estudiante*)estudianteAuxiliar)->obtenerNombre();
////            cout<<" es "<<cursoauxiliar->pagoCreditos( ((estudiante*)estudianteAuxiliar)->obtenerNombre() );
//            
//            do{
//                cout<<"INGRESE EL NUMERO DEL GRUPO EN QUE DESEA CALCULAR PAGOCREDITOS DE ESTUDIANTE: ";
//                cin>>numeroGrupo;
//            }while(cursoauxiliar->grupoExistente(numeroGrupo) == false);
//            //cout<<"MONEY "<<_matricula->verMontoMatricula(cursoauxiliar,cedula,numeroGrupo);
//            
//             
//   
//            }else{
//                cout<<"LA ESCUELA QUE BUSCA NO EXISTE"<<endl;
//            }
//           
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//            system("cmd /c pause");
//                
//            
//            
//        
//        }break;
//        default:{
//            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
//            system("cmd /c cls"); 
//            cout<<"\n\n"<<"         ¿DESEA SALIR DEL SISTEMA?: "<<endl;
//             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
//            cout<<"         DIGITE  1) PARA SALIR"<<endl;
//            cout<<"         DIGITE  2) PARA  NO SALIR"<<endl;
//            cin>>opcionSalir;
//           
//            
//            
//            
//            
//        }break;
//        
//    }   
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
//         system("cmd /c cls"); 
//         if(opcionSalir == 1){cout<<"\n\n"<<"         ¡¡ GRACIAS POR USAR NUESTRO SISTEMA DE MATRICULA !!"<<endl<<endl;}
//         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//    }while(opcionSalir != 1);
//    
//    
//
//}






