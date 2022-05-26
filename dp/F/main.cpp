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

int dp[3300][3300];

int main(void){
    FAST;
    string s,t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    for(int i = 0; i <= n; ++i) dp[i][0] = 0;
    for(int j = 0; j <= m; ++j) dp[0][j] = 0;
    dp[1][1] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if(s[i - 1] == t[j - 1]) dp[i][j] = max(dp[i][j],dp[i - 1][j - 1] + 1);
        }
    }
    string rev = "";
    while(n > 0 && m > 0){
        if(dp[n][m] == dp[n - 1][m]) n--;
        else if(dp[n][m] == dp[n][m - 1]) m--;
        else{
            rev += s[n - 1];
            n--;
            m--;
        }
    }
    reverse(rev.begin(), rev.end());
    cout << rev << endl;
}