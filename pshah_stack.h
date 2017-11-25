//
//  pshah_stack.h
//  Basic Data Structures
//
//  Created by Pratiksha Shah on 11/24/17.
//  Copyright © 2017 Pratiksha Shah. All rights reserved.
//

#ifndef pshah_stack_h
#define pshah_stack_h
class pshah_stackNode {
    pshah_stackNode(int val) {
        this->value = val;
        this->next = NULL;
    }
private:
    int value;
    pshah_stackNode* next;
};

class Stack {
    Stack() {
        this->root = NULL;
        this->size = 0;
    }
private:
    pshah_stackNode* root;
    int size;
    // methods to implement:
    
    /*push(value) {
        Node* newnode = new Node(value);
        if(size == 0) {
            root = newnode;
            return;
            while(temp != NULL){
                
            }
            
        } */
        // pop()
        // peek()
        // isEmpty()
        // clear()
        // print()
};


#endif /* pshah_stack_h */
