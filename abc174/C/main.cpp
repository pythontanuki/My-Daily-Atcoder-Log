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
    int k;
    cin >> k;
    //kの倍数かどうかの判定は、modKで考える
    int x = 7 % k;
    set<int> st;
    int cnt = 1;
    while(st.count(x) == 0){
        if(x == 0){
            cout << cnt << endl;
            return 0; 
        }
        st.insert(x);
        x = (10 * x + 7) % k;
        cnt++;
    }
    cout << -1 << endl;
}