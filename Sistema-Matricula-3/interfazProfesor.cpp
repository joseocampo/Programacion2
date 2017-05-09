/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazProfesor.cpp
 * Author: jose ocampo
 * 
 * Created on 7 de mayo de 2017, 07:03 PM
 */

#include "interfazProfesor.h"

interfazProfesor::interfazProfesor() {
}

string interfazProfesor::solicitarNombre() const{
    string nombre;
    cout<<" \nIngrese el nombre del profesor: "<< endl;
    cin>>nombre;
    return nombre;
}

string interfazProfesor::solicitarIdProfesor() const{
    string id;
    cout<<" \nIngrese el id del profesor: "<< endl;
    cin>>id;
    return id;
}

interfazProfesor::~interfazProfesor() {
}
int interfazProfesor::desplegarMenu() const{
    
}

