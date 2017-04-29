/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   escuela.cpp
 * Author: jose ocampo
 * 
 * Created on 21 de abril de 2017, 03:37 PM
 */
#include "escuela.h"

escuela::escuela(string nombre):_nombre(nombre),listaCursos(new lista()),listaProfesores(new lista()) {
    
}
escuela::escuela(const escuela& copia){
    _nombre = copia._nombre;
    
    listaCursos = new lista();
    coleccion *cursos = copia.listaCursos;
    
    iterador *ite = cursos->obtenerIterador();
    
    while(ite->masElementos()){
        curso *cursoAuxiliar = (curso*)ite->proximoElemento();
        listaCursos->agregarObjeto(new curso(    )     );
        
    }
    
}

escuela& escuela::operator =(const escuela& otra){
    if(this != &otra){
        _nombre = otra._nombre;
        listaCursos = new lista();

        iterador *ite = otra.listaCursos->obtenerIterador();
        while(ite->masElementos()){
            curso *cursoAuxiliar = (curso*)ite->proximoElemento();
            listaCursos->agregarObjeto(new curso(cursoAuxiliar->obtenerNombre(),cursoAuxiliar->obtenerSigla()));

        }
    }
    return *this;
    
    
    
}
escuela::~escuela() {
    delete listaCursos;
}

string escuela::obtenerNombre() const{return this->_nombre;}
string escuela::toString() const{
    stringstream x;
    x<<"Escuela de: "<<_nombre<<endl;
    
    return x.str();
}
void escuela::asignarCurso(string sigla,string nombre){
    objeto *_curso = new curso(sigla,nombre);
    listaCursos->agregarObjeto(_curso);
}

string escuela::verCursos() const{
    stringstream x;
    x<<"\n______________________________________________________\n";
    x<<"\n\nCursos Asociados a "<<escuela::toString()<<endl;
    x<<listaCursos->toString()<<endl;
    x<<"\n______________________________________________________\n";
    
    return x.str();
}
objeto* escuela::obtenerCurso(string sigla)const{
    iterador *ite = listaCursos->obtenerIterador();
    curso *cursoAuxiliar = NULL;
    while(ite->masElementos()){
        cursoAuxiliar = (curso*)ite->proximoElemento();
        if(cursoAuxiliar){
            if(cursoAuxiliar->obtenerSigla() == sigla){
                return cursoAuxiliar;
                
            }
        }
    }
    return NULL;
}

void escuela::eliminarCurso(objeto* obj){
    
    listaCursos->eliminarObjeto(obj);
}
string escuela::verCursosSinDetalles() const{
     stringstream x;
    x<<listaCursos->toString()<<endl;
    return x.str();
}

void escuela::asignarProfesor(string nombre, string apellido1, string apellido2, string cedula){
//    objeto *profesor = new profesor(nombre,apellido1,apellido2,cedula);
//    listaProfesores->agregarObjeto(profesor);
    
    
}
objeto* escuela::buscarProfesorPorCedula(string cedula) const{
    
    iterador *iteradorProfesor = listaProfesores->obtenerIterador();
    profesor *profesorAuxiliar =NULL;
    while(iteradorProfesor->masElementos()){
        profesorAuxiliar = (profesor*)iteradorProfesor->proximoElemento();
        if(profesorAuxiliar){
            if(profesorAuxiliar->obtenerId() == cedula){
                return profesorAuxiliar;
            }
        }
    }
    return NULL;
}

