#ifndef PRUEBA_H
#define PRUEBA_H

class Prueba {
public:
    virtual void mostrarVideosConCalificacionMayorA(double calificacion) = 0;
    virtual void mostrarVideosConGenero(std::string genero) = 0;
    virtual void mostrarEpisodios(std::string nombreSerie) = 0;
    virtual void mostrarPeliculasConCalificacionMayorA(double calificacion) = 0;
    virtual void calificarVideo(std::string nombre, double calificacion) = 0;
};

#endif
