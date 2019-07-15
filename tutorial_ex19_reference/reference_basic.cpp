#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
	int a = 3;
	int &b = a; // bはaの参照

	cout << "a: " << a << endl; // aの値を出力
	cout << "b: " << b << endl; // bの参照先の値を出力(aの値である3が出力される)

	b = 4; // 参照先の値を変更(aが4になる)

	// 参照bは変数aと同じように(aであるかのように)振る舞っている
	cout << "a: " << a << endl; // aの値を出力
	cout << "b: " << b << endl; // bの参照先の値を出力(aの値である4が出力される)

	return 0;
}
