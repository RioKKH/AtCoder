#include <bits/stdc++.h>
using namespace std;

/**
 * 全探索的な事をしたいけれど、2^Nの探索空間は
 * 大きすぎるので不可能→動的計画法を使う事を考える。
 * 効率的な全探索だと思えばよいか。
 *
 * 全部体につけてしまうことにする→絶対倒れない
 * ここから部品を1個ずつ頭に付け替える事を考える。
 * 頭につける嬉しさが胴体のものよりも小さい場合には
 * 考えなくてよい
 * どこまで頭側に移してよいか、というのは重さが制約
 * となって決まる。
 *
 * 重さ   価値
 *   2     30
 *   8     35
 *
 * 重さの和を5以下 =(2+8)/以下で幸せが最大となるような
 * 組合せを探す。
 *
 * 重さ   価値
 *   2     30
 *   3     36
 *   4     64
 *
 * 頭の重さ (2+3+4) / 2以下になるように幸せを最大化する。
 *
 */

#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

void chmax(ll &a, ll b) { a = max(a, b); }

int main()
{
    int n;
    cin >> n;
    int W = 0;
    ll sumb = 0;
    vector<pair<int, int>> ps;

    rep(i, n)
    {
        int w, h, b;
        cin >> w >> h >> b;
        W += w;
        sumb += b;
        if (h > b)
            ps.emplace_back(w, h - b);
    }

    n = ps.size();
    const ll INF = 1e18;
    vector dp(n + 1, vector<ll>(W + 1, -INF));
    dp[0][0] = 0;

    // ここから2次元の表を作成する。
    // 本当はi番目とi+1番目しか必要が無いので、1次元配列でも実装できる
    rep(i, n)
    {
        auto [w, v] = ps[i];
        rep(j, W + 1)
        {
            chmax(dp[i + 1][j], dp[i][j]);
            if (j + w <= W)
                chmax(dp[i + 1][j + w], dp[i][j] + w);
        }
    }
    ll ans = -INF;
    rep(j, W + 1) chmax(ans, dp[n][j]);
    cout << ans + sumb << endl;
    return 0;
}
