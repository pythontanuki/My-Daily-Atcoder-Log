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
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    bool fl = false;
    if(n % 2 == 0) fl = true;
    deque<ll> d;
    rep(i, n){
        if(i % 2 == 0) d.push_front(a[i]);
        else d.push_back(a[i]);
    }
    if(fl) reverse(d.begin(),d.end());
    rep(i, n-1) cout << d[i] << " ";
    cout << d[n-1];
    cout << endl;
    return 0;
}