#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;
const long long LINF = 1001002003004005006;
const int INF = 1001001001;
const int MX = 200005;
# define sz(x) (int)(x).size()
# define yes {puts("Yes"); return;}
# define no {puts("No"); return;}
# define dame {puts("-1"); return;}
# define yn {puts('Yes');} else{puts('No');}
# define ret(x) {cout << (x) << endl; return;}
# define ll long long
# define fi first
# define se second
# define be begin
# define en end
# define vi vector<int>
# define vl vector<long long>
# define vs vector<string>
# define vb vector<bool>
# define vc vector<char>
# define vvi vector<vector<int>>
# define vvl vector<vector<long long>>
# define vvb vector<vector<bool>>
# define vpi vector<pair<int, int>>
# define vpl vector<pair<ll, ll>>
# define vps vector<pair<string, string>>
# define pb push_back
# define ps push
# define eb emplace_back
# define em emplace
# define pob pop_back
# define S sort
# define N next_permutation
# define rep(i, a, b) for(int i = a; i < b; i++)
# define lrep(i, a, b) for(ll i = a; i < b; i++)
# define srep(i, a, b) for(int i = a; i <= b; ++i)
# define slrep(i, a, b) for(ll i = a; i <= b; ++i)
# define drep(i, a, b) for(int i = a; i >== b; --i)
# define dlrep(i, a, b) for(ll i = a; i >== b; --i)
# define ALL(obj) (obj).begin(), (obj).end()
# define rALL(obj) (obj).rbegin(), (obj).rend()
# define taichi ios::sync_with_stdio(false); cin.tie(nullptr);
# define _GLIBCXX_DEBUG
# define Pll pair<ll, ll>
#define P pair<int,int>
template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }
# define MAX_SEQ 1024
# define M 1 //o o o
# define IX 2 // o o x
# define IY 3 //o x o
# define IZ 4 // x o o
# define DX 5 //o x x
# define DY 6 //x o x
# define DZ 7 //x x o
# define F 8 // x x x 0

string x,y,z;

 double match = 2;
 double mis_match = -INF;
 double d = -1;

double dp[400][400][400];
int trace_table[400][400][400];

double func(char c, char x) {
    if(c == x) return match;
    else  return mis_match;
}

void align(int len_x,int len_y, int len_z) {
    dp[0][0][0] = 0;
    srep(j,0,len_y)srep(k,0,len_z) {
        dp[0][j][k] = 0;
        trace_table[0][j][k] = IX;
    }
    srep(i,0,len_x)srep(k,0,len_z) {
        dp[i][0][k] = 0;
        trace_table[i][0][k] = IY;
    }
    srep(i,0,len_x)srep(j,0,len_y) {
        dp[i][j][0] = 0;
        trace_table[i][j][0] = IZ;
    }
    srep(i,1,len_x) {
        srep(j,1,len_y) {
            srep(k,1,len_z) {
                dp[i][j][k] = -INF;
                if(dp[i][j][k] <= dp[i-1][j-1][k-1]+func(x[i-1],y[j-1])+func(y[j-1],z[k-1])+func(x[i-1],z[k-1])) {
                    chmax(dp[i][j][k], dp[i-1][j-1][k-1]+func(x[i-1],y[j-1])+func(y[j-1],z[k-1])+func(x[i-1],z[k-1]));
                    trace_table[i][j][k] = M;
                }
                if(dp[i][j][k] <= dp[i-1][j-1][k]+func(x[i-1],y[j-1])+d+d) {
                    chmax(dp[i][j][k],dp[i-1][j-1][k]+func(x[i-1],y[j-1])+d+d);
                    trace_table[i][j][k] = IZ;
                }
                if(dp[i][j][k] <= dp[i-1][j][k-1]+d+func(x[i-1],z[k-1])+d) {
                    chmax(dp[i][j][k],dp[i-1][j][k-1]+d+func(x[i-1],z[k-1])+d);
                    trace_table[i][j][k] = IY;
                }
                if(dp[i][j][k] <= dp[i][j-1][k-1]+d+d+func(y[j-1],z[k-1])) {
                    chmax(dp[i][j][k],dp[i][j-1][k-1]+d+d+func(y[j-1],z[k-1]));
                    trace_table[i][j][k] = IX;
                }
                if(dp[i][j][k] <= dp[i-1][j][k]+d+d) {
                    chmax(dp[i][j][k],dp[i-1][j][k]+d+d);
                    trace_table[i][j][k] = DX;
                }
                if(dp[i][j][k] <= dp[i][j-1][k]+d+d) {
                    chmax(dp[i][j][k],dp[i][j-1][k]+d+d);
                    trace_table[i][j][k] = DY;
                }
                if(dp[i][j][k] <= dp[i][j][k-1]+d+d) {
                    chmax(dp[i][j][k],dp[i][j][k-1]+d+d);
                    trace_table[i][j][k] = DZ;
                }
            }
        }
    }
}


vs trace_back(int len_x, int len_y, int len_z) {
    int x_cur = len_x;
    int y_cur = len_y;
    int z_cur = len_z;
    int pointer = 0;
    string rev_x = "";
    string rev_y = "";
    string rev_z = "";
    while(x_cur > 0 || y_cur > 0 || z_cur > 0) {
        if(trace_table[x_cur][y_cur][z_cur] == M) {
            rev_x += x[x_cur-1];
            rev_y += y[y_cur-1];
            rev_z += z[z_cur-1];
            --x_cur;
            --y_cur;
            --z_cur;
            ++pointer;
        }
        else if(trace_table[x_cur][y_cur][z_cur] == IX) {
            rev_x += '-';
            rev_y += y[y_cur-1];
            rev_z += z[z_cur-1];
            --y_cur;
            --z_cur;
            ++pointer;
        }
        else if(trace_table[x_cur][y_cur][z_cur] == IY) {
            rev_x += x[x_cur-1];
            rev_y += '-';
            rev_z += z[z_cur-1];
            --x_cur;
            --z_cur;
            ++pointer;
        }
        else if(trace_table[x_cur][y_cur][z_cur] == IZ) {
            rev_x += x[x_cur-1];
            rev_y += y[y_cur-1];
            rev_z += '-';
            --x_cur;
            --y_cur;
            ++pointer;
        }
        else if(trace_table[x_cur][y_cur][z_cur] == DX) {
            rev_x += x[x_cur-1];
            rev_y += '-';
            rev_z += '-';
            --x_cur;
            ++pointer;
        }
        else if(trace_table[x_cur][y_cur][z_cur] == DY) {
            rev_x += '-';
            rev_y += y[y_cur-1];
            rev_z += '-';
            --y_cur;
            ++pointer;
        }
        else if(trace_table[x_cur][y_cur][z_cur] == DZ) {
            rev_x += '-';
            rev_y += '-';
            rev_z += z[z_cur-1];
            --z_cur;
            ++pointer;
        }
    }
    vs res;
    reverse(ALL(rev_x));
    reverse(ALL(rev_y));
    reverse(ALL(rev_z));
    res.eb(rev_x);
    res.eb(rev_y);
    res.eb(rev_z);
    return res;
}


struct Solver {
  void Solve() {
    // cout << setprecision(15) << endl;
    cin >> x >> y >> z;
    int len_x = sz(x);
    int len_y = sz(y);
    int len_z = sz(z);
    align(len_x,len_y,len_z);
    auto f = trace_back(len_x,len_y,len_z);
    rep(i,0,3) cout << f[i] << '\n';
  } 
};

signed main(void) {
    /* This Program's Author is taichi araki */
    taichi;
    Solver solver;
    solver.Solve();
    return 0;
}