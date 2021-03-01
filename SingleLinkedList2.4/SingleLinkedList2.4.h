//
// Created by Albert on 2021/3/1.
//

#ifndef DATASTRUCTURETRAINING_SINGLELINKEDLIST2_4_H
#define DATASTRUCTURETRAINING_SINGLELINKEDLIST2_4_H

template<typename T>
class SingleLinkedList {
public:
//    说明：实现LinkList类模板，基本操作包括无参构造函数、有参构造函数、析构函数，求单链表的表长，按位查找，按值查找、插入、删除、遍历，并对各操作进行验证。
    int length;

    /**
     * 无参构造函数
     */
    SingleLinkedList();

    /**
     * 有参构造函数
     * @param _arr 数组
     * @param _len 长度
     */
    SingleLinkedList(T _arr[], int _len);

    /**
     * 按位查找
     * @param _index 位置
     * @return 该位置的值
     */
    T findByIndex(int _index);

    /**
     * 查找该值出现第一次的位置
     * @param _value 值
     * @return 该值的位置
     */
    int findByValue(int _value);

    /**
     * 结尾插入
     * @param _value 值
     */
    void push(T _value);

    /**
     * 根据值删除
     * @param _index 位置
     */
    void removeByIndex(int _index);

    /**
     * 根据值删除该值第一次出现的位置
     * @param value 值
     */
    void removeByValue(T value);

    /**
     * 遍历
     */
    void loop();

    /**
     * 逆序
     */
    void reversed();

    /**
     * 排序
     */
    void order();

    /**
     * 合并
     * @param _sl 另一个单链表
     */
    void combine(SingleLinkedList<T> _sl);

    /**
     * 求和另一个单链表交集
     * @param _sl 另一个单链表
     */
    void intersection(SingleLinkedList<T> _sl);

    /**
     * 求和另一个单链表的并集
     * @param _sl 另一个单链表
     */
    void unionSet(SingleLinkedList<T> _sl);

    /**
     * 去除重复
     */
    void removeDuplication();

    /**
     * 一元多项式相加
     */
    void linkedPlus();
};

#endif //DATASTRUCTURETRAINING_SINGLELINKEDLIST2_4_H
