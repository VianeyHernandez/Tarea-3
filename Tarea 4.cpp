#include <iostream>
#include <math.h>
using namespace std;

void main() {
	float radio, angulo, x, y;
	cout << "Introduce el radio:" << endl;
	cin >> radio;
	
	cout << "Introduce el angulo sexagesimal:" << endl;
	cin >> angulo;

	x = radio * (cos(angulo*3.14159 / 180));
	y = radio * (sin(angulo *2.0*3.14159 / 360));

	x = round(x);
	y = round(y);
	
	cout << "\nLas coordenadas (x, y) son: (" << x << ", " << y << ")" << endl;

	getchar();
	system("pause");
}