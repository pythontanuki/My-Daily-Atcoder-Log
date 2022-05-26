#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define pb push_back
# define sz(x) (int)(x).size();
# define rep(i, a, b) for(int i = a; i < b; i++)
# define lrep(i, a, b) for(ll i = a; i < b; i++)
# define srep(i, a, b) for(int i = a; i <= b; ++i)
# define slrep(i, a, b) for(ll i = a; i <= b; ++i)
# define drep(i, a, b) for(int i = a; i >= b; --i)
# define dlrep(i, a, b) for(ll i = a; i >= b; --i)
# define snuke ios::sync_with_stdio(false); cin.tie(nullptr);
# define _GLIBCXX_DEBUG


struct Solver {
  void Solve() {
    string s = "MSKIFDFVKPGVITGDDVQKVFQVAKENNFALPAVNCVGTDSINAVLETAAKVKAPVIVQFSNGGASFIAGKGVKSDVPQGAAILGAISGAHHVHQMAEHYGVPVILHTDHCAKKLLPWIDGLLDAGEKHFAATGKPLFSSHMIDLSEESLQENIEICSKYLERMSKIGMTLEIELGCTGGEEDGVDNSHMDASALYTQPEDVDYAYTELSKISPRFTIAASFGNVHGVYKPGNVVLTPTILRDSQEYVSKKHNLPHNSLNFVFHGGSGSTAQEIKDSVSYGVVKMNIDTDTQWATWEGVLNYYKANEAYLQGQLGNPKGEDQPNKKYYDPRVWLRAGQTSMIARLEKAFQELNAIDVL";
    int total = sz(s);

    vector<char> hydrophobicity_amino_acid_list {'A','V','G','I','L','F','P','W','Y'};//疎水性 
    
    int hydrophobicity_amino_acid_length = sz(hydrophobicity_amino_acid_list);

    //ある区間を与えたときに、その区間内における疎水性の割合を算出するfunctionを作成する。

    //make the function
    auto function_total_hydrophobicity_amino_acid_rates = [&](int start, int last) { //[start, last] 0_indexed
        //累積和の形で各々の性質のアミノ酸の個数を持っておく
        map<char, int> total_amino_acid_mapping;
        rep(i,0,total) total_amino_acid_mapping[s[i]]++;
        
        vector<int> total_hydrophobicity_amino_acid;

        rep(i,0,total) rep(j,0,hydrophobicity_amino_acid_length) if(s[i] == hydrophobicity_amino_acid_list[j]) total_hydrophobicity_amino_acid.pb(i);

        vector<int> sum_hydrophobicity_amino_acid(total);
        for(auto idx : total_hydrophobicity_amino_acid) sum_hydrophobicity_amino_acid[idx]++;
        rep(i,0,total-1) sum_hydrophobicity_amino_acid[i+1] += sum_hydrophobicity_amino_acid[i];
        int res = 0;
        if(start-1 >= 0)res = sum_hydrophobicity_amino_acid[last]-sum_hydrophobicity_amino_acid[start-1];
        int partial_length = last-start+1;
        double ans = (double) res / (double)partial_length * (double)100;
        return ans;
    };
    
    double ans = function_total_hydrophobicity_amino_acid_rates(1,total-1);
    printf("%.15lf\n", ans);
  }
};

signed main(void) {
    snuke;
    Solver solver;
    solver.Solve();
    return 0;
}