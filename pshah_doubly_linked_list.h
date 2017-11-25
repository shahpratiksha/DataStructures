//
//  pshah_doubly_linked_list.h
//  Basic Data Structures
//
//  Created by Pratiksha Shah on 11/24/17.
//  Copyright © 2017 Pratiksha Shah. All rights reserved.
//

#ifndef pshah_doubly_linked_list_h
#define pshah_doubly_linked_list_h
class pshah_DblListNode {
    pshah_DblListNode(int val) {
        this->data = val;
        this->prev = NULL;
        this->next = NULL;
    }
private:
    int data;
    pshah_DblListNode* prev;
    pshah_DblListNode* next;
};

class pshah_DoublyLinkedList {
public:
    pshah_DoublyLinkedList() {
        this->head = NULL;
        this->tail = NULL;
        this->length = 0;
    }
private:
    pshah_DblListNode* tail;
    pshah_DblListNode* head;
    int length=0;
    // methods to implement:
    
    // peekHead()
    // peekTail()
    // add()
    // addAt()
    // remove()
    // removeAt()
    // indexOf()
    // elementAt()
    // isEmpty()
    // size()
};


#endif /* pshah_doubly_linked_list_h */
