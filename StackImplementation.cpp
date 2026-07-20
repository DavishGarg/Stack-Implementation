#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    void pop() {
        if(top >= 0) {
            top--;
        } else {
            cout << "Stack underflow" << endl;
        }
    }

    int peek() {
        if(top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isempty() {
        return (top == -1);
    }
};

int main() {
    Stack st(5);
    st.push(22);
    st.push(32);
    st.push(19);
    st.push(40);

    cout << st.peek() << endl; // should print 40
    st.pop();
    cout << st.peek() << endl; // should print 19

    st.pop();
    st.pop();
    cout << st.peek() << endl; 
    st.pop();
    cout << st.isempty() << endl; // should print 1 (true)
    cout << st.peek() << endl; // should indicate stack is empty
}


// #include <iostream>
// using namespace std;
// class Stack{
//   public:
//   int *arr;
//   int top;
//   int size;
  
//   Stack(int size){
//       this -> size = size;
//       arr = new int[size];
//       top = -1;
//   }
  
//   void push(int e){
//       if(top < size - 1){
//           top++;
//           arr[top] = e;
//       }else{
//           cout << "overflow " << endl;
//       }
//   }
  
//   void pop(){
//       if(top >= 0){
//           top--;
//       }else{
//           cout << "underflow " << endl;
//       } 
//   }
  
//   int peek(){
//       if(top >= 0 && top <= size){
//            return arr[top];
//       }else{
//           cout << "empty ";
//           return -1;
//       }
     
//   }
  
//   bool isempty(){
//       return (top == -1);
//   }
// };

// int main(){
//     Stack s(5);
//     s.push(1);
//      s.push(1);
//       s.push(1);
//        s.push(1);
//         s.push(1);
        
//         cout << s.peek();
        
        
// }