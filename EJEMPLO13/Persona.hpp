#include <iostream>
using namespace std;

class Persona
{
private:
	bool genero;
	int edad;
	char dni[10];

public:
	Persona(int edad);
	~Persona();
	void generarDNI();
	int getEdad();
	bool esMujer();
	void setEdad(int edad);
	void mostrar();
};


