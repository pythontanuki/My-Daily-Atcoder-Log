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

double dp[330][330][330];
int cnt[4];

int main(void){
    FAST;
    int n;
    cin >> n;
    rep(i, n){
        int a;
        cin >> a;
        cnt[a]++;
    }

    for(int i = 0; i <= n; ++i){
        for(int j = 0; j <= n; ++j){
            for(int k = 0; k <= n; ++k){
                int nonzero = i + j + k;
                if(nonzero == 0){
                    dp[i][j][k] = 0;
                    continue;
                }
                dp[i][j][k] += (double)n / nonzero;
                if(i - 1 >= 0) dp[i][j][k] += dp[i-1][j+1][k] * i / nonzero;
                if(j - 1 >= 0) dp[i][j][k] += dp[i][j-1][k+1] * j / nonzero;
                if(k - 1 >= 0) dp[i][j][k] += dp[i][j][k-1] * k / nonzero;
            }
        }
    }
    printf("%.15lf\n", dp[cnt[3]][cnt[2]][cnt[1]]);
}