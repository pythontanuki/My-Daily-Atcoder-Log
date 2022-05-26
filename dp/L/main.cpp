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

ll dp[3300][3300];//[l,r) 双方が最善を尽くしたときの X-Y の値

int main(void){
    FAST;
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    //幅が０の時は、どの区間をもらっても必ずX-Yは０になる
    rep(i, n) dp[i][i] = 0;
    for(int width = 1; width <= n; ++width){
        for(int l = 0; l + width <= n; ++l){
            int r = l + width;
            if(n % 2 == width % 2){ //tarou
                dp[l][r] = max(dp[l + 1][r] + a[l], dp[l][r - 1] + a[r - 1]);
            }
            else{//jifou
                dp[l][r] = min(dp[l + 1][r] - a[l], dp[l][r - 1] - a[r - 1]);
            }
        }
    }
    cout << dp[0][n] << endl;
}