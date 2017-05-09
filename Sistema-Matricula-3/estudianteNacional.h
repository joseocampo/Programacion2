/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nacional.h
 * Author: jose ocampo
 *
 * Created on 3 de mayo de 2017, 04:29 PM
 */

#include"estudiante.h"
#ifndef     ESTUDIANTENACIONAL_H
#define ESTUDIANTENACIONAL_H

class estudianteNacional : public estudiante {
   
public:
    estudianteNacional(string,string,string,string,string,string,float,bool);
//    estudianteNacional(const estudianteNacional&);
    estudianteNacional& operator=(const estudianteNacional&);
    virtual ~estudianteNacional();
    virtual void asignarCurso(objeto*);
    virtual long calcularPagoCreditos();
    virtual float obtenerPorcentajeBeca()const;
    virtual string toString() const;
//    virtual bool verificarPoseeBeca()const;
private:
    float _porcentajeBeca;
    bool _poseeBeca;
        
};

#endif /* ESTUDIANTENACIONAL_H */

