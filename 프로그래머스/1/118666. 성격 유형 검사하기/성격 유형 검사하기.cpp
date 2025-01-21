#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";

    unordered_map<char, int> results = 
    {
        {'R', 0},
        {'T', 0},
        {'C', 0},
        {'F', 0},
        {'J', 0},
        {'M', 0},
        {'A', 0},
        {'N', 0},
    };

    for(int i = 0; i < survey.size(); i++)
    {
        if(choices[i] < 4)
        {
            int result = 4 - choices[i];
            char a = survey[i][0];
            results[a] += result;
        }
        else
        {
            int result = choices[i] - 4;
            char a = survey[i][1];
            results[a] += result;
        }
    }

    if(results['R'] >= results['T'])
    {
        answer += 'R';
    }
    else
    {
        answer += 'T';
    }

    if(results['C'] >= results['F'])
    {
        answer += 'C';
    }
    else
    {
        answer += 'F';
    }

    if(results['J'] >= results['M'])
    {
        answer += 'J';
    }
    else
    {
        answer += 'M';
    }

    if(results['A'] >= results['N'])
    {
        answer += 'A';
    }
    else
    {
        answer += 'N';
    }
    return answer;
}