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
    x<<"Profesor "<<nombre<<endl;
    x<<"Id: "<<id<<endl<<endl;
    return x.str();


}

void profesor::asignarNombre(string n){nombre=n;}

string profesor::obtenerNombre(){return nombre;}

void profesor::asignarId(string i){id=i;}

string profesor::obtenerId(){return id;}

void profesor::asignarCurso(curso *_curso){
    objeto *objetoAuxiliar = dynamic_cast<objeto*>(_curso);
    listaCursos->agregarObjeto(objetoAuxiliar);   
}

objeto* profesor::obtenerCurso(string sigla)const{
    iterador *ite = listaCursos->obtenerIterador();
    while(ite->masElementos()){
        curso *cursoAuxiliar = dynamic_cast<curso*>(ite->proximoElemento());
        if(cursoAuxiliar != 0){
            if(cursoAuxiliar->obtenerSigla() == sigla){
                return cursoAuxiliar;
                
            }
        }
    }
    return NULL;
}


string profesor::verCursos() const{
    stringstream x;
    x<<"\n______________________________________________________\n";
    x<<"\n\nCursos Asociados a "<<nombre<<endl;
    x<<listaCursos->toString()<<endl;
    x<<"\n______________________________________________________\n";
    
    return x.str();
}


void profesor::eliminarCurso(string _sigla){

 iterador *ite = listaCursos->obtenerIterador();
 
    while(ite->masElementos()){
        curso *cursoAuxiliar = dynamic_cast<curso*>(ite->proximoElemento());
        if(cursoAuxiliar != 0){
            if(cursoAuxiliar->obtenerSigla() == _sigla){
                objeto *objetoAuxiliar = dynamic_cast<objeto*>(cursoAuxiliar);
                listaCursos->eliminarObjeto(objetoAuxiliar);
                
            }
        }
    }


}




