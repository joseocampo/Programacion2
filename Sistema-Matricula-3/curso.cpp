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

curso::curso(string sigla,string nombre,int creditos):_sigla(sigla), _nombre(nombre),_creditos(creditos), listaProfesores(new lista()),
        listaGrupos(new lista())
{
}






void curso::asignarNombre(string nombre){this->_nombre = nombre;}
void curso::asignarCreditos(int numeroCreditos){this->_creditos = numeroCreditos;}

string curso::obtenerNombre()const {return this->_nombre;}
string curso::obtenerSigla()const {return this->_sigla;}
int curso::obtenerCreditos() const{return this->_creditos;}

string curso::toString() const{
    stringstream x;
    x<<"Curso: "<<this->_nombre<<endl;
    x<<"Sigla: "<<this->_sigla<<endl<<endl;
    x<<"Creditos: "<<this->_creditos<<endl;
//    x<<"Profesor: "<<
    return x.str();
    
}


void curso::asignarProfesor(profesor *_profesor){
    objeto *objetoAuxiliar = dynamic_cast<objeto*>(_profesor);
    listaProfesores->agregarObjeto(objetoAuxiliar);   
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

string curso::verProfesores() const{
    stringstream x;
    x<<"\n______________________________________________________\n";
    x<<"\n\nProfesores Asociados a "<<_nombre<<endl;
    x<<listaProfesores->toString()<<endl;
    x<<"\n______________________________________________________\n";
    
    return x.str();
}


void curso::eliminarProfesor(string _id){

 iterador *ite = listaProfesores->obtenerIterador();
 
    while(ite->masElementos()){
        profesor *profeAuxiliar = dynamic_cast<profesor*>(ite->proximoElemento());
        if(profeAuxiliar != 0){
            if(profeAuxiliar->obtenerId() == _id){
                objeto *objetoAuxiliar = dynamic_cast<objeto*>(profeAuxiliar);
                listaProfesores->eliminarObjeto(objetoAuxiliar);
                
            }
        }
    }


}






curso::~curso() {
}
