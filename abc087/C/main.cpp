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

int table[2][110];
int dp[2][110];

int main(void){
    FAST;
    int n;
    cin >> n;
    
    rep(i, 2){
        rep(j, n){
            cin >> table[i][j];
        }
    }
    dp[0][0] = table[0][0];
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < n; ++j){
            if(i) chmax(dp[i][j], (dp[i-1][j] + table[i][j]));
            if(j) chmax(dp[i][j], (dp[i][j-1] + table[i][j]));
        }
    }
    cout << dp[1][n-1] << endl;
    return 0;
}