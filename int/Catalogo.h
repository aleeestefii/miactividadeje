#ifndef CATALOGO_H
#define CATALOGO_H

#include <vector>
#include "Prueba.h"
#include <string>
#include <string.h>
using std::string;
using std::vector;


class Catalogo : public Prueba {
private:
    vector<Prueba*> lista;//Puntrero para polimorphsm.
    //permite manipular y almacenar difernets tipso de videos(objetos derivados de las clases Pelicula y Series),
    //utilzando el puntero en Prueba  

public:
    void mostrarVideosConCalificacionMayorA(double calificacion);
    void mostrarVideosConGenero(string genero);
    void mostrarEpisodios(string nombreSerie);
    void mostrarPeliculasConCalificacionMayorA(double calificacion);
    void calificarVideo(string nombre, double calificacion);
};

#endif

