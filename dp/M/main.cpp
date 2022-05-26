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

ll dp[110][110000];

int main(void){
    FAST;
    int n,k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i) cin >> a[i];

    for(int i = 1; i <= n; ++i){
        for(int j = 0; j <= k; ++j){
            for(int l = 0; l <= a[i]; ++l){
                if(j - l >= 0) dp[i][j] += dp[i-1][j-l];
            }
        }
    }
    cout << dp[n][k] << endl;
}