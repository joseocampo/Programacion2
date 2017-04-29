/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jose ocampo
 *
 * Created on 21 de abril de 2017, 03:14 PM
 */

#include <cstdlib>
#include"sistema.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//    universidad *uni = new universidad("UNA");
//    
//    
//    string nombre;
//    string nombreCurso,sigla;
//    for(int i=0; i<5; i++){
//        cout<<"INGRESE EL NOMBRE DE LA ESCUAL QUE DESEEA AGREAGAR: ";
//        cin>>nombre;
//        uni->asignarEscuelas(nombre);
//        
//    }
//    for(int i=0; i<5; i++){
//        escuela *aux;
//        objeto *auxiliar;
//        cout<<"INGRESE EL NOMBRE DE LA ESCUAL QUE DESEEA AGREAGAR UN CURSO: ";
//        cin>>nombre;
//        auxiliar = uni->obtenerEscuela(nombre);
//        aux = (escuela*)auxiliar;
//        if(aux){
//            cout<<"INGRESE NOMBRE DEL CURSO: ";
//            cin>>nombreCurso;
//            cout<<"INGRESE SIGLA DEL CURSO: ";
//            cin>>sigla;
//            aux->asignarCurso(sigla,nombreCurso);
//        }
//        
//    }
//    cout<<uni->verEscuelas();
//    cout<<uni->verEscuelasConCursos();
//    
//    cout<<uni->verEscuelasSinDetalles();
//    
//    
    sistema *sistema1 = new sistema();
    sistema1->iniciarSistema();
    
    

    return 0;
}
