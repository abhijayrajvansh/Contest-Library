#include <bits/stdc++.h>
using namespace std;


int main (){
    vector<int64_t> a = {1, 2, 3, 4, 5};
    vector<int64_t> b = {5, 4, 3, 2, 1};

    cout << is_sorted(a.begin(), a.end());
    cout << is_sorted(b.begin(), b.end(), greater<int>());
    
    return 0;    
}
