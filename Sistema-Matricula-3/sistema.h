/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sistema.h
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 08:27 PM
 */

#ifndef SISTEMA_H
#define SISTEMA_H
#include"interfazUniversidad.h"
#include"interfazEscuela.h"
#include"interfazCurso.h"
#include"interfazProfesor.h"
#include"interfazSistema.h"
#include"universidad.h"
#include<Windows.h>
#include"matricula.h"

class sistema {
public:
    sistema();
    virtual ~sistema();
//    virtual void iniciarSistema() ;
    virtual void iniciar();
//    virtual void menuPrincipal();
    virtual void menuUniversidad();
    virtual void menuEscuela();
    virtual void menuCurso();
//    virtual void menuProfesor();

private:
    universidad *_universidad;
    interfaz *_interfazSistema;
    interfaz *_interfazUniversidad;
    interfaz *_interfazEscuela;
    interfaz *_interfazCurso;
    interfaz *_interfazProfesor;
    
    matricula *_matricula;
    

};

#endif /* SISTEMA_H */