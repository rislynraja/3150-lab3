#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./include/doctest.h"
#include "linkedlist.h"

void LinkedList::build_linked_list(int data){ 
    // insert the node (i think)
    Node* newNode = new Node(data);
    if (!root) {
        // this is the first element
        root = newNode;
        return;
    }

    Node* temp = root; // for filtering through
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode; // add at end
}

void LinkedList::print_linked_list() const{ // const needed to reassure nothing will change
    // print
    Node* temp = root;
    while (temp) {
        std::cout << "[" << temp->data << "] ";
        temp = temp->next;
    }
    std::cout << std::endl; // done
}

void LinkedList::delete_entire_linked_list(){
    // run through and delete all nodes
    Node* temp = root;
    while(temp) {
        Node* next = temp->next;
        delete temp;
        temp = next;
    }
    root = nullptr; // null for root since entire linked list getting deleted
}

int LinkedList::get_linked_list_data_item_value(int node_number) const{ // const here for same reason (nothing changes)
    // return value stored in the node of that number
    Node* temp = root; // start at the root
    int i = 0; // counter
    while (temp) {
        if (i == node_number) { // first element
            return temp->data;
        }
        else
            temp = temp->next;
            i++;
    }
    return -1; // error for if index out of bounds
}

bool LinkedList::delete_list_element(int node_number){
    // remove the nodes that point to that node and delete the node itself (clear memory?)
    if (!root) {
        return false; // can't delete anything
    }
    
    Node* temp = root;
    if (node_number == 0) {
        root = root->next; // updating pointer
        delete temp; // delete
        return true; // was inside and was deleted
    }

    Node* temp2 = nullptr;
    int i = 0;
    while(temp && i < node_number) {
        temp2 = temp;
        temp = temp->next;
        i++;
    }

    if (!temp) {
        return false; // not there unable to delete
    }

    temp2->next = temp->next; // temp2 is previous so moving the pointer for the one before to the one after
    delete temp; // deleting current node (the one the user wants deleted)
    return true; // waas inside and deleted
}
