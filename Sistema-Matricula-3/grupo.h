/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   grupo.h
 * Author: jose ocampo
 *
 * Created on 30 de abril de 2017, 12:53 AM
 */

#ifndef GRUPO_H
#define GRUPO_H

#include"coleccion.h"
class grupo :public objeto{
public:
    grupo();
    virtual ~grupo();
    virtual void agregarEstudiante(objeto*);
    
private:
    coleccion** _arreglo;
    

};

#endif /* GRUPO_H */

