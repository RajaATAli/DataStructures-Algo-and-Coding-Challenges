#include <iostream>
using namespace std;

// The node will be user defined
class node{
  public:
  int data;
  node* next; // Pointer to next node

  // Constructor
  node(int val){
    data = val;
    next = NULL;
  }
};

void insertAtTail(node* &head, int val){
  node* n = new node(val);

  if(head==NULL){
    head=n;
    return;
  }

  node* temp = head;
  // Traversing the list
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=n;
}

void insertAtHead(node* &head, int val){
  node* n = new node(val);
  n->next=head;
  head=n;
}

void insertAfterNode(node* &head, int valueAfter, int val) {
    node* temp = head;
    while (temp != NULL && temp->data != valueAfter) {
        temp = temp->next;
    }

    if (temp != NULL) {
        node* n = new node(val);
        n->next = temp->next;
        temp->next = n;
    } else {
        cout << "Node with value " << valueAfter << " not found." << endl;
    }
}

// Delete a specific node Function
void Deletion(node* &head, int key){
  // Case 1: There is no node to be deleted
  if (head == nullptr){
    return;
  }

  // Case 2: Deleting the Head Node
  if (head->data == key){
      node* toDelete = head; // This node will be later deleted
      head = head->next; // The head now points to the next node
      delete toDelete;
      return;
    }

  // Case 3: Traversing the List and Deleting a Node (specifically non-head)

  node* prev = nullptr;
  node* temp = head;
  while(temp != nullptr && temp->data != key){
    prev = temp; // Keep track of node before temp
    temp = temp->next; // Move to the next node
  }
  if (temp != nullptr){
    // relinking nodes before the deleted node and after the deleted node
    // Skip over the node to delete
    prev -> next = temp -> next;
    delete temp;
  }
}

bool search(node* head, int key){
  node* temp=head;
  while(temp!=NULL){
    if(temp->data==key){
      return true;
    }
    temp=temp->next;
  }
  return false;
}


void display(node* head){
  node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<"null"<<endl;
}


int main (){

  node* head=NULL;
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  display(head);

  insertAtHead(head,4);
  display(head);

  insertAfterNode(head, 2, 5); // Insert 5 after 2
  display(head);

  cout<<search(head,10)<<endl; // 0
  cout<<search(head,2)<<endl; // 1

  Deletion(head,2);
  cout<< "List after deleting 2:" <<endl;
  display(head);

  cout<<search(head,2)<<endl; // 0

  return 0;
}