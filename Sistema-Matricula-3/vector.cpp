/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vector.cpp
 * Author: jose ocampo
 * 
 * Created on 29 de abril de 2017, 09:42 PM
 */

#include "vector.h"

//IMPLEMETACION DE LA CLASE VECTOR

vector::vector():_cantidad(0),_estudiantes(new objeto*[TAMANO]) {
    for(int i=0; i<TAMANO; i++){
        _estudiantes[i] = NULL;
    }
}
int vector::obtenerCantidad() const{return this->_cantidad;}
int vector::numElementos() const{
    int contador =0;
    for(int i=0; i<TAMANO; i++){
        if(_estudiantes[i]){
            contador++;
        }
    }
    return contador;
}
void vector::eliminarObjeto(objeto* x){}

void vector::agregarObjeto(objeto* estu){
    if(!_estudiantes[_cantidad]){
    _estudiantes[_cantidad] = estu;
    _cantidad++;
    }
    
}
iterador* vector::obtenerIterador() const{
    return new iteradorVector(_estudiantes);
    
}

vector::~vector() {
}
string vector::toString() const{
    stringstream x;
    for(int i=0; i<TAMANO; i++){
        if(_estudiantes[i]){
            x<<_estudiantes[i]->toString()<<endl;
        }
    
    }
    return x.str();
}
const int vector::TAMANO = 30;




//IMPLEMETACION DE LA CLASE ITERADORVECTOR
iteradorVector::iteradorVector( objeto** arreglo ):cursor(0),_arreglo(arreglo){

}
bool iteradorVector::masElementos() const{
    
 
    return (_arreglo[cursor]);
    
}
objeto* iteradorVector::proximoElemento( ){
    
    
    objeto* auxiliar = _arreglo[cursor++];
//    cursor++;
    return auxiliar;
}
