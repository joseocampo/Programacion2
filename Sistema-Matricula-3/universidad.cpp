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
    
    objeto *escuelaAux = NULL;
     
    _nombre = copia._nombre;
    _direccion = copia._direccion;
    _telefono = copia._telefono;
    listaEscuelas = new lista();
    
    coleccion *escuelas = copia.listaEscuelas; 
    //recorremos la lista copia y agregar el contenido a la nueva lista local
    iterador *ite = escuelas->obtenerIterador();
    while(ite->masElementos()){
        escuelaAux = new escuela(  *((escuela*)ite->proximoElemento())  );
        listaEscuelas->agregarObjeto(escuelaAux );
    }
    
    //eliminamos el puntero del iterador
    delete ite;
}

universidad& universidad::operator =(const universidad& otra){
    
    //verificamos que las universidades no tengan el mismo contenido
    if(this != &otra){
        
        //liberamos el espacio d memoria de cada nodo
        iterador *iteradorLocal = listaEscuelas->obtenerIterador();
        
        while(iteradorLocal->masElementos()){
            delete iteradorLocal->proximoElemento();
            
        }
        delete iteradorLocal;
        delete listaEscuelas;
        
        
        
        //ahora modificamos el contenido
        _nombre = otra._nombre;
        _direccion = otra._direccion;
        _telefono = otra._telefono;
        listaEscuelas = new lista();
        
        coleccion *escuelasAux = otra.listaEscuelas;
        objeto *escuelaAuxiliar = NULL;
        iterador *iteradorEscuelas = escuelasAux->obtenerIterador();
        while(iteradorEscuelas->masElementos()){
            escuelaAuxiliar= new escuela(  *((escuela*)iteradorEscuelas->proximoElemento())  );
            listaEscuelas->agregarObjeto(escuelaAuxiliar);
        }
    }
    //retornar la instancia local
    return *this;
}

universidad::~universidad() {
    iterador *iteradorEscuelas = listaEscuelas->obtenerIterador();
    while(iteradorEscuelas->masElementos()){
        delete iteradorEscuelas->proximoElemento();
    }
    delete iteradorEscuelas;
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


void universidad::asignarEscuelas(string nombre){ 

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
    escuela *e1 = NULL;
    while(ite->masElementos()){
        e1 = (escuela*)ite->proximoElemento();
        if(e1){
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
