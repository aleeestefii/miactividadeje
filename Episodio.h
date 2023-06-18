#ifndef EPISODIO_H
#define EPISODIO_H

#include "Video.h"

class Episodio : public Video {
private:
    int temporada;
    int numEpisodio;

public:
    Episodio();
    Episodio(int temporada, int numEpisodio, int iD, std::string nombre, int calificacion, int duracion, std::string fechaEstreno);

    void mostrarVideosConCalificacionMayorA(double calificacion);
    void mostrarEpisodios(std::string nombreSerie);
    void calificarVideo(std::string nombre, double calificacion);
};

#endif
