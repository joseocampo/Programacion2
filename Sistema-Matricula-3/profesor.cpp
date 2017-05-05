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


profesor::profesor(string nombre, string id): nombre(nombre), id(id), listaCursos(new lista()) {
}


profesor::~profesor() {
}


string profesor::toString() const {

stringstream x;
    x<<"Profesor: "<<nombre<<endl;
    x<<"Id: "<<id<<endl<<endl;
    return x.str();


}

void profesor::asignarNombre(string n){nombre=n;}

string profesor::obtenerNombre(){return nombre;}

void profesor::asignarId(string i){id=i;}

string profesor::obtenerId(){return id;}

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
    x<<"\n\nCursos Asociados a "<<nombre<<endl<<endl;
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



