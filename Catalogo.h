#ifndef CATALOGO_H
#define CATALOGO_H

#include <vector>
#include "Prueba.h"

class Catalogo : public Prueba {
private:
    std::vector<Prueba*> lista;//Puntrero para polimorphsm.
    //permite manipular y almacenar difernets tipso de videos(objetos derivados de las clases Pelicula y Series),
    //utilzando el puntero en Prueba  

public:
    void mostrarVideosConCalificacionMayorA(double calificacion);
    void mostrarVideosConGenero(std::string genero);
    void mostrarEpisodios(std::string nombreSerie);
    void mostrarPeliculasConCalificacionMayorA(double calificacion);
    void calificarVideo(std::string nombre, double calificacion);
};

#endif

