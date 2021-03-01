//
// Created by Albert on 2021/3/1.
//

#include "SeqStack.cpp"
#include <iostream>

using namespace std;

int main() {
    SeqStack<int> stack;
    stack.push(11);
    stack.push(12);
    stack.push(13);
    stack.push(14);
    cout<<stack.getTop()<<endl;
    stack.pop();
    cout<<stack.getTop()<<endl;
    stack.pop();
    cout<<stack.getTop()<<endl;
    stack.pop();
    cout<<stack.getTop()<<endl;
    stack.pop();
    if (stack.isEmpty())
        cout << "The stack is empty.";
}