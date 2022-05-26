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
    int c = (n - 2) / 2;
    vector<ll> x(n);
    vector<ll> y(n);
    
    rep(i,n){
        cin >> x[i];
        y[i] = x[i];
    }
    sort(y.begin(),y.end());

    int l = (n - 1) / 2;
    int r = n / 2;
    int now2 = y[l] + y[r];//今の中央値の２倍
    int update = 0;
    rep(i,n){
        if(x[i] * 2 > now2) update = y[l];
        else if(x[i] * 2 < now2) update = y[r];
        else update = now2 / 2;
        cout << update << endl;  
    }
}