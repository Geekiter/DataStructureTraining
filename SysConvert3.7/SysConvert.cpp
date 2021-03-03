//
// 利用顺序栈实现进制转换, 说明：将一个十进制数转换成2-16进制之间的数。
// Created by Albert on 2021/3/2.
//
#include "../SeqStack3.1/SeqStack.cpp"

/**
 * 进制转换
 * @param _num 待转换的数
 * @param _sys 要转换的进制
 */
void SysConvert(int _num, int _sys, SeqStack<int> *_stack) {
    int remainder = _num % _sys; //余数
    int quotient = _num / _sys; //商
    _stack->push(remainder);
    if (quotient != 0)
        SysConvert(quotient, _sys, _stack);
}

void printNum(int _num) {
    if (_num > 9) {
        cout << (char) ('a' + _num - 10);
    } else {
        cout << _num;
    }
}

int main() {
    SeqStack<int> stack1;
    SeqStack<int> *stack;
    stack = &stack1;
    int num, sys;
    cout << "Enter num(10):";
    cin >> num;
    cout << "Enter sys:";
    cin >> sys;
    SysConvert(num, sys, stack);
    cout << "Out num(" << sys << "):";
    while (!stack->isEmpty()) {
        printNum(stack->getTop());
        stack->pop();
    }

    return 0;
}