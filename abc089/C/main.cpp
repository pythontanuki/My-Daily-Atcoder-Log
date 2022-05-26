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
    map<char, ll>mp;
    rep(i,n){
        string s;
        cin >> s;
        if(s[0] == 'M' || s[0] == 'A' || s[0] == 'R' || s[0] == 'C' || s[0] == 'H') mp[s[0]]++;
    }
    ll ans = 0;
    ll mar = mp['M'] * mp['A'] * mp['R'];
    ll mac = mp['M'] * mp['A'] * mp['C'];
    ll mah = mp['M'] * mp['A'] * mp['H'];
    ll mrc = mp['M'] * mp['R'] * mp['C'];
    ll mrh = mp['M'] * mp['R'] * mp['H'];
    ll mch = mp['M'] * mp['C'] * mp['H'];
    ll arc = mp['A'] * mp['R'] * mp['C'];
    ll arh = mp['A'] * mp['R'] * mp['H'];
    ll ach = mp['A'] * mp['C'] * mp['H'];
    ll rch = mp['R'] * mp['C'] * mp['H'];
    ans += (mar + mac + mah + mrc + mrh + mch + arc + arh + ach + rch);
    cout << ans << endl;
}