#include <iostream>
#include <string>
#include "cache.h"
#include <bitset>
#include "address.h"
#include <cstdlib>

using namespace std;

string bin(int num) {
    bitset<32> binary(num);
    return binary.to_string();
}

Address escribirMemoria(string resul){
    Address adres;
    string tag = resul.substr(0, 20);      
    string index = resul.substr(20, 6);     
    string offset = resul.substr(26, 5);
    adres.setTag(tag);
    adres.setOffset(offset);
    adres.setIndex(index);
    return adres;
}

void leerEscribir(){
    Cache cache;
    int opcion;
    bool salir = false;
    while(salir == false){
        cout << "---------------------------------------" << endl;
        cout << "  Bienvenido a la simulacion de cache  " << endl;
        cout << "---------------------------------------" << endl;
        cout << endl;
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Leer" << endl;
        cout << "2. Escribir" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        int num;
        string resul;
        Address adres;
        switch(opcion) {
            case 1:
                system("cls");
                cout << "Seleccionaste Leer" << endl;
                break;
            case 2:
                system("cls");
                cout << "Seleccionaste Escribir" << endl;
                cout << "Ingrese un numero: ";
                cin >> num;
                cout << endl;
                resul = bin(num);
                adres = escribirMemoria(resul);
                cache.escribir(adres);
                cout << "Tag: " + adres.getTag() << endl;
                cout << "Index: " + adres.getIndex() << endl;
                cout << "Offset: " + adres.getOffset() << endl;
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
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
    leerEscribir();
    return 0;
}