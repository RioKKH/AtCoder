#include <bits/stdc++.h>
using namespace std;

/**
 * 再帰関数が分岐を作ることを理解する
 * gen()の3行は順番に実行されるのではなく、3つの独立した分岐が都度生成する
 */
void gen(int pos, int N, string current)
{
    // ベースケース : N文字に到達したら出力
    if (pos == N)
    {
        cout << current << endl;
        return;
    }

    // 再帰ケース : 'a', 'b', 'c'を順に試す
    gen(pos + 1, N, current + 'a');
    gen(pos + 1, N, current + 'b');
    gen(pos + 1, N, current + 'c');
}

int main()
{
    int N;
    cin >> N;

    gen(0, N, "");

    return 0;
}
