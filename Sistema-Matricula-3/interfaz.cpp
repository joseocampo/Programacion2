/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfaz.cpp
 * Author: jose ocampo
 * 
 * Created on 21 de abril de 2017, 08:26 PM
 */

#include "interfaz.h"

interfaz::interfaz() {
}
interfaz::~interfaz() {
}
string interfaz::solicitarNombreUniversidad() const{
    string nombre;
    cout<<" \nIngrese el nombre de la Universidad: ";
    cin>>nombre;
    return nombre;
}
string interfaz::solicitarDireccionUniversidad() const{
    string direccion;
    cout<<" \nIngrese la direccion de la Universidad: "<< endl;
    cin>>direccion;
    return direccion;
}
string interfaz::solicitarTelefonoUniversidad() const{
    string telefono;
    cout<<" \nIngrese el telefono de la Universidad: "<< endl;
    cin>>telefono;
    return telefono;
    
}
string interfaz::solicitarNombreEscuela() const{
    string nombre;
    cout<<" \nIngrese el nombre de la Escuela: "<< endl;
    cin>>nombre;
    return nombre;
}
string interfaz::solicitarNombreCurso() const{
    string nombre;
    cout<<" \nIngrese el nombre del curso: "<< endl;
    cin>>nombre;
    return nombre;
}
string interfaz::solicitarSiglaCurso() const{
    string sigla;
    cout<<" \nIngrese la sigla del curso: "<< endl;
    cin>>sigla;
    return sigla;
}

string interfaz::desplegarMensajeBienvenida()const{
    stringstream x;
    x<<"    \nBIENVENIDOS AL SISTEMA DE MATRICULA\n";
    
    return x.str();
}

string interfaz::solicitarNombreProfesor() const{
    string nombre;
    cout<<" \nIngrese el nombre del profesor: "<< endl;
    cin>>nombre;
    return nombre;
}

string interfaz::solicitarIdProfesor() const{
    string id;
    cout<<" \nIngrese el id del profesor: "<< endl;
    cin>>id;
    return id;
}
int interfaz::solicitarCreditosCurso() const{
    int creditos;
    do{
    cout<<" \nIngrese la cantidad de creditos del curso: "<< endl;
    cin>>creditos;
    }while(creditos < 1 || creditos > 4);
    return creditos;
}
int interfaz::solicitarNumeroCurso()  const{
    int numeroCurso;

    cout<<" \nIngrese el numero  del curso: "<< endl;
    cin>>numeroCurso;
    
    return numeroCurso;
}


int interfaz::desplegarMenuPrincipal() const{
    int opcion=0;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<"\n\n"<<"     1)       INCLUIR DATOS DE LA UNIVERSIDAD"<<endl;
    cout<<"     2)       ACTUALIZAR DATOS DE LA UNIVERSIDAD"<<endl;
    cout<<"     3)       REGISTRAR ESCUELAS A LA UNIVERSIDAD"<<endl;
    cout<<"     4)       CONSULTAR LISTA DE ESCUELAS DE LA UNIVERSIDAD"<<endl;
    cout<<"     5)       REGISTRAR CURSOS EN UNA ESCUELA ESPECIFICA"<<endl;
    cout<<"     6)       CONSULTAR LISTA DE CURSOS DE LA UNIVERSIDAD POR ESCUELAS"<<endl;
    cout<<"     7)       VER TODOS LOS CURSOS IMPARTIDOS POR LA UNIVERSIDAD"<<endl;
    cout<<"     8)       RECUPERAR LOS DATOS DE UN CURSO"<<endl;
    cout<<"     9)       MODIFICAR DATOS DE UN CURSO"<<endl;
    cout<<"     10)      ELIMINAR UN CURSO DE UNA ESCUELA ESPECIFICA"<<endl;
    cout<<"     11)      REGISTRAR PROFESORES EN UNA ESCUELA ESPECIFICA"<<endl;
    cout<<"     12)      MODIFICAR EL NOMBRE DE UN PROFESOR ESPECIFICO"<<endl;
    cout<<"     13)      CONSULTAR UN PROFESOR DE UNA ESCUELA ESPECIFICA CON SU ID "<<endl;
    cout<<"     14)      CONSULTAR LISTA DE PROFESORES DE LA UNIVERSIDAD POR ESCUELAS"<<endl;
    cout<<"     15)      ASIGNAR UN PROFESOR A UN CURSO"<<endl;
    cout<<"     16)      DESASIGNAR UN PROFESOR A UN CURSO"<<endl;/////////////
    cout<<"     17)      INGRESAR ESTUDIANTES A UN CURSO"<<endl;
    cout<<"     18)      VER LISTA DE PROFESORES DE UN CURSO"<<endl;
    cout<<"     19)      VER LISTA DE CURSOS DE UN PROFESOR"<<endl;
    cout<<"     20)      MODIFICAR DATOS BASICOS DE UN ESTUDIANTE"<<endl;
    cout<<"     21)      SALIR"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    
    cout<<"\n\n"<<"         Elije la opcion que desea realizar"<<endl;
    cin>>opcion;
    return opcion;
}

int interfaz::leerint() const{
	int num;
	if (cin >> num)
	return num;
	cout << "No es un numero\nIntente de Nuevo\n";
	system("cmd /c pause");
	system("cmd /c cls");
	cin.clear();
	cin.ignore();
	return leerint();
}
