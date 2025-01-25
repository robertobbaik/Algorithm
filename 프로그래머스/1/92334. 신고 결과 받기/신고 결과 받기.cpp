#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    set<string> reportset;
    vector<int> answer;

    unordered_map<string, int> reportCount;
    unordered_map<string, set<string>> privatereport;

    for(const string& plaint : report)
    {
        int blank = plaint.find(' ');
        string complainant = plaint.substr(0, blank);
        string defendant = plaint.substr(blank + 1, plaint.size() - blank);

        privatereport[complainant].insert(defendant);
    }

    for(auto p : privatereport)
    {
        for (auto a : p.second)
        {
            ++reportCount[a];
        }
    }

    for(auto temp : reportCount)
    {
        if(temp.second >= k)
        {
            reportset.insert(temp.first);
        }
    }

    for(const string& name : id_list)
    {
        int reportCount = 0;
        for(const string& temp : privatereport[name])
        {
            if(reportset.count(temp))
            {
                ++reportCount;
            }
        }
        answer.push_back(reportCount);
    }
    return answer;
}