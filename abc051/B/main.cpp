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
    int k, s;
    cin >> k >> s;
    int ans = 0;
    for(int x = 0; x <= k; ++x){
        for(int y = 0; y <= k; ++y){
            int z = s - x - y;
            if(z <= k && z >= 0) ans++;
        }
    }
    cout << ans << endl;   
}