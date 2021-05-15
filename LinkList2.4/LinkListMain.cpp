#include <iostream>

using namespace std;

#include "LinkList.cpp"

int main() {
    int r[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    LinkList<int> L(r, 10);
    cout << "Print List: " << endl;
    L.PrintList(); /*显示单链表中所有的元素*/
    try {
        L.Insert(7, 12);
    }
    catch (char *str) {
        cout << str << endl;
    }
    cout << "Print List after inserting: " << endl;
    L.PrintList(); /*显示单链表中所有元素*/
    cout << "the position of 15: ";
    cout << L.Locate(15) << endl; /*查找元素15，并返回在单链表中位置*/
    int length = L.Length();
    cout << "link list length: " << length << endl;
    cout << "before deleting: " << endl;
    L.PrintList(); /*显示单链表中所有的元素*/
    try {
        L.Delete(6); /*删除第6个元素结点*/
    }
    catch (char *str) {
        cout << str << endl;
    }
    cout << "after deleting: " << endl;
    L.PrintList(); /*显示单链表中所有元素*/
    return 0;
}
