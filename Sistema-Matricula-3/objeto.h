/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   objeto.h
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 03:15 PM
 */

#ifndef OBJETO_H
#define OBJETO_H
#include<iostream>
#include<sstream>
using namespace std;
class objeto {
public:
    objeto();
    virtual ~objeto();
    virtual string toString() const = 0; 
private:

};

#endif /* OBJETO_H */

