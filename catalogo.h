#ifndef CATALOGO_H
#define CATALOGO_H

#include <vector>
#include "prueba.h"

class Catalogo : public Prueba {
private:
    std::vector<Prueba*> lista;

public:
    void mostrarVideosConCalificacionMayorA(double calificacion);
    void mostrarVideosConGenero(std::string genero);
    void mostrarEpisodios(std::string nombreSerie);
    void mostrarPeliculasConCalificacionMayorA(double calificacion);
    void calificarVideo(std::string nombre, double calificacion);
};

#endif
