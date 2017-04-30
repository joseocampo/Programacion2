/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lista.cpp
 * Author: jose ocampo
 * 
 * Created on 21 de abril de 2017, 03:15 PM
 */

#include <sstream>
using namespace std;

#include "lista.h"
//IMPLEMETACION DE LA CLASE LISTA
lista::lista() : primero(NULL) {
}

int lista::numElementos() const {
    int r = 0;
    nodo* cursor = primero;
    while (cursor != NULL) {
        r++;
        cursor = cursor->siguiente();
    }
    return r;
}

void lista::agregarObjeto(objeto* obj) {
    if (primero == NULL) {
        primero = new nodo(NULL, obj);
    } else {
        nodo* cursor = primero;
        while (cursor->siguiente() != NULL) {
            cursor = cursor->siguiente();
        }
        cursor->fijarSiguiente(new nodo(NULL, obj));
    }
}

iterador* lista::obtenerIterador() const {
    return new iteradorLista(primero);
}

string lista::toString() const {
    stringstream r;
    
    nodo* cursor = primero;
    while (cursor != NULL) {
        r << cursor->info()->toString();
        if ((cursor = cursor->siguiente()) != NULL) {
            
        }
    }
    
    r << "}";
    return r.str();
}
void lista::eliminarObjeto(objeto* obj){
    nodo* anterior = NULL;
    nodo* cursor = primero;  
    while ( cursor &&  cursor->info() != obj){
        anterior=cursor;
        cursor = cursor->siguiente();         }
        if ( ! cursor  || cursor->info()  != obj){
//            system("cmd /c pause");
            
        return; }			
        else {   
            if( ! anterior)   {       
                 primero = cursor->siguiente();  }
            else{	
                anterior->fijarSiguiente(cursor->siguiente());}
        }
	delete cursor;
}
//IMPLEMETACION DE LA CLASE NODO
nodo::nodo(nodo* siguiente, objeto* info)
: _siguiente(siguiente), _info(info) {
}

nodo* nodo::siguiente() const {
    return _siguiente;
}

void nodo::fijarSiguiente(nodo* siguiente) {
    _siguiente = siguiente;
}

objeto* nodo::info() const {
    return _info;
}
//IMPLEMETACION DE LA CLASE ITERADORLISTA
iteradorLista::iteradorLista(nodo* primero) : cursor(primero) {
}

bool iteradorLista::masElementos() const {
    return (cursor != NULL);
}

objeto* iteradorLista::proximoElemento() {
    objeto* obj = cursor->info();
    cursor = cursor->siguiente();
    return obj;
}
