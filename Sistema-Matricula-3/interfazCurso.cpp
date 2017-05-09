/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazCurso.cpp
 * Author: jose ocampo
 * 
 * Created on 7 de mayo de 2017, 07:01 PM
 */

#include "interfazCurso.h"

interfazCurso::interfazCurso() {
}
interfazCurso::~interfazCurso() {
}
string interfazCurso::solicitarNombre() const{
    string nombre;
    cout<<" \nIngrese el nombre del curso: "<< endl;
    cin>>nombre;
    return nombre;
}
string interfazCurso::solicitarSiglaCurso() const{
    string sigla;
    cout<<" \nIngrese la sigla del curso: "<< endl;
    cin>>sigla;
    return sigla;
}
int interfazCurso::solicitarCreditosCurso() const{
    int creditos;
    do{
    cout<<" \nIngrese la cantidad de creditos del curso: "<< endl;
    cin>>creditos;
    }while(creditos < 1 || creditos > 4);
    return creditos;
}
int interfazCurso::solicitarNumeroGrupo()  const{
    int numeroCurso;

    cout<<" \nIngrese el numero  del curso: "<< endl;
    cin>>numeroCurso;
    
    return numeroCurso;
}


int interfazCurso::desplegarMenu() const{
    int opcion=0;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout<<"\n\n"<<"     1)        REGISTRAR PROFESORES EN UNA ESCUELA ESPECIFICA"<<endl;
    cout<<"     2)      MODIFICAR DATOS DE UN PROFESOR ESPECIFICO"<<endl;
    cout<<"     3)      CONSULTAR UN PROFESOR DE UNA ESCUELA ESPECIFICA CON SU ID "<<endl;
    cout<<"     4)      CONSULTAR LISTA DE PROFESORES DE LA UNIVERSIDAD POR ESCUELAS"<<endl;
    cout<<"     5)      ASIGNAR UN PROFESOR A UN CURSO"<<endl;
    cout<<"     6)      DESASIGNAR UN PROFESOR A UN CURSO"<<endl;/////////////
    cout<<"     7)      VER LISTA DE PROFESORES DE UN CURSO"<<endl;
    cout<<"     8)      VER LISTA DE CURSOS DE UN PROFESOR"<<endl;
    cout<<"     9)      SALIR"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    
    cout<<"\n\n"<<"         Elije la opcion que desea realizar"<<endl;
    cin>>opcion;
    return opcion;
}