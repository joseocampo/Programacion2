/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   estudiante.h
 * Author: jose ocampo
 *
 * Created on 28 de abril de 2017, 11:30 PM
 */

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include"objeto.h"
#include"curso.h"
class estudiante :public objeto{
public:
    estudiante(string,string,string,string,string,string,float);
    virtual ~estudiante();
    virtual long calcularPagoCreditos() = 0;
    virtual string toString()const ;
    
    virtual string obtenerNombre()const;

    virtual string obtenerCedula()const;
    virtual string obtenerCarnet()const;
    virtual string obtenerNacionalidad()const;
    virtual float obtenerPorcentajeBeca()const;
    
    virtual void asignarNombre(string);
    virtual void asignarApellido1(string);
    virtual void asignarApellido2(string);
    virtual void asignarNacionalidad(string);
    virtual void asignarPorcentajeBeca(float);
    
    virtual void asignarCurso(objeto*) = 0;
    
    
    
//    virtual void asignarCedula(string);
//    virtual void asignarCarnet(string);
//    virtual string obtenerApellido1()const;
//    virtual string obtenerApellido2()const;
    
protected:
    string _nombre;
    string _apellido1;
    string _apellido2;
    string _cedula;
    string _carnet;
    string _nacionalidad;
    float _porcentajeBeca;
    coleccion *listaCursos;
    
   

};

#endif /* ESTUDIANTE_H */

