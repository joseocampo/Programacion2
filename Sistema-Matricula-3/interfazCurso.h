/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazCurso.h
 * Author: jose ocampo
 *
 * Created on 7 de mayo de 2017, 07:01 PM
 */

#ifndef INTERFAZCURSO_H
#define INTERFAZCURSO_H
#include"interfaz.h"
class interfazCurso :public interfaz{
public:
    interfazCurso();
    virtual string solicitarNombre() const;
    virtual int desplegarMenu() const;
    virtual ~interfazCurso();
    
    virtual string solicitarSiglaCurso()const;
    virtual int solicitarCreditosCurso()const;
    virtual int solicitarNumeroGrupo()const;
    
private:

};

#endif /* INTERFAZCURSO_H */

