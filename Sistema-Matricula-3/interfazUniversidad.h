/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazUniversidad.h
 * Author: jose ocampo
 *
 * Created on 7 de mayo de 2017, 06:54 PM
 */

#ifndef INTERFAZUNIVERSIDAD_H
#define INTERFAZUNIVERSIDAD_H
#include"interfaz.h"
class interfazUniversidad :public interfaz{
public:
    interfazUniversidad();
    virtual ~interfazUniversidad();
    virtual string solicitarNombre() const;
    virtual int desplegarMenu() const;
    
    virtual string solicitarTelefonoUniversidad() const;
    virtual string solicitarDireccionUniversidad() const;
    
    
    
private:

};

#endif /* INTERFAZUNIVERSIDAD_H */

