#include "../SeqStack3.1/SeqStack.cpp"
#include <vector>

#define MAZE_ROW  8
#define MAZE_COLUMN  10
#define DIRECTION 8

int main() {
    SeqStack<int> stackX;
    SeqStack<int> stackY;
    vector<int> visitedX;
    vector<int> visitedY;
    // 起点
    int bX = 5, bY = 1;
    // 终点
    int eX = 6, eY = 8;
    /*当前位置的8个方向右下，左下，下，右，左，上，左上，右上，*/
    int move[DIRECTION][2] = {{1,  1},
                              {1,  -1},
                              {1,  0},
                              {0,  1},
                              {0,  -1},
                              {-1, 0},
                              {-1, -1},
                              {-1, 1}};
    int maze[MAZE_ROW][MAZE_COLUMN] = {
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 0, 1, 1, 1, 0, 1, 1, 1, 1},
            {1, 1, 0, 1, 0, 1, 1, 1, 1, 1},
            {1, 0, 1, 0, 0, 0, 0, 0, 1, 1},
            {1, 0, 1, 1, 1, 0, 1, 1, 1, 1},
            {1, 1, 0, 0, 1, 1, 0, 0, 0, 1},
            {1, 0, 1, 1, 0, 0, 1, 1, 0, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    stackX.push(bX);
    stackY.push(bY);
    bool isFindEnd = false;
    while (!isFindEnd) {
        for (int i = 0; i < DIRECTION; i++) {
            int nextX = stackX.getTop() + move[i][0];
            int nextY = stackY.getTop() + move[i][1];
            bool isVisited = false;
            //是否合法
            if ((nextX >= 0 && nextX < MAZE_ROW) && (nextY >= 0 && nextY < MAZE_COLUMN)) {
                //是否访问过
                for (int j = 0; j < visitedX.size(); j++) {
                    if (nextX == visitedX[j] && nextY == visitedY[j]) {
                        isVisited = true;
                        break;
                    }
                }
                //是否访问过
                if (isVisited) {
                    // 不是最后一个方向的点, 跳过这个方向点的对比
                    if (i < DIRECTION - 1) {
                        continue;
                    } else {
                        // 是最后一个方向的点, 出栈
                        stackX.pop();
                        stackY.pop();
                        // 如果栈为空了, 无路
                        if (stackX.isEmpty() && stackY.isEmpty()) {
                            cout << "No Router.";
                            return 0;
                        }

                    }
                } else {
                    //如果没有访问过,
                    visitedX.push_back(nextX);
                    visitedY.push_back(nextY);
                    // 为通路
                    if (maze[nextX][nextY] == 0) {
                        // 如果是终点, 结束
                        if (nextX == eX && nextY == eY) {
                            isFindEnd = true;
                            cout << "Find End." << endl;
                        }
//                      cout << "Find a point: " << nextX << ", " << nextY << endl;
                        // 如果不是终点, 入栈
                        stackX.push(nextX);
                        stackY.push(nextY);
                        break;

                    } else {
                        // 不是最后一个方向的点, 跳过这个方向点的对比
                        if (i < DIRECTION - 1) {
                            continue;
                        } else {
                            // 是最后一个方向的点, 出栈
                            stackX.pop();
                            stackY.pop();
                            // 如果栈为空了, 无路
                            if (stackX.isEmpty() && stackY.isEmpty()) {
                                cout << "No Router.";
                                return 0;
                            }

                        }
                    }
                }
            }
        }
    }
    int index = stackX.stack.length;
    while (!stackX.isEmpty()) {
        cout << index << "# (" << stackX.getTop() << ", " << stackY.getTop() << ") " << endl;
        stackX.pop();
        stackY.pop();
        index--;
    }

}