#include <iostream>
using namespace std;

// The node will be user defined
class node{
  public:
  int data;
  node* next; // Pointer to next node

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

  cout<<search(head,10)<<endl;
  cout<<search(head,2)<<endl;
  

  return 0;
}