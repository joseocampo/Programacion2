/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazUniversidad.cpp
 * Author: jose ocampo
 * 
 * Created on 7 de mayo de 2017, 06:54 PM
 */

#include "interfazUniversidad.h"

interfazUniversidad::interfazUniversidad() {
}
interfazUniversidad::~interfazUniversidad() {
}

string interfazUniversidad::solicitarNombre() const{
    string nombre;
    cout<<" \nIngrese el nombre de la Universidad: ";
    cin>>nombre;
    return nombre;
}
string interfazUniversidad::solicitarDireccionUniversidad() const{
    string direccion;
    cout<<" \nIngrese la direccion de la Universidad: "<< endl;
    cin>>direccion;
    return direccion;
}
string interfazUniversidad::solicitarTelefonoUniversidad() const{
    string telefono;
    cout<<" \nIngrese el telefono de la Universidad: "<< endl;
    cin>>telefono;
    return telefono;
    
}


int interfazUniversidad::desplegarMenu() const{
    int opcion=0;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<"\n\n"<<"     1)       INCLUIR DATOS DE LA UNIVERSIDAD"<<endl;
    cout<<"     2)       ACTUALIZAR DATOS DE LA UNIVERSIDAD"<<endl;
    cout<<"     3)       REGISTRAR ESCUELAS A LA UNIVERSIDAD"<<endl;
    cout<<"     4)       CONSULTAR LISTA DE ESCUELAS DE LA UNIVERSIDAD"<<endl;
    cout<<"     5)      REGRESAR A MENU PRINCIPAL"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    
    cout<<"\n\n"<<"         Elije la opcion que desea realizar"<<endl;
    cin>>opcion;
    return opcion;
}


