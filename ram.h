#ifndef RAM_H
#define RAM_H

#include <vector>
#include "address.h"


using namespace std;


class Ram {
private:
    vector<Address> ram;
public:
    Ram();
    void escribir2(Address adres);
    void mostrarRam();
};

<<<<<<< HEAD
#endif 
=======
#endif 
>>>>>>> e14f288749b031ff1931e74c7574757d99df2a84
