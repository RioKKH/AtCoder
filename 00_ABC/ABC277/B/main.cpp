#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print_vector(const vector<T> &v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i];
        if (i < size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;

    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    bool answer = true;

    // 条件3を２重ループでチェックする
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (S[i] == S[j])
            {
                answer = false;
            }
        }
    }

    const string s1 = "HDCS";
    const string s2 = "A23456789TJQK";

    for (int i = 0; i < N; i++)
    {
        int cond1 = count(s1.begin(), s1.end(), S[i][0]);
        int cond2 = count(s2.begin(), s2.end(), S[i][1]);
        // cond1 == 1であれば条件1を満たす。従って!cond1は0となりfalse
        // cond2 == 1であれば条件2を満たす
        if (!cond1 || !cond2)
        {
            answer = false;
        }
    }

    cout << (answer ? "Yes" : "No") << endl;

    return 0;
}
