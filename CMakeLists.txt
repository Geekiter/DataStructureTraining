# 1. 说明cmake最低版本
cmake_minimum_required(VERSION 3.17)
# 声明一个cmake工程
project(DataStructureTraining)
# 设置CPP版本
set(CMAKE_CXX_STANDARD 14)
# 添加一个可执行文件构建目标
add_executable(DataStructureTraining main.cpp)
# Test
add_executable(Test Test/BiTreeNoRecurMain.cpp)
# 顺序表
add_executable(SeqList SeqList/SeqListMain.cpp)
add_executable(SeqList2.2 SeqList/SeqList.cpp SeqList/SeqList.h SeqList2.2/SeqList2.2.cpp)
add_executable(SeqList2.3 SeqList/SeqList.cpp SeqList/SeqList.h SeqList2.3/SeqList2.3.cpp)
# 单链表
add_executable(SingleLinkedList2.4 SingleLinkedList2.4/SingleLinkedList2.4.h SingleLinkedList2.4/SingleLinkedList2.4.cpp SingleLinkedList2.4/SingleLinkedListMain.cpp)
# 顺序栈
add_executable(SeqStack3.1 SeqList/SeqList.cpp SeqList/SeqList.h SeqStack3.1/SeqStack.h SeqStack3.1/SeqStack.cpp SeqStack3.1/SeqStackMain.cpp)
# 链栈
add_executable(LinkStack3.2 LinkStack3.2/LinkStack.h LinkStack3.2/LinkStack.cpp LinkStack3.2/LinkStackMain.cpp)
# 循环队列
add_executable(CirQueue3.3 CirQueue3.3/CirQueue.h CirQueue3.3/CirQueue.cpp CirQueue3.3/CirQueueMain.cpp)
# 双端队列
add_executable(Deque3.4 CirQueue3.3/CirQueue.h CirQueue3.3/CirQueue.cpp Deque3.4/DequeMain.cpp)
# 链队列
add_executable(LinkQueue3.5 LinkQueue3.5/LinkQueue.h LinkQueue3.5/LinkQueue.cpp LinkQueue3.5/LinkQueueMain.cpp)
# Hanio汉诺塔问题
add_executable(Hanoi3.6 Hanoi3.6/Hanoi.cpp)
# 顺序表进制转换
add_executable(SysConvert3.7 SysConvert3.7/SysConvert.cpp)
# 迷宫问题
add_executable(Maze3.8 Maze3.8/Maze.cpp)
# 迷宫问题的广度优先解决办法
add_executable(Maze3.8BFS Maze3.8BFS/Maze.cpp)
# 皇后问题
add_executable(Queen Queen3.9/Queen.cpp)