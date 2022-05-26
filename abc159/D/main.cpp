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

ll n_C_2(ll x){
    return x * (x - 1) / 2;
}

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    int max_a = 0;
    rep(i,n){
        cin >> a[i];
        max_a = max(max_a,a[i]);
    }
    vector<int> cnt(max_a+1,0);
    rep(i,n) cnt[a[i]]++;
    ll total = 0;
    rep(i,max_a+1) total += n_C_2((ll)cnt[i]);
    ll s = total;
    rep(i,n){
        if(cnt[a[i]] != 0){
            total -= n_C_2((ll)cnt[a[i]]);
            cnt[a[i]]--;
            total += n_C_2((ll)cnt[a[i]]);
            cout << total << endl;
            cnt[a[i]]++;
            total = s;
        }
    }
}