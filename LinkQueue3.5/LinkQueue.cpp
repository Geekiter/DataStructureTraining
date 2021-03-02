//
// Created by Albert on 2021/3/2.
//

#include "LinkQueue.h"

template<typename T>
LinkQueue<T>::LinkQueue() {}

template<typename T>
LinkQueue<T>::~LinkQueue() {

}

template<typename T>
void LinkQueue<T>::push(T _value) {
    queue.push_back(_value);
}

template<typename T>
void LinkQueue<T>::pop() {
    queue.erase(queue.begin());
}

template<typename T>
T LinkQueue<T>::getTop() {
    return queue[0];
}

template<typename T>
bool LinkQueue<T>::isEmpty() {
    return queue.size() == 0;
}

