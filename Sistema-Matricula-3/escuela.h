/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   escuela.h
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 03:37 PM
 */
 

#ifndef ESCUELA_H
#define ESCUELA_H
//#include"lista.h"
#include"curso.h"
class escuela : public objeto{
public:
    
    escuela(string="");
    virtual ~escuela();
    escuela(const escuela&);
    escuela& operator=(const escuela&);
    virtual string obtenerNombre() const;
    virtual string toString() const;
    virtual void asignarCurso(string,string);
    virtual string verCursos()const;
    virtual string verCursosSinDetalles()const;
    virtual objeto* obtenerCurso(string) const;
    virtual void eliminarCurso(objeto*);
    virtual void asignarProfesor(string,string);
    virtual objeto* buscarProfesorPorCedula(string) const;
    virtual string verProfesores()const;
    
private:
     string  _nombre;
     coleccion*  listaCursos;
     coleccion *  listaProfesores;
     
};



#endif /* ESCUELA_H */
