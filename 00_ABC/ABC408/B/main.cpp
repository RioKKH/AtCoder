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
    int a, N;
    std::set<int> A;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        A.insert(a);
    }

    vector<int> answer(A.begin(), A.end());
    sort(answer.begin(), answer.end());
    cout << answer.size() << endl;
    for (int i = 0; i < int(answer.size()); i++)
    {
        cout << answer[i] << " \n"[i + 1 == (int)answer.size()];
    }
}
