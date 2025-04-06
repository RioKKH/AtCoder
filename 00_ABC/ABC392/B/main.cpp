#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, M;
    cin >> N >> M;
    int a;
    vector<bool> ari(N + 1, false);
    vector<int> nashi;

    for (int i = 0; i < M; i++)
    {
        cin >> a;
        ari[a] = true;
    }

    for (int i = 1; i < N + 1; i++)
    {
        if (!ari[i])
        {
            nashi.push_back(i);
        }
    }

    cout << nashi.size() << endl;
    if (!nashi.empty())
    {
        for (int i = 0; i < nashi.size(); i++)
        {
            cout << nashi[i];
            if (i < nashi.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << endl;
    }

    return 0;
}
