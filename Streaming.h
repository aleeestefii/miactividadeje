#ifndef STREAMING_H
#define STREAMING_H

#include "Catalogo.h"
#include <string>

class Streaming : public Catalogo {
private:
    Catalogo catalogo;

public:
    void menu();
    void exit();
    void cargarDatosDesdeArchivo(const std::string& BasePelciculas.csv);
};

#endif


