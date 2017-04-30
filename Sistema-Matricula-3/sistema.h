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
#include"interfaz.h"
#include"universidad.h"
#include<Windows.h>


class sistema {
public:
    sistema();
    virtual ~sistema();
    void iniciarSistema() ;

private:
    universidad *_universidad;
    interfaz *_interfaz;
    

};

#endif /* SISTEMA_H */