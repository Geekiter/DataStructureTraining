//
// 链栈, 实现LinkStack类模板，基本操作包括构造函数、析构函数、取栈顶、出栈、入栈、判空，并验证。
// Created by Albert on 2021/3/1.
//

#ifndef DATASTRUCTURETRAINING_LINKSTACK_H
#define DATASTRUCTURETRAINING_LINKSTACK_H


#include "LinkStack.h"
#include <vector>

using namespace std;

template<typename T>
class LinkStack {
public:
    vector<T> arr;

    /**
     * 构造函数
     */
    LinkStack();

    /**
     * 析构函数
     */
    ~LinkStack();

    /**
     * 取栈顶
     * @return 栈顶的值
     */
    T getTop();

    /**
     * 入栈
     * @param _value 入栈的值
     */
    void push(T _value);

    void pop();

    /**
     * 是否为空
     * @return 空: true, 不为空: false
     */
    bool isEmpty();
};


#endif //DATASTRUCTURETRAINING_LINKSTACK_H
