/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   matricula.h
 * Author: jose ocampo
 *
 * Created on 5 de mayo de 2017, 02:32 PM
 */

#ifndef MATRICULA_H
#define MATRICULA_H
#include"curso.h"
#include "estudianteBecado.h"
#include "estudianteNoBecado.h"
class matricula {
public:
    matricula();
    virtual ~matricula();
    virtual void matricularEstudiante(curso*,estudiante*,int);
    virtual double pagoCreditos();
    
private:

};

#endif /* MATRICULA_H */

