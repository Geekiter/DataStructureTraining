//
// 迷宫问题 广度优先版
// Created by Albert on 2021/3/5.
//
#include <vector>
#include <iostream>
#include <queue>

#define MAZE_ROW  8
#define MAZE_COLUMN  10
#define DIRECTION 8
#define bX 5 // 起点
#define bY 1
#define eX 6 // 终点
#define eY 8
using namespace std;

// 一点出发， 记录周围所有的点， 所有点的前驱置为一点。所有点入队， 重复记录和置为前驱。直到发现终点或无解。
// 波浪
int main() {
    int maze[MAZE_ROW][MAZE_COLUMN] = {
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 0, 1, 1, 1, 0, 1, 1, 1, 1},
            {1, 1, 0, 1, 0, 1, 1, 1, 1, 1},
            {1, 0, 1, 0, 0, 0, 0, 0, 1, 1},
            {1, 0, 1, 1, 1, 0, 1, 1, 1, 1},
            {1, 1, 0, 0, 1, 1, 0, 0, 0, 1},
            {1, 0, 1, 1, 0, 0, 1, 1, 0, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    /*当前位置的8个方向右下，左下，下，右，左，上，左上，右上，*/
    int move[DIRECTION][2] = {{1,  1},
                              {1,  -1},
                              {1,  0},
                              {0,  1},
                              {0,  -1},
                              {-1, 0},
                              {-1, -1},
                              {-1, 1}};
    int pointList[MAZE_ROW][MAZE_COLUMN][2];
    queue<int> pointQueueX;
    queue<int> pointQueueY;
    pointQueueX.push(bX);
    pointQueueY.push(bY);
    pointList[bX][bY][0] = -1;
    pointList[bX][bY][1] = -1;
    maze[bX][bY] = 1;
    bool isFindEnd = false;
    bool isError = false;
    // 结束标志
    while (!isFindEnd && !isError) {
        // 当前点列表的长度
        int findCount = 0;
        // 遍历当前长度
        for (int m = 0; m < pointQueueX.size(); m++) {
            int beforeX = pointQueueX.front();
            int beforeY = pointQueueY.front();
            // 八个方向查找点
            for (int i = 0; i < DIRECTION; i++) {
                int nextX = beforeX + move[i][0];
                int nextY = beforeY + move[i][1];
                // 如果为0
                if (maze[nextX][nextY] == 0) {
                    pointList[nextX][nextY][0] = beforeX;
                    pointList[nextX][nextY][1] = beforeY;
//                    cout << nextX << ", " << nextY << endl;
                    // 点列表加入0点
                    pointQueueX.push(nextX);
                    pointQueueY.push(nextY);
                    // 找到过新的0
                    findCount++;
                    // 0点置为1, 防止下一次访问
                    maze[nextX][nextY] = 1;
                    if (nextX == eX && nextY == eY) {
                        isFindEnd = true;
                        break;
                    }
                }
                // 下一个点是否为终点

            }
            if (isFindEnd) {
                break;
            }

            // 不去除队头
            // 改为改变开始查找位置
            pointQueueX.pop();
            pointQueueY.pop();

            if (pointQueueX.empty()) {
                isError = true;
                break;
            }
        }
    }
    if (isError) {
        cout << "No router." << endl;
        return 0;
    }

    if (isFindEnd) {
        int count = 0;
        int beforeX = eX;
        int beforeY = eY;
        while (true) {
            cout << count << "# (" << beforeX << ", " << beforeY << ") " << endl;
            int tmpX = beforeX;
            int tmpY = beforeY;
            beforeX = pointList[tmpX][tmpY][0];
            beforeY = pointList[tmpX][tmpY][1];
            if (beforeX == -1 && beforeY == -1) {
                break;
            } else {
                count++;
            }
        }
    }
    return 0;
}