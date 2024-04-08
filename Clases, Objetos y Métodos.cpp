#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Persona
class Persona {
protected:
    string nombre; // Atributo protegido para almacenar el nombre de la persona
    int edad; // Atributo protegido para almacenar la edad de la persona
public:
	// Constructor con valores por defecto
    Persona(string _nombre = "", int _edad = 0) : nombre(_nombre), edad(_edad) {}

    // Métodos para establecer y obtener el nombre y la edad
    void setNombre(string _nombre) {
        nombre = _nombre;
    }

    string getNombre() {
        return nombre;
    }

    void setEdad(int _edad) {
        edad = _edad;
    }

    int getEdad() {
        return edad;
    }
};

// Definición de la clase Estudiante que hereda de Persona
class Estudiante : public Persona {
private:
    int numeroEstudiante; // Atributo privado para almacenar el número de estudiante
    float promedioCalificaciones; // Atributo privado para almacenar el promedio de calificaciones
public:
    Estudiante(string _nombre = "", int _edad = 0, int _numeroEstudiante = 0, float _promedioCalificaciones = 0.0)
        : Persona(_nombre, _edad), numeroEstudiante(_numeroEstudiante), promedioCalificaciones(_promedioCalificaciones) {}

    // Métodos para establecer y obtener el número de estudiante y el promedio de calificaciones
    void setNumeroEstudiante(int _numeroEstudiante) {
        numeroEstudiante = _numeroEstudiante;
    }

    int getNumeroEstudiante() {
        return numeroEstudiante;
    }

    void setPromedioCalificaciones(float _promedioCalificaciones) {
        promedioCalificaciones = _promedioCalificaciones;
    }

    float getPromedioCalificaciones() {
        return promedioCalificaciones;
    }

    // Método para ingresar los datos del estudiante desde el teclado
    void ingresarDatos() {
    	
        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombre;
        cout << "Ingrese la edad del estudiante: ";
        cin >> edad;
        cout << "Ingrese el número de estudiante: ";
        cin >> numeroEstudiante;
        cout << "Ingrese el promedio de calificaciones: ";
        cin >> promedioCalificaciones;
    }
};

int main() {
    Estudiante estudiante; // Crea un objeto de la clase Estudiante

    int opcion;
    do {
    	system("cls");
    	system("color 8e");
        cout << "Menu:\n";
        cout << "1. Ingresar datos del estudiante\n";
        cout << "2. Mostrar datos del estudiante\n";
        cout << "3. Salir\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;
        system("cls");

        switch (opcion) {
            case 1:
                estudiante.ingresarDatos(); // Llama al método para ingresar datos del estudiante
                break;
            case 2:
                cout << "Datos del estudiante:\n";
                cout << "Nombre: " << estudiante.getNombre() << endl;
                cout << "Edad: " << estudiante.getEdad() << endl;
                cout << "Número de estudiante: " << estudiante.getNumeroEstudiante() << endl;
                cout << "Promedio de calificaciones: " << estudiante.getPromedioCalificaciones() << endl;
                system("pause");
                break;
            case 3:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida. Por favor, intente de nuevo.\n";
                break;
        }
    } while (opcion != 3); // Repite el menú hasta que el usuario seleccione la opción de salir
    
    return 0;
}
