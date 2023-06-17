#ifndef PRUEBA_H
#define PRUEBA_H

class Prueba {
public:
    virtual void mostrarVideosConCalificacionMayorA(double calificacion) const = 0;
    virtual void mostrarVideosConGenero(std::string genero) const = 0;
    virtual void mostrarEpisodios(std::string nombreSerie) const = 0;
    virtual void mostrarPeliculasConCalificacionMayorA(double calificacion) const = 0;
    virtual void calificarVideo(std::string nombre, double calificacion) = 0;
};

#endif  // PRUEBA_H

