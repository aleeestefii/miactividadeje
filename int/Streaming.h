#ifndef STREAMING_H
#define STREAMING_H
#include <string>
using std::string;
#include <string.h>

#include "Catalogo.h"
#include <string>

class Streaming : public Catalogo {
private:
    Catalogo catalogo;

public:
    void menu();
    void exit();
    void cargarDatosDesdeArchivo(const std::string& BasePelciculas);
};

#endif