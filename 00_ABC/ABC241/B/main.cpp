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
    int N, M;
    cin >> N >> M;
    vector<int> A(N + 1, 0);
    vector<int> B(N + 1, 0);

    for (int i = 1; i <= N; i++)
    {
        // N本のパスタのそれぞれの長さ
        cin >> A[i];
    }
    for (int i = 1; i <= M; i++)
    {
        // i日目に食べたいパスタの長さ
        cin >> B[i];
    }

    // ある長さのパスタが何本あるかを管理するmapを作る！
    // これがこのプログラムの大事な部分
    map<int, int> num_of_pasta;

    for (int i = 1; i <= N; i++)
    {
        num_of_pasta[A[i]]++;
    }

    string answer = "Yes";
    for (int i = 1; i <= M; i++)
    {
        if (num_of_pasta[B[i]] == 0)
        {
            answer = "No";
            break;
        }
        num_of_pasta[B[i]]--;
    }
    cout << answer << endl;

    return 0;
}
