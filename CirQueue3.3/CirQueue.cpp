//
// Created by Albert on 2021/3/1.
//

#include <iostream>
#include "CirQueue.h"

template<typename T>
CirQueue<T>::CirQueue() {}

template<typename T>
void CirQueue<T>::push(T _value) {
    if (count == 0)
        begin++;
    queue[end] = _value;
    end = (end + 1) % MAX_SIZE;
    count++;
}

template<typename T>
void CirQueue<T>::pop() {
    if (!isEmpty()) {
        begin = (begin + 1) % MAX_SIZE;
        count--;
    } else {
        std::cout << begin << " " << end << std::endl;
        throw "Pop Exception: The queue is empty.";

    }

}

template<typename T>
T CirQueue<T>::getTop() {
    if (!isEmpty())
        return queue[begin];
    else {
        std::cout << begin << " " << end << std::endl;
        throw "Get Top Exception: The queue is empty.";
    }
}

template<typename T>
bool CirQueue<T>::isEmpty() {
    return count == 0;
}

