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

ll dp[110][22]; //i桁目までで和がjになる場合の数

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    dp[0][0] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 0; j <= 20; ++j){
            dp[i][j] = dp[i-1][]
        }
    }
}