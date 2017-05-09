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
    //AQUI HACEMOS LA COPIA DE LA LISTA DE CURSOS
    objeto *cursoAux = NULL;
    coleccion *cursos = copia.listaCursos;
    
    _nombre = copia._nombre;
    listaCursos = new lista();
    iterador *iteradorCursos = cursos->obtenerIterador();
    
    while(iteradorCursos->masElementos()){
        cursoAux = new curso(  * ((curso*)iteradorCursos->proximoElemento()) );
        listaCursos->agregarObjeto( cursoAux );
        
    }
    
    //AQUI HACEMOS LA COPIA DE LA LISTA DE PROFESORES
    
    objeto *profesorAux = NULL;
    coleccion *profesores = copia.listaProfesores;
    
    iterador *iteradorProfesores = profesores->obtenerIterador();
    
    while(iteradorProfesores->masElementos()){
        profesorAux = new profesor(  *((profesor*)iteradorProfesores->proximoElemento())   );
        listaProfesores->agregarObjeto(profesorAux);
        
    }
   
    delete iteradorCursos;
    delete iteradorProfesores;
    
    
}

escuela& escuela::operator =(const escuela& otra){
    //VERIFICAR SI EL CONTENIDO DE LAS ESCUELAS ES DISTINTO
   
    
    iterador *cursosLocales = listaCursos->obtenerIterador();
    iterador *profesoresLocales = listaProfesores->obtenerIterador();
    if(this != &otra){
        //LIBERAMOS EL ESPACIO DE LISTA CURSOS
        while(cursosLocales->masElementos()){
            delete cursosLocales->proximoElemento();
        }
        //LIBERAMOS ESPACIO DE LISTA PROFESORES
        while(profesoresLocales->masElementos()){
            delete profesoresLocales->proximoElemento();
        }
        delete cursosLocales;
        delete profesoresLocales;
        
        //AHORA MODIFICAMOS EL CONTENIDO DE CADA LISTA
        coleccion *cursos = otra.listaCursos;
        coleccion *profesores = otra.listaProfesores;
        objeto *cursoAux = NULL;
        objeto *profesorAux = NULL;
        iterador *iteradorCursos = cursos->obtenerIterador();
        iterador *iteradorProfesores = profesores->obtenerIterador();
        while(iteradorCursos->masElementos()){
            cursoAux = new curso(   *((curso*)iteradorCursos->proximoElemento())  );
            listaCursos->agregarObjeto(cursoAux);
        }
        while(iteradorProfesores->masElementos()){
            profesorAux = new profesor( *((profesor*)iteradorProfesores->proximoElemento()));
            listaProfesores->agregarObjeto(profesorAux);
        }
        
        delete iteradorCursos;
        delete iteradorProfesores;
        
        
    }
    return *this;
    
    
    
}
escuela::~escuela() {
    iterador *cursosLocales = listaCursos->obtenerIterador();
    iterador *profesoresLocales = listaProfesores->obtenerIterador();
     while(cursosLocales->masElementos()){
            delete cursosLocales->proximoElemento();
        }
        //LIBERAMOS ESPACIO DE LISTA PROFESORES
        while(profesoresLocales->masElementos()){
            delete profesoresLocales->proximoElemento();
        }
        delete cursosLocales;
        delete profesoresLocales;
}

string escuela::obtenerNombre() const{return this->_nombre;}
string escuela::toString() const{
    stringstream x;
    x<<"Escuela de: "<<_nombre<<endl;
    
    return x.str();
}
void escuela::asignarCurso(string sigla,string nombre,int creditos){
    objeto *_curso = new curso(sigla,nombre,creditos);
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

void escuela::asignarProfesor(string nombre, string id){
    objeto *_profesor = new profesor(nombre, id);
    listaProfesores->agregarObjeto(_profesor);
    
    
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

string escuela::verProfesores() const{
    stringstream x;
    x<<"\n______________________________________________________\n";
    x<<"\n\nProfesores Asociados a "<<escuela::toString()<<endl;
    x<<listaProfesores->toString()<<endl<<endl;
    x<<"\n______________________________________________________\n";
    
    return x.str();
}
