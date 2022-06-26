#include <bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int> &a){
    int n = a.size();
    vector<int> prefix(n);

    prefix[0] = a[0];
    
    for(int i = 1; i < n; i++){
        prefix[i] += prefix[i - 1] + a[i];
    }

    return prefix;
}

vector<int> suffixSum(vector<int> &a){
    int n = a.size();
    vector<int> suffix(n);

    suffix[n - 1] = a[n - 1];

    for(int i = n - 2; i >= 0; i--){
        suffix[i] += suffix[i + 1] + a[i];
    }
    return suffix;
}


int main (){
    vector<int> a = {2, 8, 3, 9, 6, 5, 4};

    vector<int> pre = prefixSum(a);
    vector<int> suf = suffixSum(a);

    cout << "PrefixSum: ";
    for(int i = 0; i < (int)pre.size(); i++){
        cout << pre[i] << " ";
    }
    cout << '\n';
    
    cout << "SuffixSum: ";
    for(int i = 0; i < (int)pre.size(); i++){
        cout << suf[i] << " ";
    }
    cout << '\n';
    return 0;    
}
