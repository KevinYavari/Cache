#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include <iostream>

using namespace std;

class Address {
private:
    int valid;
    string tag;
    string offset;
    string missOrHit;
    string index;
    string dato;

public:
    // Constructor
    Address();
    Address(int valid, string tag, string offset, string index,string missOrHit, string dato);

    // Métodos set
    void setIndex(const string &index);
    void setValid(int valid);
    void setDato(const string &dato);
    void setTag(const string &tag);
    void setOffset(const string &offset);
    void setMissOrHit(const string &missOrHit);

    // Métodos get
    int isValid() const;
    const string &getTag() const;
<<<<<<< HEAD
    const string &getDato() const;
    const string &getIndex() const;
=======
>>>>>>> e14f288749b031ff1931e74c7574757d99df2a84
    const string &getOffset() const;
    const string &getMissOrHit() const;
    const string &getIndex() const;
};

#endif 

