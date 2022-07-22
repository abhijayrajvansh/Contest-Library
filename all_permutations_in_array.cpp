/*    यो न हृष्यति न द्वेष्टि न शोचति न काङ्क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
``````````````````````````````````````````````````````````````````
 *    author:   abhijayrajvansh
 *    created:  22.07.2022 21:30:44
**/
#include <bits/stdc++.h>
using namespace std;

void permute(vector<int64_t> a, int l, int r, vector<vector<int64_t>> &ans) 
{ 
    if (l == r) {
        ans.push_back(a);
    }
    else
    { 
        for (int i = l; i <= r; i++) { 
            swap(a[l], a[i]); 
            permute(a, l+1, r, ans); 
            swap(a[l], a[i]); 
        } 
    } 
}


constexpr char nl = '\n';

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 3;
    vector<int64_t> a = {1, 2, 3};

    vector<vector<int64_t>> ans;
    permute(a, 0, n - 1, ans);

    return 0;    
}
