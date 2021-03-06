/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   matricula.cpp
 * Author: jose ocampo
 * 
 * Created on 5 de mayo de 2017, 02:32 PM
 */

#include "matricula.h"

matricula::matricula() {
}
matricula::~matricula() {
}

void matricula::matricularEstudiante(curso* cursoAux, estudiante* estudianteAux, int numeroGrupo){
    coleccion *coleccionGrupos = cursoAux->obetenerColeccion();
    iterador * iteradorGrupos = coleccionGrupos->obtenerIterador();
    
    grupo * grupoAuxiliar = NULL;
 
    while(iteradorGrupos->masElementos()){
        grupoAuxiliar = (grupo*)iteradorGrupos->proximoElemento();
        if(grupoAuxiliar){
            if(grupoAuxiliar->obtenerNumeroGrupo() == numeroGrupo){
                grupoAuxiliar->agregarEstudiante(estudianteAux);
            }
        }
    }
}

long matricula::verMontoMatricula(curso* cursoAux,string cedula,int numGrupo){
    coleccion *coleccionGrupos = cursoAux->obetenerColeccion();
    iterador *iteradorGrupos = coleccionGrupos->obtenerIterador();
    objeto* estudianteAux = NULL;
    long montoMatricula = 0.0;
    grupo* grupoAux = NULL;
    while(iteradorGrupos->masElementos()){
        grupoAux = (grupo*)iteradorGrupos->proximoElemento();
        if(grupoAux){
            
            if(grupoAux->obtenerNumeroGrupo() == numGrupo){
                estudianteAux = grupoAux->buscarEstudiantePorId(cedula);
                if(estudianteAux){
                    montoMatricula += ((estudiante*)estudianteAux)->calcularPagoCreditos();
                }
            }
        }
    }
    return montoMatricula;
}

