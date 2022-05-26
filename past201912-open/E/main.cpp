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

int main(){
    int n,q;
    cin >> n >> q;
    vector<vector<bool>> follow(n,vector<bool>(n,false));
    vector<vector<bool>> refollow(n,vector<bool>(n,false));

    rep(i,q){
        int type;
        cin >> type;
        if(type == 1){
            int a,b;
            cin >> a >> b;
            --a;
            --b;
            follow[a][b] = true;
            refollow[b][a] = true;
        }
        if(type == 2){
            int a;
            cin >> a;
            --a;
            rep(j,n){
                if(refollow[a][j]){
                    follow[a][j] = true, refollow[j][a] = true;
                }
            }
        }
        if(type == 3){
            int a;
            cin >> a;
            --a;
            vector<int> com;
            rep(i,n) if(follow[a][i]) com.push_back(i);
            for(int x : com){
                for(int y = 0; y < n; ++y){
                    if(a == y || !follow[x][y]) continue;
                    follow[a][y] = true;
                    refollow[y][a] = true;
                }
            }
        }
        // cout << "FOLLW" <<" " << i << " " << endl;
        // rep(i,n){
        //     rep(j,n){
        //         cout << follow[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        // cout << endl;
        // cout << endl;
        // cout << endl;

        // cout << "REFOLLW" <<" " << i << " " << endl;
        // rep(i,n){
        //     rep(j,n){
        //         cout << refollow[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        // cout << endl;
        // cout << endl;
        // cout << endl;
    }
    rep(i,n){
        rep(j,n){
            if(follow[i][j]) printf("Y");
            else printf("N");
        }
        cout << endl;
    }
}