//
// Created by Albert on 2021/3/1.
//
#include <iostream>
#include "SeqList.h"

using namespace std;

template<typename T>
SeqList<T>::SeqList() {
    length = 0;
}

template<typename T>
void SeqList<T>::push(T _value) {
    arr[length] = _value;
    length += 1;
}

template<typename T>
void SeqList<T>::remove_by_index(int _index) {
    if (_index < 0 || _index > length - 1) {
        throw "位置出错, 数组不存在该位置";
    }
    for (int i = _index; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }
    length--;
}

template<typename T>
int SeqList<T>::find_by_value(T _value) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == _value)
            return i;
    }
    throw "数组不存在该值";
}

template<typename T>
T SeqList<T>::find_by_index(int _index) {
    return arr[_index];
}

template<typename T>
void SeqList<T>::remove_by_value(T _value) {
    int _index = this->find_by_value(_value);
    this->remove_by_index(_index);
}

template<typename T>
void SeqList<T>::loop() {
    for (int i = 0; i < length; i++) {
        if (i != 0)
            cout << " ";
        cout << arr[i];
    }
}

template<typename T>
void SeqList<T>::removeDuplication() {
    SeqList<T> tmp_arr;
    int _index = 0;
    for (int i = 0; i < length; i++) {
        try {
            tmp_arr.find_by_value(arr[i]);
        } catch (const char *e) {
            tmp_arr.push(arr[i]);
        }
    }
    for (int i = 0; i < tmp_arr.length; i++) {
        arr[i] = tmp_arr.arr[i];
    }
    length = tmp_arr.length;
}

template<typename T>
void SeqList<T>::combine(SeqList<T> _seqList2) {
    for (int i = 0; i < _seqList2.length; i++) {
        push(_seqList2.find_by_index(i));
    }
}


template<typename T>
SeqList<T>::SeqList(T _arr[], int _len) {
    if (_len > MAX_LENGTH)
        throw "长度溢出, 闯入数组大于最大长度" + to_string(MAX_LENGTH);
    for (int i = 0; i < _len; i++) {
        push(_arr[i]);
    }
}
