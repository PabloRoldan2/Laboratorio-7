#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Función para almacenar los datos en un archivo
void guardarDatos(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo); // Crea un objeto de archivo de salida para escribir en el archivo especificado

    if (!archivo) { // Verifica si el archivo se abrió correctamente
        cerr << "Error al abrir el archivo " << nombreArchivo << endl;
        return;
    }

    int cantidadPersonas;
    cout << "Ingrese la cantidad de personas: "; // Solicita al usuario la cantidad de personas
    cin >> cantidadPersonas;

    for (int i = 0; i < cantidadPersonas; ++i) { // Bucle para ingresar los datos de cada persona 
        string nombre;
        int edad;
		system("cls");
        cout << "Ingrese el nombre del Estudiante " << i + 1 << ": ";
        cin >> nombre;
        cout << "Ingrese la edad del Estudiante " << i + 1 << ": ";
        cin >> edad;

        archivo << nombre << " " << edad << endl; // Ingresa el nombre y la edad en el archivo
    }

    archivo.close(); // Cierra el archivo después de escribir los datos
    cout << "Datos guardados correctamente" << nombreArchivo << endl;
    system("pause");
}

// Función para leer los datos del archivo y mostrarlos en la pantalla
void mostrarDatos(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);

    if (!archivo) { // Verifica si el archivo se abrió correctamente
        cerr << "Error al abrir el archivo " << nombreArchivo << endl;
        return;
    }

    string nombre;
    int edad;
    system("cls");
    cout << "Datos almacenados" << nombreArchivo << ":" << endl;
    while (archivo >> nombre >> edad) { // Bucle para leer los datos del archivo
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl; // Muestra el nombre y la edad de cada persona
    }

    archivo.close();
}

int main() {
    string nombreArchivo = "datos.txt"; // Define el nombre del archivo donde se guardarán los datos

    guardarDatos(nombreArchivo); // Llama a la función para guardar los datos en el archivo
    mostrarDatos(nombreArchivo); // Llama a la función para mostrar los datos del archivo

    return 0;
}
