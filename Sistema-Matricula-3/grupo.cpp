/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   grupo.cpp
 * Author: jose ocampo
 * 
 * Created on 30 de abril de 2017, 12:53 AM
 */

#include "grupo.h"
#include "coleccion.h"

grupo::grupo():_arreglo(new vector()) {
}
void grupo::agregarEstudiante(objeto* estudianteX){
     _arreglo->agregarObjeto(estudianteX);
}


grupo::~grupo() {
}

