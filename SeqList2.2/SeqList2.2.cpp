//
// 2.2 顺序表实现有序表中重复元素的删除
// Created by Albert on 2021/3/1.
//
#include <cassert>
#include "../SeqList/SeqList.cpp"

int main() {
    SeqList<int> seq_list;
    seq_list = SeqList<int>();
    for (int i = 0; i < 100; i++) {
        int i2 = i % 10;
        seq_list.push(i2);
    }
    seq_list.loop();
    cout << "\n__________" << endl;
    seq_list.removeDuplication();
    seq_list.loop();
    return 0;
}

