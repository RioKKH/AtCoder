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
    int a, b;
    cin >> a >> b;
    bitset<32> aa(a), bb(b);

    cout << (aa & bb) << endl;
    cout << (aa | bb) << endl;
    cout << (aa ^ bb) << endl;
    return 0;
}
