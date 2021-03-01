//
// Created by Albert on 2021/3/1.
//
#include "CirQueue.cpp"
#include <iostream>

using namespace std;

int main() {
    CirQueue<int> queue;
    try {

        queue.push(11);
        queue.push(12);
        queue.push(13);
        queue.push(14);
        queue.push(15);
        cout << queue.getTop() << endl;
        queue.pop();
        queue.pop();
        queue.pop();
        queue.push(21);
        cout << queue.getTop() << endl;
        queue.pop();
        cout << queue.getTop() << endl;
        queue.pop();
        cout << queue.getTop() << endl;
    } catch (const char *e) {
        cout << e << endl;
    }


    return 0;
}

