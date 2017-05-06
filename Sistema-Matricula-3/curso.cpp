/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   curso.cpp
 * Author: jose ocampo
 * 
 * Created on 21 de abril de 2017, 04:02 PM
 */

#include "curso.h"
#include "estudiante.h"
//#include "profesor.h"

curso::curso(string sigla,string nombre,int creditos):_sigla(sigla), _nombre(nombre),_creditos(creditos),
        listaGrupos(new lista()){ /*FIN DEL CONSTRUCTOR*/  }

void curso::asignarNombre(string nombre){this->_nombre = nombre;}
void curso::asignarCreditos(int numeroCreditos){this->_creditos = numeroCreditos;}

string curso::obtenerNombre()const {return this->_nombre;}
string curso::obtenerSigla()const {return this->_sigla;}
int curso::obtenerCreditos() const{return this->_creditos;}

string curso::toString() const{
    stringstream x;
    x<<"Curso: "<<this->_nombre<<endl;
    x<<"Sigla: "<<this->_sigla<<endl;
    x<<"Creditos: "<<this->_creditos<<endl<<endl;
    x<<"Profesor: "<<listaGrupos->toString()<<endl<<endl;
//    x<<"Profesores:\n "<<listaProfesores->toString()<<endl<<endl;
    return x.str();
    
}
coleccion* curso::obetenerColeccion() const{return this->listaGrupos;}

//void curso::asignarProfesor(objeto *_profesor){
////    objeto *objetoAuxiliar = dynamic_cast<objeto*>(_profesor);
//    listaProfesores->agregarObjeto(_profesor);   
//}

//objeto* curso::obtenerProfesor(string id)const{
//    iterador *ite = listaProfesores->obtenerIterador();
//    profesor *profesorAuxiliar = NULL;
//    while(ite->masElementos()){
//        profesorAuxiliar = dynamic_cast<profesor*>(ite->proximoElemento());
//        if(profesorAuxiliar){
//            if(profesorAuxiliar->obtenerId() == id){
//                return profesorAuxiliar;
//                
//            }
//        }
//    }
//    return NULL;
//}

//string curso::verProfesores() const{
//    stringstream x;
//    x<<"\n______________________________________________________\n";
//    x<<"\n\nProfesores Asociados a "<<_nombre<<endl;
////    x<<listaGrupos->toString()<<endl;
//     x<<listaGrupos->toString()<<endl;
//    x<<"\n______________________________________________________\n";
//    
//    return x.str();
//}


//void curso::eliminarProfesor(string _id){
//
// iterador *ite = listaProfesores->obtenerIterador();
// profesor *profeAuxiliar = NULL;
// objeto *objetoAuxiliar = NULL;
//    while(ite->masElementos()){
//        profeAuxiliar = dynamic_cast<profesor*>(ite->proximoElemento());
//        if(profeAuxiliar){
//            if(profeAuxiliar->obtenerId() == _id){
//                objetoAuxiliar = dynamic_cast<objeto*>(profeAuxiliar);
//                listaProfesores->eliminarObjeto(objetoAuxiliar);
//                
//            }
//        }
//    }
//
//
//}


curso::~curso() {
}

void curso::agregarGrupo(int numeroGrupo){
    objeto* grupoAuxiliar = new grupo(numeroGrupo);
    listaGrupos->agregarObjeto(grupoAuxiliar);
}

void curso::asignarProfesorGrupo(objeto* profe,int numeroGrupo ){
    
    agregarGrupo(numeroGrupo);
    //la linea anterior crea un grupo con su respectivo numero de grupo y lo agrega a la listaGrupos
    
    iterador *ite = listaGrupos->obtenerIterador();
    grupo *aux = NULL;
    while(ite->masElementos()){
        aux = (grupo*)ite->proximoElemento();
        if(aux){
            if(aux->obtenerNumeroGrupo() == numeroGrupo){
                aux->asignarProfe(profe);
            }
            //el if anterior verifica que el profesor se asigne al grupo que el usaurio eligio
        }
    }
}



//void curso::asignarEstudianteGrupo(objeto* estudianteX,int numeroGrupo){
//    iterador *ite = listaGrupos->obtenerIterador();
//    grupo *grupoAuxiliar = NULL;
//    while(ite->masElementos()){
//        grupoAuxiliar = (grupo*)ite->proximoElemento();
//        if(grupoAuxiliar){
//            if(grupoAuxiliar->obtenerNumeroGrupo() == numeroGrupo){
//                grupoAuxiliar->agregarEstudiante(estudianteX);
//            }
//            
//        }
//    }
//}

objeto* curso::obtenerEstudiantePorId(string cedula){
    iterador *ite = listaGrupos->obtenerIterador();
    grupo *grupoAuxiliar = NULL;
    objeto *objetoAuxiliar = NULL;
    while(ite->masElementos()){
        grupoAuxiliar = (grupo*)ite->proximoElemento();
        if(grupoAuxiliar){
            objetoAuxiliar = grupoAuxiliar->buscarEstudiantePorId(cedula);
            if( objetoAuxiliar ){
                return objetoAuxiliar;
            }
        }
    }
    return NULL;
    
}
objeto* curso::obtenerEstudiantePorCarnet(string carnet){
    iterador *ite = listaGrupos->obtenerIterador();
    grupo *grupoAuxiliar = NULL;
    objeto *objetoAuxiliar = NULL;
    while(ite->masElementos()){
        grupoAuxiliar = (grupo*)ite->proximoElemento();
        if(grupoAuxiliar){
            objetoAuxiliar = grupoAuxiliar->buscarEstudiantePorId(carnet);
            if( objetoAuxiliar ){
                return objetoAuxiliar;
            }
        }
    }
    return NULL;
    
}
bool curso::grupoExistente(int numeroGrupo){
    iterador *ite = listaGrupos->obtenerIterador();
    grupo *aux = NULL;
    while(ite->masElementos()){
        aux = (grupo*)ite->proximoElemento();
        if(aux){
            if(aux->obtenerNumeroGrupo() == numeroGrupo){
                return true;
            }
        }
    }
    return false;
}
string curso::obtenerProfesorGrupo() const{
     
}


string curso::obtenerProfesoresDeCurso(){
    stringstream x;
    iterador *ite = listaGrupos->obtenerIterador();
    grupo *grupoAuxiliar = NULL;
    while(ite->masElementos()){
        grupoAuxiliar = (grupo*)ite->proximoElemento();
        if(grupoAuxiliar){
            x<<grupoAuxiliar->obtenerProfe()->toString();
        }
    }
    
    
    return x.str();
}

objeto* curso::obtenerGrupo(int numeroGrupo){
    
    iterador *ite = listaGrupos->obtenerIterador();
    grupo *grupoAuxiliar = NULL;
    while(ite->masElementos()){
        grupoAuxiliar = (grupo*)ite->proximoElemento();
        if(grupoAuxiliar){
            if(grupoAuxiliar->obtenerNumeroGrupo() == numeroGrupo){
                return grupoAuxiliar;
            }
        }
    }
    return NULL;
}

string curso::verGruposSinEstudiantes() const{
    stringstream x;
    iterador *ite = listaGrupos->obtenerIterador();
    grupo *grupoAuxiliar = NULL;
    while(ite->masElementos()){
        grupoAuxiliar = (grupo*)ite->proximoElemento();
        if(grupoAuxiliar){
            grupoAuxiliar->verGruposSinEstudiantes();
        }
    }
    return x.str();
}

//double curso::pagoCreditos(string cedula){
//    double monto = 0;
//    
//    iterador *ite = listaGrupos->obtenerIterador();
//     
//    grupo *grupoAuxiliar = NULL;
//    objeto * estudianteAux = NULL;
//    while(ite->masElementos()){
//        grupoAuxiliar = (grupo*)ite->proximoElemento();
//        estudianteAux = grupoAuxiliar->buscarEstudiantePorId(cedula);
//        if(estudianteAux){
//            monto += ((estudiante*)estudianteAux)->calcularPagoCreditos();
//        }
//    }
//    return monto;
//}

void curso::desasignarProfesor(string _id){

 iterador *ite = listaGrupos->obtenerIterador();
 grupo *grupoAuxiliar = NULL;
 profesor *profeAuxiliar = NULL;
    while(ite->masElementos()){
        grupoAuxiliar = dynamic_cast<grupo*>(ite->proximoElemento());
        if(grupoAuxiliar){
             profeAuxiliar = dynamic_cast<profesor*>(grupoAuxiliar->obtenerProfe());
            if(profeAuxiliar->obtenerId() == _id){
               
                grupoAuxiliar->eliminarProfe();
                
            }
        }
    }


}

string curso::verProfesoresCurso() const{
    stringstream x;
    x<<"\n______________________________________________________\n";
    x<<"\n\nProfesores Asociados a "<<_nombre<<endl;
     iterador *ite = listaGrupos->obtenerIterador();
 grupo *grupoAuxiliar = NULL;
 profesor *profeAuxiliar = NULL;
    while(ite->masElementos()){
        grupoAuxiliar = dynamic_cast<grupo*>(ite->proximoElemento());
        if(grupoAuxiliar){
            profeAuxiliar = dynamic_cast<profesor*>(grupoAuxiliar->obtenerProfe());
            if(profeAuxiliar!=NULL){
          x<<profeAuxiliar->toString()<<endl<<endl;       
            }
        }
    }
    x<<"\n______________________________________________________\n";
    
    return x.str();
}
