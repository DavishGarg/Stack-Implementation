#include <bits/stdc++.h>
using namespace std;
class Stack{
  public:
  int val;
  Stack *next;

  Stack(int data){
    this -> val = data;
    this->next = NULL;
  }

  void push(Stack* &head, Stack* &tail , int d ){
    Stack* newnode = new Stack(d);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }else{
        tail -> next = newnode;
        tail = newnode;
    }

  }

  void pop(Stack* &head, Stack* &tail) {

    if(head == NULL){
        cout << "Underflow";
        return;
    }

    if(head == tail){
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Stack* temp = head;

    while(temp->next != tail){
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = NULL;
}
  Stack* peek( Stack* tail ){
        return tail;
  }

  bool isempty(Stack* head){
      if(head == NULL){
        return true;
      }else{
        return false; 
      }
  }
};
int main(){
    Stack hearder(0);
    Stack* head = NULL;
    Stack* tail = NULL;
     hearder.push(head,tail,10);
      hearder.push(head,tail,20);
       hearder.push(head,tail,30);
       hearder.push(head,tail,40);

       cout << hearder.peek(tail)-> val << endl;
      hearder.pop(head,tail);
      cout << hearder.peek(tail)-> val;
}