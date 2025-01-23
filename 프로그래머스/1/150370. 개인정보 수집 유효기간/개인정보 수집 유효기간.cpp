#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
     map<char, int> termsMap;
    
        for (string str : terms)
    {
        termsMap[str[0]] = str[2] - '0';
    }

     for (string str : terms)
    {
        termsMap[str[0]] = stoi(str.substr(2, str.size() - 2));
    }

    for (int i = 0; i < privacies.size(); ++i)
    {
        string str = privacies[i];
        string temp = "";
        int termsMonth = termsMap[str[11]];
        int divide = termsMonth / 12;
        int remainder = termsMonth % 12;


        int year = stoi(str.substr(0, 4));
        int month = stoi(str.substr(5, 2));
        int day = stoi(str.substr(8, 2));

         day -= 1;

        if(day - 1 == 0)
        {
            day = 28;
            --month;
        }
        
        month += remainder;

        if (month > 12)
        {
            month -= 12;
            ++divide;
        }

        year += divide;

        

        string y = to_string(year);
        string m = month < 10 ? "0" + to_string(month) : to_string(month);
        string d = day < 10 ? "0" + to_string(day) : to_string(day);

        temp = y + m + d;

        long long current = stol(temp);

        long long expire = stol(today.substr(0, 4) + today.substr(5, 2) + today.substr(8, 2));

        if(current < expire)
        {
            answer.push_back(i+1);
        }
    }
    return answer;
}