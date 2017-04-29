/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   curso.cpp
 * Author: jose ocampo
 * 
 * Created on 21 de abril de 2017, 04:02 PM
 */

#include "curso.h"
#include "profesor.h"

curso::curso(string sigla,string nombre,int creditos):_sigla(sigla), _nombre(nombre),_creditos(creditos), listaProfesores(new lista()) {
}
curso::curso(const curso& copia){
    _nombre = copia._nombre;
    _sigla = copia._sigla;
    _creditos = copia._creditos;
    
}





void curso::asignarNombre(string nombre){this->_nombre = nombre;}
string curso::obtenerNombre() {return this->_nombre;}
string curso::obtenerSigla() {return this->_sigla;}
string curso::toString() const{
    stringstream x;
    x<<"Curso: "<<this->_nombre<<endl;
    x<<"Sigla: "<<this->_sigla<<endl<<endl;
    return x.str();
}


void curso::asignarProfesor(string nombre,string id){
    objeto *_profesor = new profesor(nombre, id);
    listaProfesores->agregarObjeto(_profesor);   //**********Agregar objetos lo deberia hacer iterador Â¿?**************
}

objeto* curso::obtenerProfesor(string id)const{
    iterador *ite = listaProfesores->obtenerIterador();
    profesor *profesorAuxiliar = NULL;
    while(ite->masElementos()){
        profesorAuxiliar = dynamic_cast<profesor*>(ite->proximoElemento());
        if(profesorAuxiliar){
            if(profesorAuxiliar->obtenerId() == id){
                return profesorAuxiliar;
                
            }
        }
    }
    return NULL;
}


curso::~curso() {
}
