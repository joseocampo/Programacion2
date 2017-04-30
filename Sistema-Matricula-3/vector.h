/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vector.h
 * Author: jose ocampo
 *
 * Created on 29 de abril de 2017, 09:42 PM
 */

#ifndef VECTOR_H
#define VECTOR_H
#include"coleccion.h"

class vector;
class iteradorVector;
class vector : public coleccion {
public:
    vector();
    virtual int numElementos() const;
    virtual void agregarObjeto(objeto*);
    virtual iterador* obtenerIterador() const;
    virtual ~vector();
     virtual void eliminarObjeto(objeto*) ;
    virtual string toString() const;
    virtual int obtenerCantidad()const;
    static const int TAMANO;
private:
    objeto **_estudiantes;
    int _cantidad;

};


        
//DEFINICION DE LA CLASE ITERADORVECTOR
class iteradorVector : public iterador {
public:
    iteradorVector(objeto**);

    virtual bool masElementos() const;
    virtual objeto* proximoElemento();
    

private:
    int cursor;
    objeto **_arreglo;
};
#endif /* VECTOR_H */

