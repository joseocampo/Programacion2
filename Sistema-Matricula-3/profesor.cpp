/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   profesor.cpp
 * Author: Admin
 * 
 * Created on 27 de abril de 2017, 12:36 AM
 */

#include "profesor.h"
#include "curso.h";


profesor::profesor(string nombre, string id): _nombre(nombre), _cedula(id), listaCursos(new lista()) {
}

profesor::profesor(const profesor& copia){
    _nombre = copia._nombre;
    _cedula = copia._cedula;
    
    listaCursos = new lista();
    coleccion *aux = copia.listaCursos;
    objeto *cursoAux = NULL;
    iterador *iteradorCursos = aux->obtenerIterador();
    while(iteradorCursos->masElementos()){
        cursoAux = new curso(  *((curso*)iteradorCursos->proximoElemento())  );
        listaCursos->agregarObjeto(cursoAux);
    }
    delete iteradorCursos;
    
}
profesor& profesor::operator =(const profesor& copia){
    if(this != &copia ){
        //liberamos espacio
        iterador *ite = listaCursos->obtenerIterador();
        while(ite->masElementos()){
            delete ite->proximoElemento();
        }
        delete ite;
        delete listaCursos;
        //modificamos contenido
        _nombre = copia._nombre;
        _cedula = copia._cedula;

        listaCursos = new lista();
        coleccion *aux = copia.listaCursos;
        objeto *cursoAux = NULL;
        iterador *iteradorCursos = aux->obtenerIterador();
        while(iteradorCursos->masElementos()){
            cursoAux = new curso(  *((curso*)iteradorCursos->proximoElemento())  );
            listaCursos->agregarObjeto(cursoAux);
        }
        delete iteradorCursos;
        
        
    }
    return *this;
    
}
profesor::~profesor() {
    iterador *ite = listaCursos->obtenerIterador();
        while(ite->masElementos()){
            delete ite->proximoElemento();
        }
        delete ite;
        delete listaCursos;
    
}


string profesor::toString() const {

stringstream x;
    x<<"Profesor: "<<_nombre<<endl;
    x<<"Id: "<<_cedula<<endl<<endl;
    return x.str();


}

void profesor::asignarNombre(string n){_nombre=n;}

string profesor::obtenerNombre(){return _nombre;}

void profesor::asignarId(string i){_cedula=i;}

string profesor::obtenerId(){return _cedula;}

void profesor::asignarCurso(objeto *_curso){

    listaCursos->agregarObjeto(_curso);   
}

objeto* profesor::obtenerCurso(string sigla)const{
    iterador *ite = listaCursos->obtenerIterador();
    curso *cursoAuxiliar = NULL; 
    while(ite->masElementos()){
        cursoAuxiliar = dynamic_cast<curso*>(ite->proximoElemento());
        if(cursoAuxiliar){
            if(cursoAuxiliar->obtenerSigla() == sigla){
                return cursoAuxiliar;
                
            }
        }
    }
    return NULL;
}





//void profesor::eliminarCurso(string _sigla){
// iterador *ite = listaCursos->obtenerIterador();
// curso *cursoAuxiliar = NULL;
//    while(ite->masElementos()){
//        cursoAuxiliar = dynamic_cast<curso*>(ite->proximoElemento());
//        if(cursoAuxiliar){
//            if(cursoAuxiliar->obtenerSigla() == _sigla){
//                objeto *objetoAuxiliar = dynamic_cast<objeto*>(cursoAuxiliar);
//                listaCursos->eliminarObjeto(objetoAuxiliar);
//                
//            }
//        }
//    }
//}

void profesor::eliminarCurso(string _sigla){
 iterador *ite = listaCursos->obtenerIterador();
 curso *cursoAuxiliar = NULL;
    while(ite->masElementos()){
        cursoAuxiliar = dynamic_cast<curso*>(ite->proximoElemento());
        if(cursoAuxiliar){
            if(cursoAuxiliar->obtenerSigla() == _sigla){
                objeto *objetoAuxiliar = dynamic_cast<objeto*>(cursoAuxiliar);
                listaCursos->eliminarObjeto(objetoAuxiliar);
                
            }
        }
    }
}



string profesor::verCursos() const{
    stringstream x;
    x<<"\n______________________________________________________\n";
    x<<"\n\nCursos Asociados a "<<_nombre<<endl<<endl;
    x<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - "<<endl;
    iterador *ite = listaCursos->obtenerIterador();
 curso *cursoAuxiliar = NULL;
    while(ite->masElementos()){
        cursoAuxiliar = dynamic_cast<curso*>(ite->proximoElemento());
        if(cursoAuxiliar){     
            x<<cursoAuxiliar->obtenerNombre()<<endl<<endl;                   
        }
    }
    x<<"\n______________________________________________________\n";
    
    return x.str();
}



