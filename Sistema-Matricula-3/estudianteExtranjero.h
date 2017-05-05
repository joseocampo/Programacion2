/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   estudianteExtranjero.h
 * Author: jose ocampo
 *
 * Created on 3 de mayo de 2017, 04:42 PM
 */

#ifndef ESTUDIANTEEXTRANJERO_H
#define ESTUDIANTEEXTRANJERO_H
#include"estudiante.h"
class estudianteExtranjero : public estudiante{
public:
    estudianteExtranjero(string,string,string,string,string,string,float);

    virtual ~estudianteExtranjero();
private:

};

#endif /* ESTUDIANTEEXTRANJERO_H */

