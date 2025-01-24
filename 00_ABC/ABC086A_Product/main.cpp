#include <iostream>

using namespace std;

bool isEven(int a, int b)
{
    return ((a * b) % 2 == 0);
}

int main()
{
    int a, b;
    bool result;

    cin >> a >> b;

    result = isEven(a, b);
    if (result)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}

