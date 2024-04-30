#include <iostream>
#include <string>
#include "address.h"
<<<<<<< HEAD
#include "cache.h"
#include "ram.h"
#include <bitset>
#include <random>
#include <cstdlib>
#include <cctype>

using namespace std;

string binNum(int num) {
    bitset<12> binary(num);
    return binary.to_string();
}

std::string binHexa(std::string hexa) {
    unsigned int num = std::stoi(hexa, nullptr, 16);
=======
#include "ram.h"
#include <random>

/*5 offset, 32 bloques por via, index 5, 2 tag*/

using namespace std;



string bin(int num) {
>>>>>>> e14f288749b031ff1931e74c7574757d99df2a84
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
<<<<<<< HEAD
        resul = binNum(random_number);
=======
        cout << "Numero aleatorio: " << random_number << endl;
        resul = bin(random_number);
>>>>>>> e14f288749b031ff1931e74c7574757d99df2a84
        adres = escribirMemoria(resul);
        ram.escribir2(adres);
        ++i;
    }
<<<<<<< HEAD
    /*ram.mostrarRam();*/
}

=======
    ram.mostrarRam();
}



>>>>>>> e14f288749b031ff1931e74c7574757d99df2a84
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
<<<<<<< HEAD
        cout << "3. Mostrar cache" << endl;
=======
        cout << "3. Mostrar Cache" << endl;
>>>>>>> e14f288749b031ff1931e74c7574757d99df2a84
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        string num;
        string value;
        string resul;
        Address adres;
        switch(opcion){
            case 1:
                cout << "Seleccionaste Leer" << endl;
                
                break;
            case 2:
                cout << "Seleccionaste Escribir" << endl;
                cout << "Ingrese un numero: ";
                cin >> num;
                cout << "Ingrese el valor a escribir: ";
                cin >> value;
                cout << endl;
<<<<<<< HEAD
                if(isdigit(num[1])) {
                    if(stoi(num) <= 3071){
                        resul = binNum(stoi(num));
                        adres = escribirMemoria(resul);
                        cache.escribir1(adres, value);
                    } else {
                        cout << "Direccion invalida." << endl;
                    }
                } else {
                    num.erase(0, 2);
                    resul = binHexa(num);
                    cout << resul << endl;
                    adres = escribirMemoria(resul);
                    cache.escribir1(adres, value);
                }
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                cout << "Seleccionaste Mostrar cache" << endl;
                cache.mostrarCache();
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
=======
                resul = bin(num);
                adres = escribirMemoria(resul);
                cache1.escribir(adres);
                break;
            case 3:
                cout << "Seleccionaste Mostrar Cache:" << endl;
                cache1.mostrarCache();
                break;
            case 4:
>>>>>>> e14f288749b031ff1931e74c7574757d99df2a84
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
<<<<<<< HEAD
    cout << binHexa("1A") << endl;
=======
>>>>>>> e14f288749b031ff1931e74c7574757d99df2a84
    rellenarRam();
    leerEscribir();
    return 0;
}