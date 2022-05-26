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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    bool ans = true;
    if(a == b == c == d) ans = false;
    else{
        if(b = a + 1 || (a == 9 && b == 0)) ans = false;
        if(c = b + 1 || (b == 9 && c == 0)) ans = false;
        if(b = a + 1 || (c == 9 && d == 0)) ans = false;
    }
    if(ans) cout << "Strong" << endl;
    else cout << "Weak" << endl;
}