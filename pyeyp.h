#include <iostream>
#include <cstdlib>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
public:
    Persona(string,int);
    void mostrarPersona();
};

Persona::Persona(string _nombre,int _edad)
{
    nombre=_nombre;
    edad=_edad;
}

void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<"\nEdad: "<<edad<<endl;
}

class Estudiante : public Persona
{
private:
    string codigo;
    float calificacion;
public:
    Estudiante(string,int,string,float);
    void mostrarEstudiante();
};

Estudiante::Estudiante(string _nombre,int _edad,string _codigo,float _calificacion):Persona(_nombre,_edad)
{
    codigo=_codigo;
    calificacion=_calificacion;
}

void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    cout<<"Codigo: "<<codigo<<"\ncalificacion: "<<calificacion<<endl;
}

class Profesor : public Persona
{
private:
    string titulo;
    int horas;
public:
    Profesor(string,int,string,int);
    void mostrarProfesor();
};

Profesor::Profesor(string _nombre,int _edad,string _titulo,int _horas):Persona(_nombre,_edad)
{
    titulo=_titulo;
    horas=_horas;
}

void Profesor::mostrarProfesor()
{
    mostrarPersona();
    cout<<"Titulo: "<<titulo<<"\nHoras: "<<horas<<endl;
}
