//
// 链栈, 实现LinkStack类模板，基本操作包括构造函数、析构函数、取栈顶、出栈、入栈、判空，并验证。
// Created by Albert on 2021/3/1.
//
#include "LinkStack.h"

template<typename T>
LinkStack<T>::LinkStack() {
};

template<typename T>
LinkStack<T>::~LinkStack<T>() {
    vector<T>().swap(arr);
}

template<typename T>
T LinkStack<T>::getTop() {
    return arr[0];
}

template<typename T>
void LinkStack<T>::push(T _value) {
    arr.push_back(_value);
}

template<typename T>
void LinkStack<T>::pop() {
    arr.erase(arr.begin());
}

template<typename T>
bool LinkStack<T>::isEmpty() {
    return arr.size() == 0;
}

