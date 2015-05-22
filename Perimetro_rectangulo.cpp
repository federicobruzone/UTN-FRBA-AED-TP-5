/* UTN-FRBA-AED
 * TP Nº 5: Perimetro de un rectangulo
 * Alumno: Federico León Bruzone [155-683.6] 
 * Fecha: 09/05/2015
*/ 

#include <iostream>

double GetNumeroPositivo();
double GetPerimetroRectangulo(double base, double altura);
void imprimBanner();

using namespace::std;

void imprimBanner()
{
	cout << "\t+-------------------------------------+" << endl;
	cout << "\t|Algoritmos y Estructuras de Datos    |" << endl;
	cout << "\t|UTN-FRBA-Curso K1051                 |" << endl;
	cout << "\t|TP No 5 - Perimetro de un rectangulo |" << endl;
	cout << "\t+-------------------------------------+\n\n" << endl;
	
}

int main() {

imprimBanner(); //Imprime un banner en pantalla con información acerca del programa
cout << "Base del rectangulo. ";
double base = GetNumeroPositivo(); 	//Esta función asegura que la funcion GetPerimetroREctangulo reciba double
cout << "Altura del rectangulo. ";	// como parametro
double altura = GetNumeroPositivo();
cout << "El perimetro del rectangulo es: " << GetPerimetroRectangulo(base, altura);
}

double GetNumeroPositivo(){
	double x;
	
	do { // El método de esta función se ejecuta en un loop infinito
	cout << "Ingrese un numero real positivo: "; 	//Es una precondicion que el usuario ingrese numeros
	cin >> x;					//y no caracteres.
		if (x > 0.0)
			return x;
		else
			cout << "Ingreso incorrecto. Por favor intente de nuevo.\n";
	} while (1 != 0);
}

double GetPerimetroRectangulo (double base, double altura){
	return (2 * (base + altura));
}
