#include "LinkList.h"
#include <iostream>

using namespace std;

template<class T>
LinkList<T>::LinkList() {
    first = new Node<T>; //生成头结点
    first->next = nullptr;

}

template<class T>
LinkList<T>::LinkList(T a[], int n) {
    Node<T> *s, *rear;
    first = new Node<T>;
    first->next = nullptr;
    rear = first;
    for (int i = 0; i < n; i++) {
        s = new Node<T>;
        s->data = a[i];
        rear->next = s;
        rear = s;
    }
    rear->next = nullptr;
}

template<class T>
LinkList<T>::~LinkList() {
    Node<T> *p;
    while (first != nullptr) {
        p = first;
        first = p->next;
        delete p;
    }
}

template<class T>
int LinkList<T>::Length() {
    Node<T> *p = first->next;
    int count = 0;
    while (p != nullptr) {
        count++;
        p = p->next;
    }
    return count;
}

template<class T>
T LinkList<T>::Get(int i) {
    Node<T> *p = first->next;
    int count = 0;
    while (count < i) {
        p = p->next;
        count++;
    }
    if (p != nullptr) {
        return p->data;
    } else {
        throw "参数非法";
    }
}

template<class T>
int LinkList<T>::Locate(T x) {
    int count = 1;
    Node<T> *p = first->next;
    while (p != nullptr) {
        if (p->data == x) {
            return count;
        }
        p = p->next;
        count++;
    }
    return 0;
}

template<class T>
void LinkList<T>::Insert(int i, T x) {
    Node<T> *p = first;
    int count = 0;
    while (count < i - 1 && p != nullptr) {
        p = p->next;
        count++;
    }
    if (p != nullptr) {
        Node<T> *s = new Node<T>;
        s->data = x;
        s->next = p->next;
        p->next = s;
    } else
        throw "参数非法";
}

template<class T>
T LinkList<T>::Delete(int i) {
    Node<T> *p = first;
    int count = 0;
    while (count < i - 1 && p != nullptr) {
        p = p->next;
        count++;
    }
    if (p != nullptr && p->next != nullptr) {
        Node<T> *dp = p->next;
        T tp = dp->data;
        p->next = dp->next;
        delete dp;
        return tp;
    } else
        throw "参数非法";
}

template<class T>
void LinkList<T>::PrintList() {
    Node<T> *p;
    p = first->next;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}




