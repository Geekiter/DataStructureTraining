//
// 顺序表实现两个有序表合并成一个有序表
// Created by Albert on 2021/3/1.
//
#include "../SeqList/SeqList.cpp"

int main() {
    SeqList<int> arr1;
    SeqList<int> arr2;
    for (int i = 0; i < 20; i++) {
        arr1.push(i % 2);
        arr2.push(i % 3);
    }
    cout<<"arr 1:\n";
    arr1.loop();
    cout<<"\narr 2:\n";
    arr2.loop();
    arr1.combine(arr2);
    cout<<"\narr 1 and arr 2 combine :\n";
    arr1.loop();
}
