#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

using namespace std;

class Address {
private:
    int valid;
    string tag;
    string offset;
    string missOrHit;
    string index;

public:
    // Constructor
    Address();
    Address(int valid, string tag, string offset, string index,string missOrHit);

    // Métodos set
    void setIndex(const string &index);
    void setValid(int valid);
    void setTag(const string &tag);
    void setOffset(const string &offset);
    void setMissOrHit(const string &missOrHit);

    // Métodos get
    int isValid() const;
    const string &getTag() const;
    const string &getOffset() const;
    const string &getMissOrHit() const;
};

#endif 

