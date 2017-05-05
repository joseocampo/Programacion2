/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfaz.h
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 08:26 PM
 */

#ifndef INTERFAZ_H
#define INTERFAZ_H
#include<iostream>
#include<sstream>
#include<Windows.h>
using namespace std;
class interfaz {
    
public:
    
    interfaz();
    virtual ~interfaz();
    string solicitarNombreUniversidad() const;
    string solicitarNombreEscuela() const;
    string solicitarTelefonoUniversidad() const;
    string solicitarDireccionUniversidad() const;
    string desplegarMensajeBienvenida() const;
    string solicitarNombreCurso()const;
    string solicitarSiglaCurso()const;
    int solicitarCreditosCurso()const;
    string solicitarNombreProfesor() const;
    string solicitarIdProfesor() const;
    int solicitarNumeroCurso()const;
    int desplegarMenuPrincipal() const;
    int leerint()const;
private:

};

#endif /* INTERFAZ_H */



