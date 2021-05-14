#include<iostream>

using namespace std;

class Persona// clases padre
{
	private:
		string nombre;
		int edad;
	public:
		Persona(string, int);
		void mostrarPersona();
};

Persona::Persona(string _nombre, int _edad)// contructor de la clase padre
{
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrarPersona() // funcion de la clase padre
{
	cout<<"Nombre: "<<nombre<<"\nEdad: "<<edad<<endl;
}

//clase hija

class Estudiante: public Persona
{
	private:
		string codigo;
		float notas;
	public:
		Estudiante(string, int, string, float);// primeros los de padre
		void mostrarEstudiante();	
}; 

Estudiante::Estudiante(string _nombre, int _edad, string _codigo, float _notas) : Persona(_nombre, _edad)
{
	codigo = _codigo;
	notas = _notas;
	
}

void Estudiante::mostrarEstudiante()
{
	mostrarPersona();
	cout<<"codigo :"<<codigo<<"\nnotas: "<<notas<<endl;
}

int main ()
{  
	Estudiante A1("pepito", 20 , "55555", 2.3);
	A1.mostrarEstudiante();
	cout<<"vago: Si";
}
