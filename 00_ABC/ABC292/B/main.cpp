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
    int N, Q;
    int c, x;
    cin >> N >> Q;
    vector<int> T(N + 1, 0);

    for (int i = 0; i < Q; i++)
    {
        cin >> c >> x;
        if (c == 1)
        {
            T[x] += 1;
        }
        else if (c == 2)
        {
            T[x] += 2;
        }
        else if (c == 3)
        {
            if (T[x] >= 2) // T[x] が３以上の数値になることは無いと問題によって保障されている
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            // pass：この問題にいてはおこりえないと保証されている
        }
    }

    return 0;
}
