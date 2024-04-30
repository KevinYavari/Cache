#include "ram.h"
#include "address.h"
using namespace std;

Ram::Ram(){}



void Ram::escribir2(Address adres) {
    ram.push_back(adres);
}

void Ram::mostrarRam(){
    if(this->ram.empty() == false) {
        cout << " ----------------------------------" << endl;
        cout << "| Tag | Index | Offset | MissOrHit |" << endl;
        cout << " ----------------------------------" << endl;
        for (int i = 0; i < ram.size(); i++){
            cout << "|  " << ram[i].getTag() << " | " << ram[i].getIndex() << " |  " << ram[i].getOffset() << " | " << "---------" << " |" << endl;
            cout << " ----------------------------------" << endl;

        }
    } else {
        cout << "La cache esta vacia" << endl;
    }
}