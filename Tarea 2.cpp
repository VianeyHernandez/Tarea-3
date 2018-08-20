#include <iostream>
using namespace std;

int main() {

	cout << "Nombre:" << endl;
	char nombre[20];
	cin >> nombre;

	cout << "Apellido:" << endl;
	char apellido[20];
	cin >> apellido;

	cout << "Edad:" << endl;
	int edad;
	cin >> edad;

	cout << "Telefono:" << endl;
	char telefono[10];
	cin >> telefono;

	cout << "Nombre: " << apellido << ", " << nombre << " .\n";
	cout << "Edad: " << edad << " anios.\n";
	cout << "Telefono: +52 " << telefono << ".\n";

	getchar();
	system("pause");
}
