#include "address.h"

// Constructor por defecto
Address::Address() : valid(1), tag(""), offset(""), index("") ,missOrHit("") {}

// Constructor con parámetros
Address::Address(int valid, string tag, string offset,string index, string missOrHit)
    : valid(valid), tag(tag), offset(offset), index(index) ,missOrHit(missOrHit) {}

// Métodos set

void Address::setIndex(const string&index) {
    this->index = index;
}

void Address::setValid(int valid) {
    this->valid = valid;
}

void Address::setTag(const string &tag) {
    this->tag = tag;
}

void Address::setOffset(const string &offset) {
    this->offset = offset;
}

void Address::setMissOrHit(const string &missOrHit) {
    this->missOrHit = missOrHit;
}

// Métodos get
int Address::isValid() const {
    return valid;
}

const string &Address::getTag() const {
    return tag;
}

const string &Address::getIndex() const {
    return index;
}

const string &Address::getOffset() const {
    return offset;
}

const string &Address::getMissOrHit() const {
    return missOrHit;
}
