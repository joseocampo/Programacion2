/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   coleccion.h
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 03:15 PM
 */ 


#ifndef COLECCION_H
#define COLECCION_H
#include "iterador.h"

class coleccion{
public:
    coleccion();
    virtual int numElementos() const = 0;
    virtual void agregarObjeto(objeto*) = 0;
    virtual iterador* obtenerIterador() const = 0;
    virtual void eliminarObjeto(objeto*) =0;

    virtual string toString() const =0;
};



#endif /* COLECCION_H */

