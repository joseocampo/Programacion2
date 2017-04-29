/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   estudianteBecado.h
 * Author: jose ocampo
 *
 * Created on 28 de abril de 2017, 11:34 PM
 */

#ifndef ESTUDIANTEBECADO_H
#define ESTUDIANTEBECADO_H
#include"estudiante.h"
class estudianteBecado :public estudiante {
public:
    estudianteBecado(string,string,string,string,string,string,float);
   virtual double calcularPagoCreditos();
    virtual ~estudianteBecado();
private:

};

#endif /* ESTUDIANTEBECADO_H */

