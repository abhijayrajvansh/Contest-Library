#include <bits/stdc++.h>
using namespace std;

vector<int> int_to_vector(int n){
    vector<int> ans;
    
    while(n != 0){
        int ld = n % 10;
        ans.push_back(ld);
        n /= 10;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main (){
    int n = 12345;
    vector<int> final_vec = int_to_vector(n);

    for(auto &a: final_vec){
        cout << a << " ";
    }
}