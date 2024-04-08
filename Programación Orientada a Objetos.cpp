#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definición de la clase Persona
class Persona {
private:
    string nombre; // Atributo privado para almacenar el nombre de la persona
    int edad; // Atributo privado para almacenar la edad de la persona
    string ocupacion; // Atributo privado para almacenar la ocupación de la persona

public:
    // Constructor que inicializa los atributos de la clase
    Persona(string nombre, int edad, string ocupacion) : nombre(nombre), edad(edad), ocupacion(ocupacion) {}

    // Métodos para acceder a los atributos (get)
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    string getOcupacion() const { return ocupacion; }

	// Métodos para modificar los atributos (set)
    void setNombre(string nombre) { this->nombre = nombre; }
    void setEdad(int edad) { this->edad = edad; }
    void setOcupacion(string ocupacion) { this->ocupacion = ocupacion; }

    // Método para imprimir los datos de la persona
    void mostrarDatos() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Ocupacion: " << ocupacion << endl;
    }
};

int main() {
    vector<Persona> personas;
    int opcion;

    do {
    	system("cls");
        cout << "Menu:" << endl;
        cout << "1. Agregar persona" << endl;
        cout << "2. Modificar datos de persona" << endl;
        cout << "3. Leer datos de personas" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
            	system("cls");
                string nombre, ocupacion;
                int edad;
                cout << "Ingrese el nombre: ";
                cin >> nombre;
                cout << "Ingrese la edad: ";
                cin >> edad;
                cout << "Ingrese la ocupacion: ";
                cin >> ocupacion;
                personas.push_back(Persona(nombre, edad, ocupacion));
                cout << "Persona agregada exitosamente." << endl;
                system("pause");
                break;
            }
            case 2: {
                int indice;
                system("cls");
                cout << "Ingrese el indice de la persona a modificar (0,1,2... segun el orden de la persona): ";
                cin >> indice;
                if (indice >= 0 && indice < personas.size()) { // Verifica si el índice es válido
                    string nombre, ocupacion;
                    int edad;
                    cout << "Ingrese el nuevo nombre: ";
                    cin >> nombre;
                    cout << "Ingrese la nueva edad: ";
                    cin >> edad;
                    cout << "Ingrese la nueva ocupacion: ";
                    cin >> ocupacion;
                    personas[indice].setNombre(nombre); // Modifica el nombre de la persona
                    personas[indice].setEdad(edad); // Modifica la edad de la persona
                    personas[indice].setOcupacion(ocupacion); // Modifica la ocupación de la persona
                    cout << "Datos de persona modificados exitosamente." << endl;
                    system("pause");
                } else {
                    cout << "Índice inválido." << endl;
                }
                break;
            }
            case 3: {
            	system("cls");
                cout << "Datos de personas:" << endl;
                for (const auto& persona : personas) { // Itera sobre cada persona en el vector
                    persona.mostrarDatos();
                    cout << endl;
                }
                system("pause");
                break;
            }
            case 4: {
                cout << "Saliendo del programa." << endl;
                break;
            }
            default:
                cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
        }

    } while (opcion != 4);

    return 0;
}
