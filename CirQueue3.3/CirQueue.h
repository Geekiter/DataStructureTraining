//
// 循环队列, 实现CirQueue类模板，基本操作包括构造函数、入队、出队、取队头、判空，并验证。
// Created by Albert on 2021/3/1.
//

#ifndef DATASTRUCTURETRAINING_CIRQUEUE_H
#define DATASTRUCTURETRAINING_CIRQUEUE_H
#define MAX_SIZE 5

template<typename T>
class CirQueue {
private:
    T queue[MAX_SIZE];
    int begin = -1;
    int end = 0;
    int count = 0;
public:
    /**
     * 构造函数
     */
    CirQueue();

    /**
     * 入队
     * @param _value 入队的值
     */
    void push(T _value);

    /**
     * 出队
     */
    void pop();

    /**
     * 取队头
     * @return 对头的值
     */
    T getTop();

    /**
     * 队是否为空
     * @return 空: true, 不为空: false
     */
    bool isEmpty();
};


#endif //DATASTRUCTURETRAINING_CIRQUEUE_H
