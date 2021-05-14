#include<iostream>

using namespace std;

class Animal// clases padre
{
	private:
		string especie;
		int peso;
	public:
		Animal(string, int);
		void mostrarAnimal();
};

Animal::Animal(string _especie, int _peso)// contructor de la clase padre
{
	especie = _especie;
	peso = _peso;
}

void Animal::mostrarAnimal() // funcion de la clase padre
{
	cout<<"Animal: "<<especie<<"\nPeso: "<<peso<<endl;
}

//clase hija

class Ave: public Animal
{
	private:
		string capVuelo;
		float alas;
	public:
		Ave(string, int, string, float);// primeros los de padre
		void mostrarAve();	
}; 

Ave::Ave(string _especie, int _peso, string _capVuelo, float _alas) : Animal(_especie, _peso)
{
	capVuelo = _capVuelo;
	alas = _alas;
}

void Ave::mostrarAve()
{
	mostrarAnimal();
	cout<<"capacidad de vuelo :"<<capVuelo<<"\nlongitud de alas: "<<alas<<endl;
}

int main ()
{  
	Ave A1("Aguila", 20,  " Si", 2.5);
	A1.mostrarAve();

}
