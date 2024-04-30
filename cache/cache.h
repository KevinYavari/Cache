#ifndef CACHE_H
#define CACHE_H

#include <vector>
#include "addres.h"

using namespace std;

class Cache {
private:
    vector<Address> cache; // Vector de objetos Address

public:
    Cache();
    void escribir(bool valid, string tag, string offset, string missOrHit); // Método para escribir en la caché
};

#endif // CACHE_H
