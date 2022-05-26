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

bool dp[110000];

int main(void){
    FAST;
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    for(int i = 0; i <= k; ++i){
        for(int j = 0; j < n; ++j){
            if(i - a[j] >= 0)dp[i] = dp[i] |= !dp[i-a[j]];
        }
    }
    if(dp[k]) cout << "First" << endl;
    else cout << "Second" << endl;
}