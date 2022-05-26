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
    //ceil(x / y) = (x + y - 1) / y
    //要素数nの順列野中に存在する最小値は、1であり。1回の操作で1以外の要素から１に変換することができる要素数はk-1個であることがわかる
    //すなわちceil(n-1/k-1)回操作を行う必要がある
    //よって以下のようなコードとなる
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    cout << ((n - 1) + (k - 1) - 1) / (k - 1) << endl;
    return 0;
}