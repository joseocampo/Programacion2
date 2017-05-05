/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   curso.h
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 04:02 PM
 */

#ifndef CURSO_H
#define CURSO_H
#include<iostream>
#include<sstream>
#include "objeto.h"
#include "lista.h"
#include "profesor.h"
#include"grupo.h"

using namespace std;
class curso : public objeto{
public:
    curso(string ="",string ="",int =0);
    virtual ~curso();
    virtual void asignarNombre(string);
    virtual void asignarCreditos(int);
    virtual string obtenerNombre() const;
    virtual string obtenerSigla() const;
    virtual int obtenerCreditos() const;
    virtual string toString() const;
//    virtual void asignarProfesor(objeto*);
//    virtual objeto* obtenerProfesor(string) const;
//    virtual string verProfesores()const;
//    virtual void eliminarProfesor(string);
    
    //estos metodos hacia abajo son pruebas
    virtual void agregarGrupo(int);
    virtual void asignarProfesorGrupo(objeto*,int);
//    virtual objeto* obtenerProfesor(string) const;
 
    virtual void asignarEstudianteGrupo(objeto*,int);
    virtual objeto* obtenerEstudiantePorId(string);
    virtual objeto* obtenerEstudiantePorCarnet(string);
    virtual bool grupoExistente(int);
    virtual string obtenerProfesoresDeCurso();
    virtual string obtenerProfesorGrupo()const;
    virtual objeto* obtenerGrupo(int);
    
    virtual string verGruposSinEstudiantes()const;
    virtual double pagoCreditos(string);
    virtual coleccion* obetenerColeccion() const;
    
    //metodos de david--------------------------
     virtual void desasignarProfesor(string);
     virtual string verProfesoresCurso()const;
    
private:
    string _nombre;
    string _sigla;
    int _creditos;
   //coleccion* listaProfesores; //NO IMPLEMENTAR
    coleccion *listaGrupos; //pruebas

};

#endif /* CURSO_H */
