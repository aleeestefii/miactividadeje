#include "Pelicula.h"
#include <string>
using std::string;
#include <string.h>

Pelicula::Pelicula() {}

Pelicula::Pelicula(int iD, string nombre, int calificacion, int duracion, string fechaEstreno)
    : Video(iD, nombre, calificacion, duracion, fechaEstreno) {}

// Implementar los métodos de la interfaz pruenab

