/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazSistema.cpp
 * Author: jose ocampo
 * 
 * Created on 7 de mayo de 2017, 07:20 PM
 */

#include "interfazSistema.h"


interfazSistema::interfazSistema() {
}

int interfazSistema::desplegarMenu() const{
    int opcion=0;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<"\n\n"<<"     1)      OPERACIONES UNIVERSIDAD"<<endl;
    cout<<"     2)      OPERACIONES ESCUELA"<<endl;
    cout<<"     3)      OPERACIONES CURSO "<<endl;
    cout<<"     4)      SALIR"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    
    cout<<"\n\n"<<"         Elije la opcion que desea realizar"<<endl;
    cin>>opcion;
    return opcion;
}







int interfazSistema::leerint() const{
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


interfazSistema::~interfazSistema() {
}

string interfazSistema::solicitarNombre() const {
    return "HOLA";

}
