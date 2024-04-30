#include "cache.h"
#include <iostream>
#include <iomanip> // Para setw()

using namespace std;


Cache::Cache() {}

void Cache::escribir1(int valid, string tag, string offset, string index,string missOrHit, string dato) {    
    way1.push_back(Address(valid, tag, offset, index ,missOrHit, dato));
}

<<<<<<< HEAD
void Cache::escribir2(int valid, string tag, string offset, string index,string missOrHit, string dato) {    
    way2.push_back(Address(valid, tag, offset, index ,missOrHit, dato));
}

void Cache::escribir1(Address address, string value) {
    address.setDato(value);
    way1.push_back(address);
}

void Cache::escribir2(Address address, string value) {
    address.setDato(value);
    way2.push_back(address);
}

void Cache::mostrarCache(){
    if(!way1.empty() || !way2.empty()) {
        cout << " ----------------------------------------      ----------------------------------------" << endl;
        cout << "| Valid | Tag | Index | Dato | MissOrHit |    | Valid | Tag | Index | Dato | MissOrHit |" << endl;
        cout << " ----------------------------------------      ----------------------------------------" << endl;
        for (int i = 0; i < way1.size(); i++){
            cout << "|   " << way1[i].isValid() << "   |  " << setw(2) << way1[i].getTag() << " | " << setw(5) << way1[i].getIndex() << " | " << setw(4) << way1[i].getDato() << " | "  << "--------- |";
            if(!way2.empty()){
                cout << " |  " << "  |" << "|   " << way2[i].isValid() << "   |  " << setw(3) << way2[i].getTag() << " | " << setw(5) << way2[i].getIndex() << " | " << "---------" << endl;
                cout << " ---------------------------------      ---------------------------------" << endl;
            } else {
                cout << endl;
                cout << " ---------------------------------------- " << endl;
            }
        }
    } else {
        cout << "La cache está vacía" << endl;
    }
}
=======
void Cache::escribir(Address address) {
    cache.push_back(address);
}

void Cache::mostrarCache(){
    if(this->cache.empty() == false) {
        cout << " ------------------------------------------" << endl;
        cout << "| Valid | Tag | Index | Offset | MissOrHit |" << endl;
        cout << " ------------------------------------------" << endl;
        for (int i = 0; i < cache.size(); i++){
            cout << "|   " << cache[i].isValid() << "   |  " << cache[i].getTag() << " | " << cache[i].getIndex() << " |  " << cache[i].getOffset() << " | " << "---------" << " |" << endl;
            cout << " ------------------------------------------" << endl;

        }
    } else {
        cout << "La cache esta vacia" << endl;
    }
}
>>>>>>> e14f288749b031ff1931e74c7574757d99df2a84
