#define DOCTEST_CONFIG_IMPLEMENTATION_ONLY
#include "./include/doctest.h"

#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H

#include <stdlib.h>
#include <string>

struct Node {
    Node * next;
    int data;

    // constructor
    Node(int d): data(d), next(nullptr) {}

    // deconstructor
    ~Node() {}
};

struct LinkedList {
    Node* root;
    
    // constructor
    LinkedList() : root(nullptr) {}

    // destructor
    ~LinkedList() {delete_entire_linked_list(); } 

    // functions needed:
    void build_linked_list(int data);
    void print_linked_list() const;
    void delete_entire_linked_list();
    int get_linked_list_data_item_value(int node_number) const;
    bool delete_list_element(int node_number);

};


#endif