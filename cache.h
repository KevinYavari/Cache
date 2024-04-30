#ifndef CACHE_H
#define CACHE_H

#include <vector>
#include "address.h"


using namespace std;

class Cache {
private:
    vector<Address> cache; // Vector de objetos Address

public:
    Cache();
    void escribir(int valid, string tag, string offset, string index,string missOrHit); // Método para escribir en la caché
    void escribir(Address adres);
    void mostrarCache();
};

#endif // CACHE_H
