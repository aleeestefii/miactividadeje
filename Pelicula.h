#ifndef PELICULA_H
#define PELICULA_H

#include "Video.h"

class Pelicula : public Video {
public:
    Pelicula();
    Pelicula(int iD, std::string nombre, int calificacion, int duracion, std::string fechaEstreno);

    // Implementar los métodos de la interfaz Prueba
};

#endif
