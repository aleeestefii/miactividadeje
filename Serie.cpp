#include "Serie.h"

Serie::Serie() {}

Serie::Serie(int iD, std::string nombre, std::string genero)
    : Video(iD, nombre, 0, 0, ""), episodios(std::vector<Episodio>()) {}

void Serie::mostrarVideosConCalificacionMayorA(double calificacion) {
    // Implementación para mostrar los videos con calificación mayor a un valor dado
}

void Serie::mostrarVideosConGenero(std::string genero) {
    // Implementación para mostrar los videos con un género específico
}

void Serie::mostrarEpisodios(std::string nombreSerie) {
    // Implementación para mostrar los episodios de una serie específica
}

void Serie::mostrarPeliculasConCalificacionMayorA(double calificacion) {
    // Implementación para mostrar las películas con calificación mayor a un valor dado
}

void Serie::calificarVideo(std::string nombre, double calificacion) {
    // Implementación para calificar un video específico
}
