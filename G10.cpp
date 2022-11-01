/*Create two programs in C++ to process sequences of values in two ways:
  1) implementing it through a linked list, using dynamic data structures,
  2) using STL::list.

In both implementations, a specific function to
process values should be created and presented
in action (showing both initial and resulting values).
In the case of linked-list, also auxiliary
functions should be created and allocated
memory for the structure should be freed.

G10. Create a function with parameter n to delete from list
all elements: if element follows directly after
element with value n and value of following element
 is not equal to n then delete the following element.
*/
#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
};

void deletelist(Node*&head, int n){
    Node *tempHead = head;
    while(tempHead!=NULL){
        if(tempHead->value==n){
            Node *tempNext = tempHead->next;
            if(tempNext->value!=n){
                tempHead->next = tempNext->next;
            }
        }
        tempHead = tempHead->next;
    }
}

void printList(Node*n){
    while(n!=NULL){
        cout<<n->value<<" ";
        n=n->next;
    }
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    Node* sixth = new Node();
    Node* seventh = new Node();
    head->value = 0;
    head->next = second;
    second->value = 4;
    second->next = third;
    third->value = 4;
    third->next = fourth;
    fourth->value = 2;
    fourth->next = fifth;
    fifth->value = 4;
    fifth->next = sixth;
    sixth->value = 2;
    sixth->next = seventh;
    seventh->value = 3;
    seventh->next = NULL;



    printList(head);
    cout<<endl<<"Deleting linked list:"<<endl;
    deletelist(head,4);
    printList(head);

    system("pause>0");
}
