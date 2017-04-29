/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   universidad.cpp
 * Author: jose ocampo
 * 
 * Created on 21 de abril de 2017, 03:30 PM
 */

#include "universidad.h"


universidad::universidad(string nombre,string telefono,string direccion):_nombre(nombre),_telefono(telefono),_direccion(direccion),listaEscuelas(new lista()) 
{
    
     
}
universidad::universidad(const universidad& copia){
    
     objeto *auxiliar = NULL;
    
     
     
    _nombre = copia._nombre;
    _direccion = copia._direccion;
    _telefono = copia._telefono;
    listaEscuelas = new lista();
    
    coleccion *escuelas = copia.listaEscuelas; // ESTA LINEA DE CODIGO ES PARA EVITAR EL ENCADENAMIENTO
    
    iterador *ite = escuelas->obtenerIterador();
    while(ite->masElementos()){
        auxiliar = ite->proximoElemento();
        listaEscuelas->agregarObjeto(new escuela(   *((escuela*)auxiliar)  )  );
    }
    //recorrer la lista copia y agregar el contenido a la nueva lsita
    //crear escuela con el constructor de copia
    delete ite;
}

universidad& universidad::operator =(const universidad& otra){
    if(this != &otra){
        _nombre = otra._nombre;
        _direccion = otra._direccion;
        _telefono = otra._telefono;
        listaEscuelas = new lista();
        iterador *ite = otra.listaEscuelas->obtenerIterador();
        while(ite->masElementos()){
            escuela *auxiliar = (escuela*)ite->proximoElemento();
            otra.listaEscuelas->agregarObjeto(new escuela(auxiliar->obtenerNombre()));
        }
    }
    return *this;
}

universidad::~universidad() {
    delete listaEscuelas;
}
void universidad::colocarDireccion(string direccion){this->_direccion = direccion;}
void universidad::colocarTelefono(string telefono){this->_telefono = telefono;}
string universidad::obtenerDireccion() const{return this->_direccion;}
string universidad::obtenerNombre() const {return this->_nombre;}
string universidad::obtenerTelefono() const{return this->_telefono;}
string universidad::toString()const{
    stringstream x;
    x<<"\n****************************************\n";
    x<<"Universidad: "<<_nombre<<endl;
    x<<"Telefono: "<<_telefono<<endl;
    x<<"Direccion: "<<_direccion<<endl;
    x<<"\n****************************************\n";
    
    return x.str();
}


void universidad::asignarEscuelas(string nombre)
{ 

    objeto* _escuela = new escuela(nombre);
    listaEscuelas->agregarObjeto(_escuela);
}
string universidad::verEscuelas() const{
    stringstream x;
    x<<"Universidad: \n"<<universidad::toString()<<endl<<endl<<endl;
    x<<"ESCUELAS ASOCIADAS A LA UNIVERSIDAD:\n\n"<<listaEscuelas->toString();
    
    return x.str();
}
string universidad::verEscuelasSinDetalles() const{
    stringstream x;
    x<<listaEscuelas->toString();
    return x.str();
    
    
}
string universidad::verEscuelasConCursos() const{
    stringstream x;
    x<<"Universidad: \n"<<universidad::toString()<<endl<<endl<<endl;
    iterador *ite = listaEscuelas->obtenerIterador();
    
    while(ite->masElementos()){
        escuela *e1 = dynamic_cast<escuela*>(ite->proximoElemento());
        if(e1 != 0){
            x<<e1->verCursos();
        }
    }
    return x.str();
}

objeto* universidad::obtenerEscuela(string nombre)const{
    iterador *ite = listaEscuelas->obtenerIterador();
    escuela *escuelaAuxiliar = NULL;
    while(ite->masElementos()){
        escuelaAuxiliar = dynamic_cast<escuela*>(ite->proximoElemento());
        if(escuelaAuxiliar){
            if(escuelaAuxiliar->obtenerNombre() == nombre){
                return escuelaAuxiliar;
                
            }
        }
    }
    return NULL;
    
}
