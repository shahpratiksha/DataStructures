//
//  pshah_bst.h
//  Basic Data Structures
//
//  Created by Pratiksha Shah on 11/24/17.
//  Copyright © 2017 Pratiksha Shah. All rights reserved.
//

#ifndef pshah_bst_h
#define pshah_bst_h
class pshah_BSTNode {
    pshah_BSTNode(int v) {
        this->value = v;
        this->left = NULL;
        this->right = NULL;
    }
private:
    int value;
    pshah_BSTNode* left;
    pshah_BSTNode* right;
};

class pshah_BinarySearchTree {
    pshah_BinarySearchTree() {
        this->root = NULL;
    }
private:
    pshah_BSTNode* root;
    // methods to implement:
    
    // add()
    // findMin()
    // findMax()
    // isPresent(int)
    // findMaxHeight()
    // findMinHeight()
    // isBalanced()
    // inOrder()
    // preOrder()
    // postOrder()
    // levelOrder()
    // reverseLevelOrder()
    // remove()
    // invert()
};


#endif /* pshah_bst_h */
