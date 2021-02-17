//Persona=nombre,apellido,direccion,telefono,fecha de nacimiento, dpi etc...
//Cliente=nit etc...
# include <iostream>
using namespace std;
class Persona{
	//atributos
	//metodos_protegido, privado, publico
	protected : string nombres,apellidos,direccion;
				int telefono;
	//constructor
	protected :
	  Persona(){	
	}
	Persona(string nom, string ape, string dir, int tel){
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		telefono=tel;
	}
	//metodos mostrar informacion
	void mostrar();
};
