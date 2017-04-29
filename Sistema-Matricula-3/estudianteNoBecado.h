/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   estudianteNoBecado.h
 * Author: jose ocampo
 *
 * Created on 28 de abril de 2017, 11:35 PM
 */

#ifndef ESTUDIANTENOBECADO_H
#define ESTUDIANTENOBECADO_H
#include"estudiante.h"
class estudianteNoBecado :public estudiante {
public:
    estudianteNoBecado(string,string,string,string,string,string,float);
    virtual double calcularPagoCreditos();
    virtual ~estudianteNoBecado();
private:

};

#endif /* ESTUDIANTENOBECADO_H */

