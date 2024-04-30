#include "cache.h"

Cache::Cache() {}

void Cache::escribir(int valid, string tag, string offset, string index,string missOrHit) {    
    cache.push_back(Address(valid, tag, offset, index ,missOrHit));
}

void Cache::escribir(Address address) {
    cache.push_back(address);
}