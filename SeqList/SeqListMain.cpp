//
// Created by Albert on 2021/3/1.
//
#include "SeqList.cpp"
#include <cassert>


int main() {
    SeqList<int> seq_list;
    seq_list = SeqList<int>();
    for (int i = 0; i < 4; i++) {
        int i10 = i * 10;
        seq_list.push(i10);
        assert(seq_list.length == i + 1);
        assert(seq_list.find_by_index(i) == i10);
        assert(seq_list.find_by_value(i10) == i);
    }
    seq_list.loop();
    int index = 0;
    int value = seq_list.find_by_index(index);
    assert(seq_list.find_by_value(value) == index);
    int pre_len = seq_list.length;
    seq_list.remove_by_value(value);
    assert(seq_list.length == pre_len - 1);
    return 0;
}
