#include <iostream>

using namespace std;

struct alumno {
	char nombre[50];
	char apellidos[50];
	char email[50];
	int telefono[10];
	int matricula[8];
	char direccion[100];
	int calificacion[4];

};


int main() {
	locale::global(locale("spanish")); // nota personal, corregir errores ortograficos. 

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
	system("pause");
	return 0;
}

void altaAlumno() {

	system("cls");
	alumno A;
	FILE *F;

	cout << "\n";
	do
	{
		cout << "Ingrese su Matricula:" << endl;
		cin >> A.matricula;
	} while (A.matricula == 9999999);

	cout << "Ingrese su Nombre:" << endl;
	cin >> A.nombre;
	cout << "Ingrese su Apellido:" << endl;
	cin >> A.apellidos;
	cout << "Ingrese su email:" << endl;
	cin >> A.email;
	cout << "Ingrese su telefono:" << endl;
	cin >> A.telefono;
	cout << "Ingrese su direccion:" << endl;
	cin >> A.direccion;
	cout << "Ingrese calificacion:" <<endl;
	cin >> A.calificacion;

	F = fopen("datosAlumnos.dat", "a+");// a abre un fichero para anadir datos. si no existe se crea. 
	//+ simbolo utilizado para abrir el fichero para lectura y escritura
	if (F == NULL)
	{
		cout << "No se puede abrir el archivo" << endl;
		exit(1); 
	}
	fwrite(&A, sizeof(A), 1, F); // direc_dato, tamano_dato, numero_dato, punt_fichero
	fclose(F); //cierra puntero
	system("pause");

	void listaAlumnos() 
	{
		system("cls");
		cout << "Todos los registros" << endl;
		for (int i = 0; i < c; i++) {
			cout << "Nombre y apellido: " << a[i].nombre << " " << a[i].apellido << endl;
			cout << "Matricula" << ": " << a[i].matricula << endl << endl;
			cout << "Email" << ": " << a[i].email<< endl << endl;
			cout << "Direccion" << ": " << a[i].direccion << endl << endl; 
			cout << "Telefono" << ": " << a[i].telefono << endl << endl;
			cout << "Calificacion" << ": " << a[i].calificacion << endl << endl;
	}
		
	void buscar()
	{
		while (opcion==6)
		{
			do{
			cout << listaAlumnos << endl;
			}
		}
	}

		system("pause > nul");
		menu();
	}
}
