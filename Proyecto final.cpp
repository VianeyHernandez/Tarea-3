#include <iostream>

using namespace std;

int main() {

	char opcion = '0';

	cout << "Lista de alumnos";
	cout << "Eliga una de las siguientes opciones";

	while (opcion != '1' && opcion != '2' && opcion != '3' && opcion != '4' && opcion != '5' && opcion != '6' && opcion != '7')
	{
		cout << "Opcion 1. Alta de Alumnos.";
		cout << "Opcion 2. Alta de Calificaciones.";
		cout << "Opcion 3. Edicion de Alumnos.";
		cout << "Opcion 4. Borrar Alumno.";
		cout << "Opcion 5. Manual de Usuario.";
		cout << "Opcion 6. Lista de Alumnos y Calificaciones.";
		cout << "Opcion 7. Salir.";
		opcion = getchar();

		switch (opcion) {
			case '1':
				cout << "Alta de Alumnos.";
				break;

			case '2':
				cout << "Alta de Calificaciones.";
				break;

			case '3':
				cout << "Edicion de Alumnos.";
				break;

			case '4':
				cout << "Borrar Alumno";
				break;

			case '5':
				cout << "Manual de Usuario.";
				break;

			case '6':
				cout << "Lista de Alumnos y Calificaciones.";
				break;

			case '7':
				cout << "Saliendo del programa.";
				break;

			default:
				cout << "Opcion incorrecta.";
				break;
					
			
		}


	}
	return 0;
}