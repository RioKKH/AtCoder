#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 座標圧縮を扱う問題
    // 座標圧縮ではソート、ユニークな要素の抽出、二分探索を用いるので
    // これら手法を組み合わせた総合問題となっている

    int N;          // 与えられる配列の長さ
    int A[100'009]; // 圧縮前のデータを格納する配列
    int B[100'009]; // 圧縮後のデータを格納する配列
    vector<int> T;

    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> A[i];

    // 配列Ｔの作成
    for (int i = 1; i <= N; i++)
        T.push_back(A[i]);
    sort(T.begin(), T.end());

    // 配列Ｔの重複を消す
    // Tには重複のない昇順の整数が格納されている
    // erase 関数, unique 関数の使い方
    T.erase(unique(T.begin(), T.end()), T.end());
    // std::vector::erase()
    // 指定した要素を削除する
    // T.erase(T.begin() + 2); // 2番目の単一要素を削除
    // T.erase(T.begin(), T.begin() + 2); begin() ~ beging() +
    // 2の範囲の要素を削除
    //
    // std::unique()
    // decltype(T)::iterator result = std::unique(T.begin(), T.end())
    // [T.begin(), result)の範囲に重複を除いた結果が入っている。
    // 不要になった要素を削除する
    // T.erase(result, T.end()); // これを1行で実装したのが23行目

    // 答えを求める
    for (int i = 1; i <= N; i++) {
        // vector型のlower_boundは以下のような形式で各
        // vector型の添え字は0番目から始まるので、1を足す必要があることに注意
        // 数値A[i]が配列Tの何番目の数値と一致するかを二分探索で調べる。
        // Tの中に必ずA[i]と一致する数値があり、Ｔの中で何番目の要素なのかをB[i]に格納する
        B[i] = lower_bound(T.begin(), T.end(), A[i]) - T.begin();
        // 上述の通り、lower_boundはvector型の添え字の配列を返すので、+1してあげる必要がある
        B[i] += 1;
    }

    // 答えを空白区切りで出力
    for (int i = 1; i <= N; i++) {
        if (i >= 2)
            cout << " ";
        cout << B[i];
    }
    cout << endl;

    return 0;
}
