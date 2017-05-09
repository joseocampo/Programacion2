/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   estudianteExtranjero.cpp
 * Author: jose ocampo
 * 
 * Created on 3 de mayo de 2017, 04:42 PM
 */

#include "estudianteExtranjero.h"

estudianteExtranjero::estudianteExtranjero(string nombre,string ap1,string ap2,string carnet,string cedula,string nacion)
:estudiante( nombre, ap1, ap2, carnet, cedula, nacion){}
//
//estudianteExtranjero::estudianteExtranjero(const estudianteExtranjero& copia){
//    _nombre = copia._nombre;
//    _apellido1 = copia._apellido1;
//    _apellido2 = copia._apellido2;
//    _nacionalidad = copia._nacionalidad;
//    _carnet = copia._carnet;
//    _cedula = copia._cedula;
//    
//    
//    listaCursos = new lista();
//    coleccion *listaAux = copia.listaCursos;
//    objeto *cursoAuxiliar = NULL;
//    iterador *iteradorCursos = listaAux->obtenerIterador();
//    while(iteradorCursos->masElementos()){
//        cursoAuxiliar = new curso( *((curso*)iteradorCursos->proximoElemento() )) ;
//        listaCursos->agregarObjeto(cursoAuxiliar);
//    }
//    delete iteradorCursos;
//    
//    
//}
estudianteExtranjero& estudianteExtranjero::operator =(const estudianteExtranjero& copia){
    //verificamos si los objetos son distintos
    if(this != & copia){
        //liberamos espacio
        iterador *ite = listaCursos->obtenerIterador();
        while(ite->masElementos()){
            delete ite->proximoElemento();
        }
        delete ite;
        delete listaCursos;
        
        //modificamos contenido
    _nombre = copia._nombre;
    _apellido1 = copia._apellido1;
    _apellido2 = copia._apellido2;
    _nacionalidad = copia._nacionalidad;
    _carnet = copia._carnet;
    _cedula = copia._cedula;
    
    
    listaCursos = new lista();
    coleccion *listaAux = copia.listaCursos;
    objeto *cursoAuxiliar = NULL;
    iterador *iteradorCursos = listaAux->obtenerIterador();
    while(iteradorCursos->masElementos()){
        cursoAuxiliar = new curso( *((curso*)iteradorCursos->proximoElemento() )) ;
        listaCursos->agregarObjeto(cursoAuxiliar);
    }
    delete iteradorCursos;
        
    }
    //retornamos 
    return *this;
}






estudianteExtranjero::~estudianteExtranjero() {
    iterador *ite = listaCursos->obtenerIterador();
    while(ite->masElementos()){
        delete ite->proximoElemento();
    }
    delete ite;
}
long estudianteExtranjero::calcularPagoCreditos(){
    long montoTotal = 0.0;
    
    iterador *iteradorEstudiante = listaCursos->obtenerIterador();
    curso *cursoAuxiliar = NULL;
    while(iteradorEstudiante->masElementos()){
        cursoAuxiliar = (curso*)iteradorEstudiante->proximoElemento();
        if(cursoAuxiliar){
            montoTotal += ( (cursoAuxiliar->obtenerCreditos() *10000) + 15000 );
            montoTotal += montoTotal*PORCENTAJE_RECARGO;
        }
    }
    
    return montoTotal;
}
void estudianteExtranjero::asignarCurso(objeto* cursoX){
    listaCursos->agregarObjeto(cursoX);
}



string estudianteExtranjero::toString() const{
     
 }