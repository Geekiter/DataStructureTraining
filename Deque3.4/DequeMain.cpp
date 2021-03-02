//
// Created by Albert on 2021/3/2.
//

#include "../CirQueue3.3/CirQueue.cpp"
#include <iostream>
#include <cassert>

using namespace std;

int main() {
    CirQueue<int> queue;
    try {

        queue.push(11);
        queue.push(12);
        queue.push(13);
        queue.push(14);
        queue.push(15);
        queue.pop();
        int t1 = queue.getTop();
        queue.popEnd();
        int t2 = queue.getTop();
        assert(t1 == t2);
    } catch (const char *e) {
        cout << e << endl;
    }


    return 0;
}

