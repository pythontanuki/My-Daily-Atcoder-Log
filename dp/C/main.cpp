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

bool used[2010];

int main(void){
    FAST;
    int n;
    cin >> n;
    while(1){
        for(int i = 1; i <= 2 * n + 1; ++i){
            if(!used[i]){
                cout << i << endl;
                used[i] = true;
                break;
            }
        }
        int ans;
        cin >> ans;
        if(ans == 0) return 0;
        used[ans] = true;
    }
}