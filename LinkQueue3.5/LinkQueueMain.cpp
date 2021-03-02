//
// Created by Albert on 2021/3/2.
//
#include <cassert>
#include "LinkQueue.cpp"

int main() {
    LinkQueue<int> queue;
    queue.push(11);
    queue.push(12);
    queue.push(13);
    queue.push(14);
    queue.push(15);
    queue.pop();
    queue.pop();
    queue.pop();
    assert(queue.getTop() == 14);
    return 0;
}
