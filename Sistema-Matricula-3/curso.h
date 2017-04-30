/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   curso.h
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 04:02 PM
 */

#ifndef CURSO_H
#define CURSO_H
#include<iostream>
#include<sstream>
//#include "objeto.h"
#include "lista.h"
//#include "profesor.h"
using namespace std;
class curso : public objeto{
public:
    curso(string ="",string ="",int =0);
    virtual ~curso();
    virtual void asignarNombre(string);
    virtual void asignarCreditos(int);
    virtual string obtenerNombre() const;
    virtual string obtenerSigla() const;
    virtual int obtenerCreditos() const;
    virtual string toString() const;
//    virtual void asignarProfesor(string,string);
//    virtual objeto* obtenerProfesor(string) const;
private:
    string _nombre;
    string _sigla;
    int _creditos;
    coleccion* listaProfesores;

};

#endif /* CURSO_H */
