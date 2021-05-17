#include <iostream>
#include <string>

using namespace std;

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a;
    int b, c;
    string s;

    cin >> a;
    cin >> b >> c;
    cin >> s;
    cout << add(a, b, c) << " " << s << endl;
}
