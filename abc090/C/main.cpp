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

int main(void){
    FAST;
    ll n,m;
    cin >> n >> m;
    ll total;
    ll minus;
    if(n == 1 && m == 1){
        cout << 1 << endl;
        return 0;
    }
    else if(n == 1 || m == 1){
        cout << n * m - 2 << endl;
        return 0;
    }
    minus = 2 * (n + m) - 4;
    total = n * m;
    cout << total - minus << endl;  
}