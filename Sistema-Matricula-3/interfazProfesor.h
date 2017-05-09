/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazProfesor.h
 * Author: jose ocampo
 *
 * Created on 7 de mayo de 2017, 07:03 PM
 */

#ifndef INTERFAZPROFESOR_H
#define INTERFAZPROFESOR_H
#include"interfaz.h"
class interfazProfesor :public interfaz{
public:
    interfazProfesor();
    virtual string solicitarNombre() const;
    virtual int desplegarMenu() const;
    virtual ~interfazProfesor();
    
    virtual string solicitarIdProfesor() const;

private:

};

#endif /* INTERFAZPROFESOR_H */

