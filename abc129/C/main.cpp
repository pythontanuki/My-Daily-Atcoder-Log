#include <bits/stdc++.h>
#include <atcoder/all>
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

//dp[i] i段目に辿り着く場合の数
mint dp[110000];
int a[110000];

int main(void){
    FAST;
    int n,m;
    cin >> n >> m;
    rep(i, m){
        cin >> a[i];
        dp[a[i]] = -1;
    }
    dp[0] = 1;
    for(int i = 1; i <= n; ++i){
        if(dp[i] == -1) continue;
        if(i-1 >= 0 && dp[i-1] != -1) dp[i] += dp[i-1];
        if(i-2 >= 0 && dp[i-2] != -1) dp[i] += dp[i-2];
    }
    cout << dp[n].val() << endl;
}