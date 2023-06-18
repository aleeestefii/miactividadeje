#include "Streaming.h"
#include <fstream>
#include <iostream>
#include <string>

void Streaming::exit() {
    std::cout << "Gracias" << std::endl;
    // para salir del programa
}


void Streaming::cargarDatosDesdeArchivo(const std::string& BasePelciculas.csv) {
    std::ifstream archivo(BasePelciculas.csv);
    if (!archivo) {
        std::cout << "No se pudo abrir el archivo." << std::endl;
        return;
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        // Procesar la línea del archivo 
        // Agregar los objetos creados al catálogo o a otras estructuras de datos relevantes()???
    }

    archivo.close();
}


void Streaming::menu() {
    int choice = 0;

    while (choice != 6) {
        // Mostrar el menú
        std::cout << "1. Cargar archivo de datos (Excel o csv)" << std::endl;
        std::cout << "2. Mostrar los videos en general con:" << std::endl;
        std::cout << "   a. Una calificación mayor a cierto parámetro" << std::endl;
        std::cout << "   b. Un cierto género" << std::endl;
        std::cout << "3. Mostrar los episodios de una determinada serie." << std::endl;
        std::cout << "4. Mostrar las películas con una calificación mayor a cierto número" << std::endl;
        std::cout << "5. Calificar un video" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "Ingrese su elección: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Cargar archivo de datoos
                break;
            case 2:
                // Mostrar videos con opciones a y b
                break;
            case 3:
                // Mostrar episodios de las series
                break;
            case 4:
                // Mostrar películas con calificación mayor a cierto num, parametro de cual mostarr
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

