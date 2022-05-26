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
#define LINF (1LL<<60)

ll n;
ll a[440];
ll sum[440][440];
ll dp[440][440]; 

int main(void){
    FAST;
    cin >> n;
    rep(i, n) cin >> a[i];
    
    for(int l = 0; l < n; ++l){
        sum[l][l+1] = a[l];
        for(int r = l + 2; r <= n; ++r){
            sum[l][r] = sum[l][r-1] + a[r-1];
        }
    }
    
    for(int width = 2; width <= n; ++width){
        for(int l = 0; l + width <= n ; ++l){
            int r = l + width;
            dp[l][r] = LINF;
            for(int m = l + 1; m < r; ++m){
                dp[l][r] = min(dp[l][r], dp[l][m]+dp[m][r]+sum[l][r]);
            }
        }
    }
    cout << dp[0][n] << endl;
}