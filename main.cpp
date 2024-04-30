#include <iostream>
#include <string>
#include "cache.h"
#include <bitset>
#include "address.h"
#include "ram.h"
#include <random>

/*5 offset, 32 bloques por via, index 5, 2 tag*/

using namespace std;



string bin(int num) {
    bitset<12> binary(num);
    return binary.to_string();
}

Address escribirMemoria(string resul){
    Address adres;
    string tag = resul.substr(0, 2);      
    string index = resul.substr(2, 5);     
    string offset = resul.substr(7, 5);
    adres.setTag(tag);
    adres.setOffset(offset);
    adres.setIndex(index);
    return adres;
}

void rellenarRam() {
    Ram ram;
    string resul;
    Address adres;
    int min = 1;
    int max = 10;
    int i = 0;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(min, max);
    
    while(i < max/2) {
        int random_number = dis(gen);
        cout << "Numero aleatorio: " << random_number << endl;
        resul = bin(random_number);
        adres = escribirMemoria(resul);
        ram.escribir2(adres);
        ++i;
    }
    ram.mostrarRam();
}



void leerEscribir(){
    Cache cache1;
    Cache cache2;
    int opcion;
    bool salir = false;
    while(salir == false){
        cout << "----------------------" << endl;
        cout << "------Menu Cache------" << endl;
        cout << "----------------------" << endl << endl;
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Leer" << endl;
        cout << "2. Escribir" << endl;
        cout << "3. Mostrar Cache" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        int num;
        string resul;
        Address adres;
        switch(opcion) {
            case 1:
                cout << "Seleccionaste Leer" << endl;
                
                break;
            case 2:
                cout << "Seleccionaste Escribir" << endl;
                cout << "Ingrese un numero: ";
                cin >> num;
                cout << endl;
                resul = bin(num);
                adres = escribirMemoria(resul);
                cache1.escribir(adres);
                break;
            case 3:
                cout << "Seleccionaste Mostrar Cache:" << endl;
                cache1.mostrarCache();
                break;
            case 4:
                cout << "Seleccionaste Salir" << endl;
                salir = true;
                break;
            default:
                cout << "Opcion no valida. Por favor seleccione una opcion valida." << endl;
                break;
        }
        
    }

}

int main() {
    rellenarRam();
    leerEscribir();
    return 0;
}