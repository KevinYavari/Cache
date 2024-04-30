#include "cache.h"


Cache::Cache() {}

void Cache::escribir(int valid, string tag, string offset, string index,string missOrHit) {    
    cache.push_back(Address(valid, tag, offset, index ,missOrHit));
}

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