#include <iostream>
using namespace std;

int main() {

	cout << "Introduce un numero natural:" << endl;
	int n;
	cin >> n;

	while (n <= 0) {
		cout << "Los numeros naturales no tienen decimales, no son fraccionarios y\n";
		cout << "se encuentran siempre a la derecha del cero en la recta real y son infinitos porque\n";
		cout << "incluyen a todos los elementos de una sucesión, es decir, 1, 2, 3, 4, 5, 6, 7, etc\n";
		cout << "Ingresa un numero correcto:\n";
		cin >> n;
	}
	int s;
	s = n * (n + 1) / 2;
	cout << "La suma de los n primeros numeros naturales es:" << s << endl;

	getchar();
	system("pause");
}
