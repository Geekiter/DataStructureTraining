# 1. 说明cmake最低版本
cmake_minimum_required(VERSION 3.17)
# 声明一个cmake工程
project(DataStructureTraining)
# 设置CPP版本
set(CMAKE_CXX_STANDARD 14)
# 添加一个可执行文件构建目标
add_executable(DataStructureTraining main.cpp)
add_executable(SeqList SeqList/SeqList.cpp SeqList/SeqList.h SeqList/SeqListMain.cpp)
add_executable(SeqList2.2 SeqList/SeqList.cpp SeqList/SeqList.h SeqList2.2/SeqList2.2.cpp)
add_executable(SeqList2.3 SeqList/SeqList.cpp SeqList/SeqList.h SeqList2.3/SeqList2.3.cpp)
add_executable(SingleLinkedList2.4 SingleLinkedList2.4/SingleLinkedList2.4.h SingleLinkedList2.4/SingleLinkedList2.4.cpp SingleLinkedList2.4/SingleLinkedListMain.cpp)
add_executable(SeqStack3.1 SeqList/SeqList.cpp SeqList/SeqList.h SeqStack3.1/SeqStack.h SeqStack3.1/SeqStack.cpp SeqStack3.1/SeqStackMain.cpp)