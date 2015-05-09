#include <iostream>

using namespace::std;
double GetNumeroPositivo();
double GetPerimetroRectangulo(double base, double altura);
void imprimBanner();

void imprimBanner()
{
	cout << "\t+-------------------------------------+" << endl;
	cout << "\t|Algoritmos y Estructuras de Datos    |" << endl;
	cout << "\t|UTN-FRBA-Curso K1051                 |" << endl;
	cout << "\t|TP No 5 - Perimetro de un rectangulo |" << endl;
	cout << "\t+-------------------------------------+\n\n" << endl;
	
}

double GetNumeroPositivo(){
	double x;
	
	do {
	cout << "Ingrese un numero real positivo: ";
	cin >> x;
		if (x > 0)
			return x;
		else
			cout << "Ingreso incorrecto. Por favor intente de nuevo.\n";
	} while (1 != 0);
}

double GetPerimetroRectangulo (double base, double altura){
	return (2 * (base + altura));
}

int main() {

imprimBanner();
cout << "Base del rectangulo. ";
double base = GetNumeroPositivo();
cout << "Altura del rectangulo. ";
double altura = GetNumeroPositivo();
cout << "El perimetro del rectangulo es: " << GetPerimetroRectangulo(base, altura);
}
