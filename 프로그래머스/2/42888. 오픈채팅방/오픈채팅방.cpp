#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> splitBySpace(const string& msg)
{
    vector<string> result;
    string word;
    stringstream ss(msg);

    while (ss >> word)
    {
        result.push_back(word);
    }

    return result;
}

vector<string> solution(vector<string> record)
{
    vector<string> answer;
    unordered_map<string, string> nickname;

    // 최종 닉네임 저장
    for (const string& msg : record)
    {
        vector<string> command = splitBySpace(msg);

        if (command[0] == "Enter" ||
            command[0] == "Change")
        {
            nickname[command[1]] = command[2];
        }
    }

    // 최종 닉네임으로 메시지 생성
    for (const string& msg : record)
    {
        vector<string> command = splitBySpace(msg);

        if (command[0] == "Enter")
        {
            answer.push_back(
                nickname[command[1]] + "님이 들어왔습니다."
            );
        }
        else if (command[0] == "Leave")
        {
            answer.push_back(
                nickname[command[1]] + "님이 나갔습니다."
            );
        }
    }

    return answer;
}