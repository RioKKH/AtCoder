#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int result(0);
    string s;
    cin >> s;

    for (const auto& x : s)
    {
        if (x == '1')
        {
            ++result;
        }
    }
    cout << result << endl;
}
