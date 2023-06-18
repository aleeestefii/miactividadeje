#include "Video.h"

Video::Video() {
    iD = 0;
    calificacion = 0;
    duracion = 0;
}

Video::Video(int iD, std::string nombre, int calificacion, int duracion, std::string fechaEstreno)
    : iD(iD), nombre(nombre), calificacion(calificacion), duracion(duracion), fechaEstreno(fechaEstreno) {}

int Video::getID() const {
    return iD;
}

std::string Video::getNombre() const {
    return nombre;
}

int Video::getCalificacion() const {
    return calificacion;
}

int Video::getDuracion() const {
    return duracion;
}

std::string Video::getFechaEstreno() const {
    return fechaEstreno;
}
#include "Video.h"

Video::Video() {
    iD = 0;
    calificacion = 0;
    duracion = 0;
}

Video::Video(int iD, std::string nombre, int calificacion, int duracion, std::string fechaEstreno)
    : iD(iD), nombre(nombre), calificacion(calificacion), duracion(duracion), fechaEstreno(fechaEstreno) {}

int Video::getID() const {
    return iD;
}

std::string Video::getNombre() const {
    return nombre;
}

int Video::getCalificacion() const {
    return calificacion;
}

int Video::getDuracion() const {
    return duracion;
}

std::string Video::getFechaEstreno() const {
    return fechaEstreno;
}
