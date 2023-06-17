#ifndef STREAMING_H
#define STREAMING_H

#include "catalogo.h"

class Streaming : public Catalogo {
private:
    Catalogo catalogo;

public:
    void menu();
    void exit();
};

#endif
