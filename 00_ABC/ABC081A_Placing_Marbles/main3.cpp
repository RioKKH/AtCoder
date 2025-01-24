#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int result(0);
    string s;
    cin >> s;

    for (auto iter = s.begin(); iter != s.end(); ++iter)
    {
        if (*iter == '1')
        {
            ++result;
        }
    }
    cout << result << endl;
}
