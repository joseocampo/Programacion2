/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   universidad.h
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 03:30 PM
 */

#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
//#include"lista.h"
//#include"objeto.h"
#include"escuela.h"
class universidad: public objeto  {
public:
    
    universidad(string="",string="",string="");
    universidad(const universidad&);
    universidad& operator=(const universidad&);
    virtual ~universidad();
    virtual void colocarTelefono(string);
    virtual void colocarDireccion(string);
    virtual string obtenerNombre() const;
    virtual string obtenerTelefono() const;
    virtual string obtenerDireccion() const;
    
    virtual string toString() const;
    virtual void asignarEscuelas(string);
    virtual string verEscuelas() const;
    virtual string verEscuelasSinDetalles() const;
    virtual string verEscuelasConCursos() const;
    virtual objeto* obtenerEscuela(string) const;
    
private:
    string _nombre;
    string _telefono;
    string _direccion;
    coleccion* listaEscuelas;
    // mas
    
};

#endif /* UNIVERSIDAD_H */

