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
    ll n;
    ll total = 0;
    cin >> n;
    vector<Pll> factor;
    for(ll i = 2; i * i <= n; ++i){
        ll cnt = 0;
        while(n % i == 0){
            n /= i;
            cnt++;
        }
        if(cnt > 0) factor.emplace_back(make_pair(i,cnt));
    }
    if(n != 1) factor.emplace_back(make_pair(n,1));
    for(auto p : factor){
        ll v = p.second;
        ll c = 1;
        while(c <= v){
            v -= c;
            c++;
            total++;
        }
    }
    cout << total << endl;
}