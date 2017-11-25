//
//  pshah_priority_queue.h
//  Basic Data Structures
//
//  Created by Pratiksha Shah on 11/24/17.
//  Copyright © 2017 Pratiksha Shah. All rights reserved.
//

#ifndef pshah_priority_queue_h
#define pshah_priority_queue_h
class PQNode {
    PQNode(int element, float priority) {
        this->el = element;
        this->priority = priority;
        this->next = NULL;
    }
private:
    int el;
    float priority;
    PQNode* next;
};

class pshah_PriorityQueue {
    pshah_PriorityQueue() {
        this->head = NULL;
        this->tail = NULL;
        this->length = 0;
    }
private:
    PQNode* head;
    PQNode* tail;
    int length;
    
    // methods to implement:
    
    // enqueue()
    // dequeue()
    // front()
    // isEmpty()
    // print()
};

#endif /* pshah_priority_queue_h */
