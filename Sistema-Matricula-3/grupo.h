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
#include"vector.h"

class grupo :public objeto{
public:
    grupo(int);
    grupo(const grupo&);
//    grupo& operator=(const grupo&);
    virtual ~grupo();
    
    virtual void agregarEstudiante(objeto*);
    virtual void asignarProfe(objeto*);
    virtual objeto* obtenerProfe() const;
    
    virtual string toString()const;
    virtual string verGruposSinEstudiantes()const;
    virtual objeto* buscarEstudiantePorId(string);
//    virtual objeto* buscarEstudiantePorCarnet(string);
    virtual int obtenerNumeroGrupo()const;
    virtual void eliminarProfe();
    
    
private:
    coleccion* _arreglo;
    int _numeroGrupo;
    objeto* _profesorGrupo;
    

};

#endif /* GRUPO_H */

