#include <bits/stdc++.h>
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

double dp[3300][3300];// i枚目までコインを投げた時に表がj枚になる確率
double p[3300];


int main(void){
    FAST;
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> p[i];
    dp[0][0] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 0; j <= i; ++j){
            dp[i][j] += dp[i-1][j] * (1 - p[i]);
            if(j - 1 >= 0) dp[i][j] += dp[i-1][j-1] * p[i];
        }
    }
    double ans = 0;
    for(int j = 0; j <= n; ++j){
        if(j > n - j) ans += dp[n][j];
    }
    printf("%.15f\n", ans);
    return 0;
}