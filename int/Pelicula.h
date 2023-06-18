#ifndef PELICULA_H
#define PELICULA_H

#include "Video.h"
#include <string.h>
#include <string>
using std::string;

class Pelicula : public Video {
public:
    Pelicula();
    Pelicula(int iD, string nombre, int calificacion, int duracion, string fechaEstreno);

    // Implementar los métodos de la interfaz Prueba
};

#endif