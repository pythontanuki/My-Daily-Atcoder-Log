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


void solve(long long N, std::vector<long long> L, std::vector<long long> R){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> L(N);
    std::vector<long long> R(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &L[i]);
        std::scanf("%lld", &R[i]);
    }
    solve(N, std::move(L), std::move(R));
    return 0;
}
