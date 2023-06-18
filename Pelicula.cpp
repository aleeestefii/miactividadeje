#include "Pelicula.h"

Pelicula::Pelicula() {}

Pelicula::Pelicula(int iD, std::string nombre, int calificacion, int duracion, std::string fechaEstreno)
    : Video(iD, nombre, calificacion, duracion, fechaEstreno) {}

// Implementar los métodos de la interfaz pruenab

