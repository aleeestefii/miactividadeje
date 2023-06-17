#include "streaming.h"

using std::cin;
using std::cout;
using std::endl;


void Streaming::menu() {
    int choice = 0;

    while (choice != 6) {
        // Mostrar el menú
        cout << "1. Cargar archivo de datos (Excel o csv)" << endl;
        cout << "2. Mostrar los videos en general con:" << endl;
        cout << "   a. Una calificación mayor a cierto parámetro" << endl;
        cout << "   b. Un cierto género" << endl;
        cout << "3. Mostrar los episodios de una determinada serie." << endl;
        cout << "4. Mostrar las películas con una calificación mayor a cierto número" << endl;
        cout << "5. Calificar un video" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingrese su elección: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Cargar archivo de datos
                break;
            case 2:
                // Mostrar videos con opciones a y b
                break;
            case 3:
                // Mostrar episodios de una serie
                break;
            case 4:
                // Mostrar películas con calificación mayor a cierto número
                break;
            case 5:
                // Calificar un video
                break;
            case 6:
                // Salir
                exit();
                break;
            default:
                std::cout << "Opción inválida. Por favor, intente nuevamente." << std::endl;
                break;
        }
    }
}

void Streaming::exit() {
    cout << "¡Hasta luego!" << endl;
    // Lógica para salir del programa
}
