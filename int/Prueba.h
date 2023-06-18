#ifndef PRUEBA_H
#define PRUEBA_H
#include <string.h>
#include <string>
using std::string;
//interfaz

class Prueba {
public:
    virtual void mostrarVideosConCalificacionMayorA(double calificacion) = 0;
    virtual void mostrarVideosConGenero(string genero) = 0;
    virtual void mostrarEpisodios(string nombreSerie) = 0;
    virtual void mostrarPeliculasConCalificacionMayorA(double calificacion) = 0;
    virtual void calificarVideo(string nombre, double calificacion) = 0;
};

#endif
