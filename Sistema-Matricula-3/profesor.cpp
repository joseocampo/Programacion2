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


profesor::profesor(string nombre, string id): nombre(nombre), id(id), listaCursos(new lista()) {
}


profesor::~profesor() {
}


string profesor::toString() const {/* ***TO DO:::*** */}

void profesor::asignarNombre(string n){nombre=n;}

string profesor::obtenerNombre(){return nombre;}

void profesor::asignarId(string i){id=i;}

string profesor::obtenerId(){return id;}

void profesor::asignarCurso(string sigla,string nombre){
    objeto *_curso = new curso(sigla, nombre);
    listaCursos->agregarObjeto(_curso);   //**********Agregar objetos lo deberia hacer iterador Â¿?**************
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
