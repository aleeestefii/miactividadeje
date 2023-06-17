#include "peliculas.h"
using std::string;

Pelicula::Pelicula() {}

Pelicula::Pelicula(int iD, string nombre, int calificacion, int duracion, string fechaEstreno)
    : Video(iD, nombre, calificacion, duracion, fechaEstreno) {}

// Implementar los métodos de la interfaz Prueba
