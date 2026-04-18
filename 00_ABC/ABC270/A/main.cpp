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
    int A, B;
    /**
     * A: 高橋君
     * B: 青木君
     */
    cin >> A >> B;
    /**
     * 以下の様にいちいち足し上げる必要は無い。
    int answer = 0;
    for (int i = 0; i < 3; i++)
    {
        // cout << "i: " << i << endl;
        // cout << (A | B) << endl;
        // cout << (1 << i) << endl;
        // cout << ((A & B) & (1 << i)) << endl;
        // cout << endl;

        if ((A | B) & (1 << i))
        {
            answer += (1 << i);
        }
    }
    cout << answer << endl;
    */

    cout << (A | B) << endl;
    return 0;
}
