//
// 实现LinkQueue类模板，基本操作包括构造函数、析构函数、入队、出队、取队头、判空，并验证
// Created by Albert on 2021/3/2.
//

#ifndef DATASTRUCTURETRAINING_LINKQUEUE_H
#define DATASTRUCTURETRAINING_LINKQUEUE_H
#include <vector>
using namespace std;
template<typename T>
class LinkQueue {
private:
    vector<T> queue;
public:
    /**
     * 构造函数
     */
    LinkQueue();
    /**
     * 析构函数
     */
    ~LinkQueue();
    /**
     * 入栈
     * @param _value 入栈的值
     */
    void push(T _value);
    /**
     * 出栈
     */
    void pop();
    /**
     * 取队头
     * @return 队头的值
     */
    T getTop();
    /**
     * 判空
     * @return 是否为空, 空: true, 非空: false
     */
    bool isEmpty();
};


#endif //DATASTRUCTURETRAINING_LINKQUEUE_H
