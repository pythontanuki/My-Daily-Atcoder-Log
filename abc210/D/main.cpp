#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;


void solve(long long H, long long W, long long C, std::vector<std::vector<long long>> A){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    long long C;
    std::scanf("%lld", &C);
    std::vector<std::vector<long long>> A(H, std::vector<long long>(W));
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            std::scanf("%lld", &A[i][j]);
        }
    }
    solve(H, W, C, std::move(A));
    return 0;
}
