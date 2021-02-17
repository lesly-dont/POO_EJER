#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona{
 // atributos
 private : string nit;
 // constructor
 public:
 Cliente(){

 }

 Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){ 

 nit = n;

 }

// metodos
//set (modificar)
void setNit(string n){nit=n;}
void setNombres(string nom){nombres=nom;}
void setApellidos(string ape){apellidos=ape;}
void setDireccion(string dir){direccion=dir;}
void setTelefono(int tel){telefono=tel;}
//get (mostrar)
string getNit(string n){ return nit;}
string getNombres(string nom){ return nit;}
string getApellidos(string ape){ return nit;}
string getDireccion(string dir){ return nit;}
string getTelefono(string tel){ return nit;}
//metodo
void mostrar(){

	cout<<"______________________"<<endl;

	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;

}

};
