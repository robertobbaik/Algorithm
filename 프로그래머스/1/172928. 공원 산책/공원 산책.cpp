#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int h = park.size();      // 공원의 세로 길이
    int w = park[0].size();   // 공원의 가로 길이
    int row = 0, col = 0;     // 시작 지점 좌표

    // 시작 지점(S) 찾기
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (park[i][j] == 'S') {
                row = i;
                col = j;
                break;
            }
        }
    }

    // 명령 처리
    for (const string& route : routes) {
        char dir = route[0];               // 방향 (N, S, W, E)
        int distance = stoi(route.substr(2)); // 거리

        // 이동 가능 여부 확인
        bool canMove = true;
        int newRow = row, newCol = col;
        for (int step = 1; step <= distance; ++step) {
            if (dir == 'N') newRow = row - step;
            else if (dir == 'S') newRow = row + step;
            else if (dir == 'W') newCol = col - step;
            else if (dir == 'E') newCol = col + step;

            // 범위를 벗어나거나 장애물을 만나면 이동 중단
            if (newRow < 0 || newRow >= h || newCol < 0 || newCol >= w || park[newRow][newCol] == 'X') {
                canMove = false;
                break;
            }
        }

        // 이동 가능하면 위치 업데이트
        if (canMove) {
            if (dir == 'N') row -= distance;
            else if (dir == 'S') row += distance;
            else if (dir == 'W') col -= distance;
            else if (dir == 'E') col += distance;
        }
    }

    // 최종 위치 반환
    return {row, col};
}