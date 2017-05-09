/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazEscuela.cpp
 * Author: jose ocampo
 * 
 * Created on 7 de mayo de 2017, 07:00 PM
 */

#include "interfazEscuela.h"

interfazEscuela::interfazEscuela() {
}
interfazEscuela::~interfazEscuela() {
}
string interfazEscuela::solicitarNombre() const{
    string nombre;
    cout<<" \nIngrese el nombre de la Escuela: ";
    cin>>nombre;
    return nombre;
}



int interfazEscuela::desplegarMenu() const{
    int opcion=0;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<"\n\n"<<"     1)       REGISTRAR CURSOS EN UNA ESCUELA ESPECIFICA"<<endl;
    cout<<"     2)       CONSULTAR LISTA DE CURSOS DE LA UNIVERSIDAD POR ESCUELAS"<<endl;
    cout<<"     3)        VER TODOS LOS CURSOS IMPARTIDOS POR LA UNIVERSIDAD"<<endl;
    cout<<"     4)       RECUPERAR LOS DATOS DE UN CURSO"<<endl;
    cout<<"     5)       MODIFICAR DATOS DE UN CURSO"<<endl;
    cout<<"     6)       ELIMINAR UN CURSO DE UNA ESCUELA ESPECIFICA"<<endl;
    cout<<"     7)      REGRESAR A MENU PRINCIPAL"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    
    cout<<"\n\n"<<"         Elije la opcion que desea realizar"<<endl;
    cin>>opcion;
    return opcion;
}