#ifndef VIDEO_H
#define VIDEO_H

#include <string>
using std::string;

class Video {
private:
    int iD;
    string nombre;
    int calificacion;
    int duracion;
    string fechaEstreno;

public:
    Video();
    Video(int iD, string nombre, int calificacion, int duracion, string fechaEstreno);

    int getID() const;
    string getNombre() const;
    int getCalificacion() const;
    int getDuracion() const;
    string getFechaEstreno() const;
};

#endif


