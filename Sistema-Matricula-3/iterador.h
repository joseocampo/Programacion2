/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   iterador.h
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 03:15 PM
 */
#ifndef ITERADOR_H
#define ITERADOR_H
#include"objeto.h"
class iterador {
public:
    iterador();
    virtual bool masElementos() const = 0;
    virtual objeto* proximoElemento() = 0;
    
};

#endif /* ITERADOR_H */

