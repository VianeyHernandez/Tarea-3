### Tarea 5
1. Solicion del primer problema. Falta: using namespace std;
2. Solicion del segundo problema. Salida: Hola mundo.
3. Solicion del tercer problema. Error: Los caracteres para poder ingresar en el arreglo, son muy pocos.
4. Solicion del cuarto problema. Salida: 13 es trece.
5. Solicion del quinto problema. Salida: a=8 y b=15
6. Solicion del sexto problema. Salida: 21
7. Solicion del septimo problema. Salida: a=6 y b=
8. Solicion del octavo problema. Salida: True.
9. Solicion del noveno problema. Salida: True & False.
10. Solicion del decimo problema. m, o.

#include <iostream>
[...]

#include <iostream>
using namespace std;

void main() {
	locale::global(locale("spanish"));
	int a;
	char b[50];

	cout << "Ingrese su edad:" << endl;
	cin >> a;
	cout << "Le voy a quitar 2 años." << endl;
	a = ----a;
	cout << "Ahora usted tiene " << a << ", de nada." << endl;

	cout << "¿Quisiera ser inmortal?. Gracias al intercambio equivalente eso es posible." << endl;
	cout << "Ahora ingrese algo que quisiese intercambiar por la inmortalidad: (Pueden ser objetos, cosas)" << endl;
	cin >> b;

	cout << "Usted ha intercambiado " << b << " por la inmortalidad." << endl;
	

	
	getchar;
	system("pause");
	
}
