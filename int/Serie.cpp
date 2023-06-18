#include "Serie.h"
#include <string>
using std::string;
#include <string.h>
#include <vector>
using std::vector;

Serie::Serie() {}

Serie::Serie(int iD, string nombre, string genero)
    : Video(iD, nombre, 0, 0, ""), episodios(vector<Episodio>()) {}

void Serie::mostrarVideosConCalificacionMayorA(double calificacion) {
    // Implementación para mostrar los videos con calificación mayor a un val dado
}

void Serie::mostrarVideosConGenero(string genero) {
    // Implementación para mostrar los videos con un género específico
}

void Serie::mostrarEpisodios(string nombreSerie) {
    // Implementación para mostrar los episodios de una serie específica
}

void Serie::mostrarPeliculasConCalificacionMayorA(double calificacion) {
    // Implementación para mostrar las películas con calificación mayor a un val dado
}

void Serie::calificarVideo(string nombre, double calificacion) {
    // Implementación para calificar un video específico
}
