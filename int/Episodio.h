#ifndef EPISODIO_H
#define EPISODIO_H

#include "Video.h"
#include <string>
using std::string;

class Episodio : public Video {
private:
    int temporada;
    int numEpisodio;

public:
    Episodio();
    Episodio(int temporada, int numEpisodio, int iD, string nombre, int calificacion, int duracion, string fechaEstreno);

    void mostrarVideosConCalificacionMayorA(double calificacion);
    void mostrarEpisodios(string nombreSerie);
    void calificarVideo(string nombre, double calificacion);
};

#endif
