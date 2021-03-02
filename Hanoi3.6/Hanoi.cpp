//
// Hanoi 汉诺塔问题
// Created by Albert on 2021/3/2.
//
#include <iostream>

using namespace std;

void hanoi(int count, string one, string two, string three) {
    if (count == 1) {
        cout << "Disk: " << count << " from " << one << " => " << three << endl;
    } else {
        hanoi(count - 1, one, three, two);
        cout << "Disk: " << count << " from " << one << " => " << three << endl;
        hanoi(count - 1, two, one, three);
    }
}

int main() {
    int n;
    cout << "Enter Mask Count: ";
    cin >> n;
    cout << endl;
    hanoi(n, "A", "B", "C");
}