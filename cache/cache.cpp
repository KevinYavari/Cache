#include "cache.h"

Cache::Cache() {}

void Cache::escribir(bool valid, string tag, string offset, string missOrHit) {    
    cache.push_back(Address(valid, tag, offset, missOrHit));
}
