#include "Episodio.h"
#include <string.h>
using std::string;
#include <string>

Episodio::Episodio() : temporada(0), numEpisodio(0) {}

Episodio::Episodio(int temporada, int numEpisodio, int iD, string nombre, int calificacion, int duracion, string fechaEstreno)
    : Video(iD, nombre, calificacion, duracion, fechaEstreno), temporada(temporada), numEpisodio(numEpisodio) {}

void Episodio::mostrarVideosConCalificacionMayorA(double calificacion) {
    // Implementación para mostrar los videos con calificación mayor a un valor dado
}

void Episodio::mostrarEpisodios(string nombreSerie) {
    // Implementación para mostrar los episodios de una serie específica
}

void Episodio::calificarVideo(string nombre, double calificacion) {
    // Implementación para calificar un video específico
}
