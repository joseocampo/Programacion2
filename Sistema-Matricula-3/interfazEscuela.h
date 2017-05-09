/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazEscuela.h
 * Author: jose ocampo
 *
 * Created on 7 de mayo de 2017, 07:00 PM
 */

#ifndef INTERFAZESCUELA_H
#define INTERFAZESCUELA_H
#include"interfaz.h"
class interfazEscuela :public interfaz{
public:
    interfazEscuela();
    virtual string solicitarNombre() const;
    virtual int desplegarMenu() const;
    virtual ~interfazEscuela();
private:

};

#endif /* INTERFAZESCUELA_H */

