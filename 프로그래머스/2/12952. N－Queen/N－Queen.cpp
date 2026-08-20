#include <string>
#include <vector>

using namespace std;

bool isValid(vector<vector<bool>>& queen, int n, int row, int col)
{
    for(int i = row - 1; i >= 0; i--)
    {
        if(queen[i][col])
        {
            return false;
        }
    }
    
    for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if(queen[i][j])
        {
            return false;
        }
    }
    
    for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if(queen[i][j])
        {
            return false;
        }
    }
    
    return true;
}

void placeQueen(vector<vector<bool>>& queen, int n, int row, int& answer)
{
    if(row == n)
    {
        answer++;
    }
    
    for(int col = 0; col < n; col++)
    {
        if(isValid(queen, n, row, col))
        {
            queen[row][col] = true;
            placeQueen(queen, n, row + 1, answer);
            queen[row][col] = false;
        }
    }
}

int solution(int n) {
    int answer = 0;
    
    vector<vector<bool>> queen(n, vector<bool>(n, false));
    
    placeQueen(queen, n, 0, answer);
    
    return answer;
}