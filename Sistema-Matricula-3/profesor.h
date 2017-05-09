/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   profesor.h
 * Author: Admin
 *
 * Created on 27 de abril de 2017, 12:36 AM
 */

#ifndef PROFESOR_H
#define PROFESOR_H
#include "objeto.h"
#include "lista.h"
class curso;



class profesor :public objeto{
public:
    profesor(string = "", string = "");
    profesor(const profesor&);
    profesor& operator=(const profesor&);
    virtual ~profesor();
    virtual void asignarNombre(string);
    virtual string obtenerNombre();
    virtual void asignarId(string);
    virtual string obtenerId();
    virtual void asignarCurso(objeto*);
    virtual objeto* obtenerCurso(string) const;
    virtual string verCursos()const;
    virtual string toString() const;
    virtual void eliminarCurso(string);
private:
    string _nombre;
    string _cedula;
    
    coleccion* listaCursos;

};

#endif /* PROFESOR_H */

