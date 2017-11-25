//
//  queue.h
//  Basic Data Structures
//
//  Created by Pratiksha Shah on 11/24/17.
//  Copyright © 2017 Pratiksha Shah. All rights reserved.
//

#ifndef pshah_queue_h
#define pshah_queue_h
class pshah_queueNode {
    pshah_queueNode(int val) {
        this->value = val;
        this->next = NULL;
    }
private:
    int value;
    pshah_queueNode* next;
};

class pshah_Queue {
    pshah_Queue() {
        this->root = NULL;
    }
private:
    pshah_queueNode* root;
    // methods to implement:
    
    // enqueue()
    // dequeue()
    // front()
    // isEmpty()
    // get size()
};


#endif /* pshah_queue_h */
