/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   estudiante.cpp
 * Author: jose ocampo
 * 
 * Created on 28 de abril de 2017, 11:30 PM
 */

#include "estudiante.h"

estudiante::estudiante(string nombre,string ap1,string ap2,string carnet,string cedula,string nacion,float porcenBeca):
_nombre(nombre),_apellido1(ap1),_apellido2(ap2),_carnet(carnet),_cedula(cedula),
        _nacionalidad(nacion),_porcentajeBeca(porcenBeca){
}



estudiante::~estudiante() {
}

string estudiante::toString()const{
    stringstream x;
    x<<"Nombre: "<<_nombre<<endl;
    x<<"Apellido1: "<<_apellido1<<endl;
    x<<"Apellido1: "<<_apellido2<<endl;
    x<<"Cedula: "<<_cedula<<endl;
    x<<"Carnet: "<<_carnet<<endl;
    x<<"Nacionalidad: "<<_nacionalidad<<endl;
    
    return x.str();
}
  
void estudiante::asignarNombre(string nombre){this->_nombre = nombre;}
void estudiante::asignarApellido1(string ap1){this->_apellido1 = ap1;}
void estudiante::asignarApellido2(string ap2){this->_apellido1 = ap2;}
//
//void estudiante::asignarCedula(string cedula){this->_cedula = cedula;}
//void estudiante::asignarCarnet(string carnet){this->_carnet = carnet;}

void estudiante::asignarNacionalidad(string nacionalidad){this->_nacionalidad = nacionalidad;}
void estudiante::asignarPorcentajeBeca(float porcenBeca){this->_porcentajeBeca = porcenBeca;}



string estudiante::obtenerNombre()const{return this->_nombre;}
//
//string estudiante::obtenerApellido1()const{return this->_apellido1;}
//string estudiante::obtenerApellido2()const{return this->_apellido2;}

string estudiante::obtenerCedula()const{return this->_cedula;}
string estudiante::obtenerCarnet()const{return this->_carnet;}
string estudiante::obtenerNacionalidad()const{return this->_nacionalidad;}
float estudiante::obtenerPorcentajeBeca() const{return this->_porcentajeBeca;}
  


