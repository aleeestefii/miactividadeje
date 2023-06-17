#ifndef SERIE_H
#define SERIE_H

#include <vector>
#include "episodios.h"
using std::vector;
using std::string;

class Serie : public Video {
private:
    vector<Episodio> episodios;

public:
    Serie();
    Serie(int iD, string nombre, string genero);

    void mostrarVideosConCalificacionMayorA(double calificacion);
    void mostrarVideosConGenero(string genero);
    void mostrarEpisodios(string nombreSerie);
    void mostrarPeliculasConCalificacionMayorA(double calificacion);
    void calificarVideo(string nombre, double calificacion);
};

#endif

