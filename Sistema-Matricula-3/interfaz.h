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
    virtual string solicitarNombre() const = 0;
    virtual int desplegarMenu() const = 0;
};

#endif /* INTERFAZ_H */



