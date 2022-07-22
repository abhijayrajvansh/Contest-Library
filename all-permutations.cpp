/*    यो न हृष्यति न द्वेष्टि न शोचति न काङ्क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
``````````````````````````````````````````````````````````````````
 *    author:   abhijayrajvansh
 *    created:  22.07.2022 21:14:29
**/
#include <bits/stdc++.h>
using namespace std;

void permute(vector<int64_t> a, int l, int r) 
{ 
    if (l == r) {
        
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " " ;
        }
        cout << '\n';
    }
    else
    { 
        for (int i = l; i <= r; i++) 
        { 
  
            swap(a[l], a[i]); 
  
            permute(a, l+1, r); 
  
            swap(a[l], a[i]); 
        } 
    } 
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int64_t> a = {1, 1, 0, 1};
    permute(a, 0, a.size() - 1);
    return 0;    
}
