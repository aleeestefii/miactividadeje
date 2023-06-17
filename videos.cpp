#include "videos.h"
using std::string;


Video::Video() {
    iD = 0;
    calificacion = 0;
    duracion = 0;
}

Video::Video(int iD, string nombre, int calificacion, int duracion, string fechaEstreno)
    : iD(iD), nombre(nombre), calificacion(calificacion), duracion(duracion), fechaEstreno(fechaEstreno) {}

int Video::getID() const {
    return iD;
}

string Video::getNombre() const {
    return nombre;
}

int Video::getCalificacion() const {
    return calificacion;
}

int Video::getDuracion() const {
    return duracion;
}

string Video::getFechaEstreno() const {
    return fechaEstreno;
}

