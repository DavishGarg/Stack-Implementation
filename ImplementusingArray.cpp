#include <bits/stdc++.h>
using namespace std;
class Stack{

public:
int *arr;
int size;
int top;

 Stack(int s){
    this -> size =s;
    arr = new int[s];
    top = -1;
   }

   void push(int element){
    if(top < size - 1){
        top++;
        arr[top] = element;
    }else{
        cout << "overflow";
    }

   }
   void pop(){
     if(top >= 0){
        top--;
     }else{
        cout << "underflow";
     }
   }

   int peek(){
    if(top >= 0){
        return arr[top];
    }else{
      cout << "no element";
      return -1;
    }

   }

   bool isempty(){
      if(top == -1){
           return true;
      }else{
        return false;
      }
   }

};
int main(){
 Stack s(5);
 s.push(77);
 s.push(66);
 s.push(88);
 s.push(99);

             
     
 s.pop();
 cout << s.peek() << endl;
 if(s.isempty()){
    cout << "empty" << endl;
 }else{
    cout << "not empty" << endl;
 }
}