/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nacional.cpp
 * Author: jose ocampo
 * 
 * Created on 3 de mayo de 2017, 04:29 PM
 */

#include "estudianteNacional.h"

estudianteNacional::estudianteNacional(string nombre,string ap1,string ap2,string carnet,string cedula,string nacion,float porcenBeca,bool beca)
:estudiante( nombre, ap1, ap2, carnet, cedula, nacion),_porcentajeBeca(porcenBeca),_poseeBeca(beca){}

//
//estudianteNacional::estudianteNacional(const estudianteNacional& copia){
//    _nombre = copia._nombre;
//    _apellido1 = copia._apellido1;
//    _apellido2 = copia._apellido2;
//    _nacionalidad = copia._nacionalidad;
//    _carnet = copia._carnet;
//    _cedula = copia._cedula;
//    _poseeBeca = copia._poseeBeca;
//    _porcentajeBeca = copia._porcentajeBeca;
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
estudianteNacional& estudianteNacional::operator =(const estudianteNacional& copia){
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
    _poseeBeca = copia._poseeBeca;
    _porcentajeBeca = copia._porcentajeBeca;
    
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






estudianteNacional::~estudianteNacional() {
    iterador *ite = listaCursos->obtenerIterador();
    while(ite->masElementos()){
        delete ite->proximoElemento();
    }
    delete ite;
}
long estudianteNacional::calcularPagoCreditos(){
    long montoTotal = 0.0;
    
    iterador *iteradorEstudiante = listaCursos->obtenerIterador();//SE CAE AQUI
    curso *cursoAuxiliar = NULL;
    while(iteradorEstudiante->masElementos()){
        cursoAuxiliar = (curso*)iteradorEstudiante->proximoElemento();
        if(cursoAuxiliar){
            montoTotal += ( (cursoAuxiliar->obtenerCreditos() *10000) + 15000 );
            if(_porcentajeBeca > 0){
                montoTotal -= montoTotal*_porcentajeBeca;
            }
        }
    }
    
    return montoTotal;
}

void estudianteNacional::asignarCurso(objeto* cursoX){ // SE CAE
    listaCursos->agregarObjeto(cursoX);
}

float estudianteNacional::obtenerPorcentajeBeca() const{return this->_porcentajeBeca;}




string estudianteNacional::toString() const{
     
 }
