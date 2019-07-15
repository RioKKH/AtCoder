#include <bits/stdc++.h>
using namespace std;

// 返り値がないのでvoidを指定
void hello(string text) {
	cout << "Hello, " << text << endl;
	return; // 返り値がvoid型である関数のreturn文
}

int main() {
	hello("Tom");
	hello("C++");
}
