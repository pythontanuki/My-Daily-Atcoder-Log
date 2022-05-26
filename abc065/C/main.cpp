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
#define mod 1000000007

int main(void){
    FAST;
    int n,m;
    cin >> n >> m;
    ll ans = 1;
    if(n == m){
        while(n > 0){
            ans *= n;
            ans %= mod;
            n--;
        }
        while(m > 0){
            ans *= m;
            ans %= mod;
            m--;
        }
        cout << ans * 2 % mod << endl;
        return 0;
    }
    
    else if(n - 1 == m || m - 1 == n){
        while(n > 0){
            ans *= n;
            ans %= mod;
            n--;
        }
        while(m > 0){
            ans *= m;
            ans %= mod;
            m--;
        }
        cout << ans % mod << endl;
        return 0;
    }
    else cout << 0 << endl;
}