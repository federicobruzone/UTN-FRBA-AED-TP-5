#include <iostream>

using namespace::std;
double GetNumeroPositivo();
double GetPerimetroRectangulo(double base, double altura);

double GetNumeroPositivo(){
	double x;
	
	do {
	cout << "Ingrese un numero real positivo: ";
	cin >> x;
		if (x > 0)
			return x;
	} while (1 != 0);
}

double GetPerimetroRectangulo (double base, double altura){
	return (2 * (base + altura));
}

int main() {
cout << "Base del rectangulo. ";
double base = GetNumeroPositivo();
cout << "Altura del rectangulo. ";
double altura = GetNumeroPositivo();
cout << "El perimetro del rectangulo es: " << GetPerimetroRectangulo(base, altura);
}
