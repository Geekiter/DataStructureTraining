//
// Created by Albert on 2021/3/1.
// 顺序栈，实现SeqStack类模板，基本操作包括构造函数、取栈顶、出栈、入栈、判空，并验证。
//

#ifndef DATASTRUCTURETRAINING_SEQSTACK_H
#define DATASTRUCTURETRAINING_SEQSTACK_H

#include "../SeqList/SeqList.cpp"

template<typename T>
class SeqStack {
public:
    SeqList<T> stack;

    /**
     * 构造函数
     */
    SeqStack();

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
     * 取栈顶
     * @return 栈顶的值
     */
    T getTop();

    /**
     * 判断是否为空
     * @return 是否为空, 空: true, 不为空: false
     */
    bool isEmpty();
};


#endif //DATASTRUCTURETRAINING_SEQSTACK_H
