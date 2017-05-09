/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazSistema.h
 * Author: jose ocampo
 *
 * Created on 7 de mayo de 2017, 07:20 PM
 */

#ifndef INTERFAZSISTEMA_H
#define INTERFAZSISTEMA_H
#include"interfaz.h"
class interfazSistema :public interfaz{
public:
    interfazSistema();
    virtual int desplegarMenu() const;
    virtual int leerint()const;
    virtual ~interfazSistema();
    
     virtual string solicitarNombre() const ;
    
private:

};

#endif /* INTERFAZSISTEMA_H */

