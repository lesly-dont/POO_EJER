#include "Cliente.cpp"
#include <iostream>
using namespace std;

main(){
	string nit,nombres,apellidos,direccion,sueldo,puesto, codigo_empleado;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	// instanciar un objeto

	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);

	obj.mostrar();

	cout<<"Ingrese Nit: ";

	cin>>nit;

	obj.setNit(nit);

	obj.mostrar();
	




system("PAUSE");
}
