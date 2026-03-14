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

    // この問題の場合はiを1始まりにした方が便利。
    vector<int> A(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    string answer = "Yes";

    sort(A.begin(), A.end());
    for (int i = 1; i <= N; i++)
    {
        if (A[i] != i)
        {
            answer = "No";
        }
    }

    cout << answer << endl;
    return 0;
}
