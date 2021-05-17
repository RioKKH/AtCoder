#include <iostream>
// #include <bitset>
using namespace std;

// const unsigned int S1 = (1 << 2);
// const unsigned int S2 = (1 << 1);
// const unsigned int S3 = (1 << 0);

int main()
{
    int a(0);
    int s1(0), s2(0), s3(0);

    cin >> a;

    s1 = a / 100;
    s2 = (a - 100*s1) / 10;
    s3 = (a - 100*s1 - 10*s2);
    
    std::cout <<  s1 + s2 + s3 << std::endl;
}
