#include <bits/stdc++.h>
# include <atcoder/all>
using namespace atcoder;
using namespace std;
# define ll long long
# define rep(i,n) for(int i = 0; i < (n); ++i)
# define ALL(obj) (obj).begin(), (obj).end()
# define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
# define _GLIBCXX_DEBUG
# define Pll pair<ll, ll>
#define P pair<int,int>
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int INF = 1 << 30;
using mint = modint1000000007;

string field[1100];
mint dp[1100][1100];

int main(void){
    FAST;
    int h, w;
    cin >> h >> w;
    rep(i, h) cin >> field[i];
    dp[h-1][w-1] = 1;
    for(int i = h - 1; i >= 0; --i){
        for(int j = w - 1; j >= 0; --j){
            if(i == h - 1 && j == w - 1) continue;
            if(i + 1 < h) dp[i][j] += dp[i+1][j];
            if(j + 1 < w) dp[i][j] += dp[i][j+1];
            if(field[i][j] == '#') dp[i][j] = 0;
        }
    }
    cout << dp[0][0].val() << endl;
}