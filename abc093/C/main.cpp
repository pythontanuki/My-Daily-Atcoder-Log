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
    vector<int> x(3);
    rep(i,3){
        cin >> x[i];
    }
    sort(x.rbegin(),x.rend());
    int ans = 0;
    while(x[1] + 2 <= x[0]) x[1] += 2, ans++;
    while(x[2] + 2 <= x[0]) x[2] += 2, ans++;    

    sort(x.rbegin(),x.rend());

    int a = x[0];
    int b = x[1];
    int c = x[2];

    if(a % 2 == b % 2 && b % 2 == c % 2) ans += 0;
    else if(a % 2 == b % 2) ans += 2;
    else if(b % 2 == c % 2) ans++; 
    cout << ans << endl; 
}