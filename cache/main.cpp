#include <iostream>
#include <string>
#include "Cache.h"
#include <bitset>
#include "addres.h"

using namespace std;




string bin(int num) {
    bitset<32> binary(num);
    return binary.to_string();
}

Address escribirMemoria(resul){
    Address adres;
    string tag = resul.substr(0, 20);      
    string index = resul.substr(20, 6);     
    string offset = resul.substr(26, 5);
    
}


void leerEscribir(){
    Cache cache;
    int opcion;
    bool salir = false;
    while(salir == false){
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
                cout << "Seleccionaste Leer" << endl;
                
                break;
            case 2:
                cout << "Seleccionaste Escribir" << endl;
                cout << "Ingrese un numero";
                cin >> num;
                resul = bin(num);
                adres = escribirMemoria(resul);
                break;
            case 3:
                cout << "Seleccionaste Salir" << endl;
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