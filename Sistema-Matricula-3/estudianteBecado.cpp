/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   estudianteBecado.cpp
 * Author: jose ocampo
 * 
 * Created on 28 de abril de 2017, 11:34 PM
 */

#include "estudianteBecado.h"

estudianteBecado::estudianteBecado(string nombre,string ap1,string ap2,string carnet,string cedula,string nacion,float porcenBeca):
estudiante( nombre, ap1, ap2, carnet, cedula, nacion, porcenBeca){}

double estudianteBecado::calcularPagoCreditos(){
    double montoTotal = 0.0;
    
    iterador *iteradorEstudiante = listaCursos->obtenerIterador();
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
void estudianteBecado::asignarCurso(objeto* cursoX){
    listaCursos->agregarObjeto(cursoX);
}

estudianteBecado::~estudianteBecado() {
}

