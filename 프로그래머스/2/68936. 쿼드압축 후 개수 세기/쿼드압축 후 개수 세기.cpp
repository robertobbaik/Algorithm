#include <string>
#include <vector>

using namespace std;

int zeroCount = 0, oneCount = 0;

bool isUniform(const vector<vector<int>>& arr, int x, int y, int size) {
    int first = arr[x][y];
    for (int i = x; i < x + size; ++i) {
        for (int j = y; j < y + size; ++j) {
            if (arr[i][j] != first) {
                return false;
            }
        }
    }
    return true;
}

void compress(const vector<vector<int>>& arr, int x, int y, int size) {
    if (isUniform(arr, x, y, size)) {
        if (arr[x][y] == 0) {
            zeroCount++;
        } else {
            oneCount++;
        }
        return;
    }
    
    int newSize = size / 2;
    compress(arr, x, y, newSize);
    compress(arr, x, y + newSize, newSize);
    compress(arr, x + newSize, y, newSize);
    compress(arr, x + newSize, y + newSize, newSize);
}

vector<int> solution(vector<vector<int>> arr) {
    zeroCount = 0;
    oneCount = 0;
    int size = arr.size();
    compress(arr, 0, 0, size);
    return {zeroCount, oneCount};
}
