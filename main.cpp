#include <iostream>
#include <cstdlib>
#include "pyeyp.h"

using namespace std;

int main()
{
    string tipo;
    string nombre;
    int edad;
for(int i=0;i<2;i++)
{
    cout<<"¿Es usted estudiante o profesor?\n";
    cin>>tipo;

    if(tipo=="estudiante")
    {
        string codigo;
        float calificacion;

        cout<<"ingrese su nombre: ";
        cin>>nombre;
        cout<<"ingrese su edad: ";
        cin>>edad;
        cout<<"ingrese su codigo: ";
        cin>>codigo;
        cout<<"ingrese su calificacion: ";
        cin>>calificacion;

        Estudiante E1(nombre,edad,codigo,calificacion);
 		cout<<"\nLos datos ingresados son:\n";
        E1.mostrarEstudiante();
    }
    else if(tipo=="profesor")
    {
        string titulo;
        int horas;

        cout<<"ingrese su nombre: ";
        cin>>nombre;
        cout<<"ingrese su edad: ";
        cin>>edad;
        cout<<"ingrese su titulo: ";
        cin>>titulo;
        cout<<"ingrese su horas: ";
        cin>>horas;

        Profesor P1(nombre,edad,titulo,horas);
        cout<<"\nLos datos ingresados son:\n";
		P1.mostrarProfesor();
    }
    else
    {
    cout<<"Por favor ingrese un tipo de persona valido\n";
    }
}
 system("pause");
    return 0;
}
