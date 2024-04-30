/*#ifndef BLOQUE_H
#define BLOQUE_H

#include <vector>
#include "addres.h"
#include "cache.h"

using namespace std;

class  Bloque {
private:
    vector<Cache> bloque; // Vector de objetos Address

public:
    Bloque();
    void anadir(bool valid, string tag, string offset, string missOrHit); // Método para escribir en la caché
};

#endif // CACHE_H*/