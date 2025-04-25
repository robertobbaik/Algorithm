#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    //freopen("sequence.txt", "r", stdin);
    
    int N;

    cin >> N;

    vector<int> A(N, 0);

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<int> lis;

    for(int i = 0; i < N; ++i)
    {
        int num = A[i];
        auto it = lower_bound(lis.begin(), lis.end(), num);
        if(it == lis.end())
        {
            lis.push_back(num);
        }
        else
        {

            *it = num;
        }
    }

    cout << lis.size() << endl;
    return 0;
}