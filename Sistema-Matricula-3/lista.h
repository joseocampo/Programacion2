/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lista.h
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 03:15 PM
 */

#ifndef LISTA_H
#define LISTA_H

#include "coleccion.h"

class lista;
class nodo;
class iteradorLista;



//DEFINICION DE LA CLASE LISTA
class lista : public coleccion {
public:
    lista();

    virtual int numElementos() const;
    virtual void agregarObjeto(objeto*);
    virtual iterador* obtenerIterador() const;
    virtual void eliminarObjeto(objeto*);
    virtual string toString() const;

private:
    nodo* primero;
};
//DEFINICION DE LA CLASE NODO
class nodo {
public:
    nodo(nodo*, objeto*);
    virtual nodo* siguiente() const;
    virtual void fijarSiguiente(nodo*);
    virtual objeto* info() const;
    
private:
    nodo* _siguiente;
    objeto* _info;
};
//DEFINICION DE LA CLASE ITERADORLISTA
class iteradorLista : public iterador {
public:
    iteradorLista(nodo*);

    virtual bool masElementos() const;
    virtual objeto* proximoElemento();
    

private:
    nodo* cursor;
};


#endif /* LISTA_H */

