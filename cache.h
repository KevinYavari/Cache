#ifndef CACHE_H
#define CACHE_H

#include <vector>
#include "address.h"


using namespace std;

class Cache {
private:
    vector<Address> way1;
    vector<Address> way2;

public:
    Cache();
<<<<<<< HEAD
    void escribir1(int valid, string tag, string offset, string index,string missOrHit, string dato);
    void escribir2(int valid, string tag, string offset, string index,string missOrHit, string dato);
    void escribir1(Address adres, string value);
    void escribir2(Address adres, string value);
=======
    void escribir(int valid, string tag, string offset, string index,string missOrHit); // Método para escribir en la caché
    void escribir(Address adres);
>>>>>>> e14f288749b031ff1931e74c7574757d99df2a84
    void mostrarCache();
};

#endif
