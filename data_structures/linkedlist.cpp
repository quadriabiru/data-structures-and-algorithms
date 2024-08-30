#include "iostream"

class Node{
public:
    int value; 
    Node* next; 
    Node* previous; 
}; 

void print(Node* node){

    while(node != nullptr){
        std::cout << node->value << " "; 
        node = node->next;
    }
    
    std::cout << std::endl;

}

int main(){
    Node* head = new Node();
    Node* two = new Node(); 
    Node* three = new Node();
    Node* four = new Node(); 
    Node* tail = new Node();

    head->value = 1;
    two->value = 2; 
    three->value = 3; 
    four->value = 4; 
    tail->value = 5; 

    head->previous = nullptr; 
    head->next = two; 

    two->previous = head; 
    two->next = three; 

    three->previous = two; 
    three->next = four; 

    four->previous = three;
    four->next = tail; 

    tail->previous = four; 
    tail->next = nullptr;

    print(head);
}