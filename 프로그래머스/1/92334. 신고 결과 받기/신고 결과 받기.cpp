#include <string>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>

using namespace std;

vector<string> splitBySpace(const string &text)
{
    vector<string> result;
    string token;
    stringstream stream(text);

    while (stream >> token)
    {
        result.push_back(token);
    }

    return result;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
    vector<int> answer;

    map<string, set<string>> report_list; // key 피신고자, set 신고자
    map<string, int> reported_count; // Key 피신고자, int 신고당한 횟수
    map<string, int> report_count;

    for(string s : report)
    {
        vector<string> v = splitBySpace(s);

        report_list[v[1]].insert(v[0]);
    }

    for(string s : id_list)
    {
       reported_count[s] = report_list[s].size();
    }

    for(string s : id_list)
    {
        if(reported_count[s] >= k)
        {
            for(string ss : report_list[s])
            {
                report_count[ss]++;
            }
        }
    }

    for(string s : id_list)
    {
        answer.push_back(report_count[s]);
    }

    
    
    return answer;
}