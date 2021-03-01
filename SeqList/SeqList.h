//
// Created by Albert on 2021/3/1.
//

#ifndef DATASTRUCTURETRAINING_SEQLIST_H
#define DATASTRUCTURETRAINING_SEQLIST_H
#define MAX_LENGTH 200
template<typename T>
class SeqList {
public:
    /**
     * 无参构造函数
     */
    SeqList();

    /**
     * 有参构造函数
     * @param _arr 数组
     * @param _len 长度
     */
    SeqList(T _arr[], int _len);

    int length;
    T arr[MAX_LENGTH];

    /**
     * 根据位置找值
     * @param _index  位置
     * @return 该位置的值
     */
    T findByIndex(int _index);

    /**
     * 根据值找第一次出现的位置
     * @param _value 值
     * @return 该值第一次出现的位置
     */
    int findByValue(T _value);

    /**
     * 结尾附加值
     * @param _value 值
     */
    void push(T _value);

    /**
     * 根据位置删除值
     * @param _index 位置
     */
    void removeByIndex(int _index);

    /**
     * 删除第一次出现该值的值
     * @param _value 值
     */
    void removeByValue(T _value);

    /**
     * 遍历顺序表, 并打印
     */
    void loop();

    /**
     * 去除重复元素
     */
    void removeDuplication();

    /**
     * 合并_seqList2数组
     * @param _seqList2 另一个数组
     */
    void combine(SeqList<T> _seqList2);
};


#endif //DATASTRUCTURETRAINING_SEQLIST_H
