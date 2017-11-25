//
//  pshah_linked_list.h
//  Basic Data Structures
//
//  Created by Pratiksha Shah on 11/24/17.
//  Copyright © 2017 Pratiksha Shah. All rights reserved.
//

#ifndef pshah_linked_list_h
#define pshah_linked_list_h
class pshah_listNode {
    pshah_listNode(int elem) {
        this->el = elem;
        this->next = NULL;
    }
private:
    int el;
    pshah_listNode* next;
};

class pshah_LinkedList {
    pshah_LinkedList() {
        this->length = 0;
        this->head = NULL;
    }
private:
    int length;
    pshah_listNode* head;
    
    // methods to implement:
    
    // head()
    // size()
    // add()
    // addAt()
    // remove()
    // removeAt()
    // indexOf()
    // elementAt()
    // isEmpty()
};

#endif /* pshah_linked_list_h */
