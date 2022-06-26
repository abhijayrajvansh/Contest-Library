
// General Maximum subarray sum problem in O(n) time: -
// Idea: - we pre compute the maximum subarray sum of Aith element in another array: -

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &a){
    int n = a.size(), res = a[0], maxEnd = a[0];

    for(int i = 1; i < n; i++){
        maxEnd = max(maxEnd + a[i], a[i]);
        res = max(res, maxEnd);
    }

    return res;
}

int main (){
    vector<int> a = {-5, 1, -2, 3, -1, 2, -2}; int n = 7;
    cout << maxSubarraySum(a);
    return 0;    
}
/*
bruteforce-

int res = a[0];
    for(int i = 3; i < n; i++){
        int curr = 0;
        
        for(int j = i; j < n; j++){
            curr += a[j];
            res = max(res, curr);
        }
    } 
*/