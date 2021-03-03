//
// Created by Albert on 2021/3/1.
//

#include "SeqStack.h"

template<typename T>
SeqStack<T>::SeqStack() {

}

template<typename T>
void SeqStack<T>::push(T _value) {
    stack.push(_value);
}

template<typename T>
void SeqStack<T>::pop() {
    stack.removeByIndex(stack.length - 1);
}

template<typename T>
bool SeqStack<T>::isEmpty() {
    return stack.length == 0;
}

template<typename T>
T SeqStack<T>::getTop() {
    return stack.findByIndex(stack.length - 1);
}
