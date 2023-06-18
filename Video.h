#ifndef VIDEO_H
#define VIDEO_H

#include <string>

class Video {
private:
    int iD;
    std::string nombre;
    int calificacion;
    int duracion;
    std::string fechaEstreno;

public:
    Video();
    Video(int iD, std::string nombre, int calificacion, int duracion, std::string fechaEstreno);

    int getID() const;
    std::string getNombre() const;
    int getCalificacion() const;
    int getDuracion() const;
    std::string getFechaEstreno() const;
};

#endif
