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

vector<int> edge[110000];
bool used[110000];
int memo[110000];

int dp(int u){
    int ans = 0;
    if(used[u]) return memo[u]; 
    for(int v : edge[u]){
        chmax(ans, dp(v) + 1);
    }
    memo[u] = ans;
    used[u] = true;
    return ans;
}

int main(void){
    FAST;
    int n,m;
    cin >> n >> m;
    rep(i, m){
        int x,y;
        cin >> x >> y;
        edge[x].push_back(y);
    }
    int ans = 0;
    for(int i = 1; i <= n; ++i){
        chmax(ans, dp(i));
    }
    cout << ans << endl;
}