/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   grupo.cpp
 * Author: jose ocampo
 * 
 * Created on 30 de abril de 2017, 12:53 AM
 */

#include "grupo.h"
#include "coleccion.h"
#include "estudianteNacional.h"

grupo::grupo(int numGrupo):_numeroGrupo(numGrupo),_arreglo(new vector()){
    
    
    
    
    
}
grupo::grupo(const grupo& copia){
    _profesorGrupo = copia._profesorGrupo;
    _numeroGrupo = copia._numeroGrupo;
    _arreglo = new vector();
    
    coleccion *gruposAux = copia._arreglo;
    iterador *iteradorGrupos = gruposAux->obtenerIterador();
    objeto *estudianteAux = NULL;
    while(iteradorGrupos->masElementos()){
      
    }
}



void grupo::agregarEstudiante(objeto* estudianteX){
    _arreglo->agregarObjeto(estudianteX);
     
}
void grupo::eliminarProfe(){
    
//       ((profesor*)_profesorGrupo)->eliminarDatosBasicos();
    
    _profesorGrupo = NULL;
    
}
void grupo::asignarProfe(objeto* profe){
    this->_profesorGrupo = profe;
}
objeto* grupo::obtenerProfe() const{
    return this->_profesorGrupo;  //retorna el puntero del profesosr del grupo
} 


grupo::~grupo() {
}
string grupo::toString() const{
    stringstream x;
    x<<"Grupo #"<<_numeroGrupo<<endl;
    x<<_profesorGrupo->toString();
//    x<<"Estudiantes: \n"<<_arreglo->toString();
    
    return x.str();
}

string grupo::verGruposSinEstudiantes() const{
    stringstream x;
    x<<"Grupo #"<<_numeroGrupo<<endl;
    x<<"Profesor: "<<_profesorGrupo->toString();
    
    return x.str();
}
int grupo::obtenerNumeroGrupo() const{return this->_numeroGrupo;  }

objeto* grupo::buscarEstudiantePorId(string cedula){
    iterador *ite = _arreglo->obtenerIterador();
    estudiante* estudianteAux = NULL;
    
    while(ite->masElementos()){
        estudianteAux = (estudiante*)ite->proximoElemento();
        if(estudianteAux){
            if(estudianteAux->obtenerCedula() == cedula){
                return estudianteAux;
            }
        }
   
    }
    return NULL;
    
}

//objeto* grupo::buscarEstudiantePorCarnet(string carnet){
//    iterador *ite = _arreglo->obtenerIterador();
//    estudianteNacional* estudianteAux = NULL;
//    
//    while(ite->masElementos()){
//        estudianteAux = (estudiante*)ite->proximoElemento();
//        
//        if(estudianteAux){
//            if(estudianteAux->obtenerCarnet() == carnet){
//                return estudianteAux;
//            }
//        }
//   
//    }
//    return NULL;
//    
//}

