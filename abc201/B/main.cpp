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


void solve(long long N, std::vector<std::string> S, std::vector<long long> T){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::string> S(N);
    std::vector<long long> T(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
        std::scanf("%lld", &T[i]);
    }
    solve(N, std::move(S), std::move(T));
    return 0;
}
