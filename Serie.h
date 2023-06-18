#ifndef SERIE_H
#define SERIE_H

#include <vector>
#include "Episodio.h"

class Serie : public Video {
private:
    std::vector<Episodio> episodios;

public:
    Serie();
    Serie(int iD, std::string nombre, std::string genero);

    void mostrarVideosConCalificacionMayorA(double calificacion);
    void mostrarVideosConGenero(std::string genero);
    void mostrarEpisodios(std::string nombreSerie);
    void mostrarPeliculasConCalificacionMayorA(double calificacion);
    void calificarVideo(std::string nombre, double calificacion);
};

#endif
