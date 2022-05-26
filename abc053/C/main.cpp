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
    ll x;
    cin >> x;
    ll cnt = 0;
    ll y = x / 11;
    if(y == 0){
        while(x > 0){
            if(cnt % 2 == 0) x -= 6;
            else x -= 5;
            cnt++;
        }
        cout << cnt << endl;
        return 0;
    }
    else{
        cnt += (y * 2);
        ll j = x % 11;
        if(j == 0) cnt += 0;
        else if(1 <= j && j <= 6) cnt+= 1;
        else cnt += 2;
        cout << cnt << endl;
        return 0;
    }
}