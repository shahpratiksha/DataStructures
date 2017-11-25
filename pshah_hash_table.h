//
//  pshah_hash_table.h
//  Basic Data Structures
//
//  Created by Pratiksha Shah on 11/24/17.
//  Copyright © 2017 Pratiksha Shah. All rights reserved.
//

#ifndef pshah_hash_table_h
#define pshah_hash_table_h
#include <map>
using namespace std;
class pshah_HashTable {
    pshah_HashTable() {
        this->collection = {};
    }
    
private:
    map<int, int> collection;
    // methods to implement:
    
    // hasher()
    // add()
    // remove()
    // lookup()
};


#endif /* pshah_hash_table_h */
