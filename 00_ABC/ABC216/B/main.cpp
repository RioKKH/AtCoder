#include <bits/stdc++.h>
using namespace std;

struct Name
{
    string family_name;
    string first_name;
};

int main()
{
    int N;
    cin >> N;

    vector<Name> Names(N);
    for (int i = 0; i < N; i++)
    {
        cin >> Names[i].family_name >> Names[i].first_name;
    }

    string hasDuplicateName = "No";
    for (int i = 0; i < N - 1; i++)
    {
        string fa_i = Names[i].family_name;
        string fi_i = Names[i].first_name;
        for (int j = i + 1; j < N; j++)
        {
            string fa_j = Names[j].family_name;
            string fi_j = Names[j].first_name;
            if ((fa_i == fa_j) && (fi_i == fi_j))
            {
                hasDuplicateName = "Yes";
                break;
            }
        }
    }
    cout << hasDuplicateName << endl;
    return 0;
}
