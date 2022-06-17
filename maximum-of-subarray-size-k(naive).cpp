#include <bits/stdc++.h>
using namespace std;

// Naive Solution...

vector<int>  maximumOfSubArraySizeK(vector<int>& arr, int k){
    
    int n = arr.size();

    vector<int> ans;

    for(int i = 0; i < n - k + 1; i++){
        int Max = arr[i];
        for(int j = i; j < i + k; j++){
            Max = max(Max, arr[j]);
        }
        ans.push_back(Max);
    }
    return ans;

}

int main (){

    vector<int> arr = {10, 8, 5, 12, 15, 7, 6};
    /*-------------------------------------------------
    10 12 15 15 15
    --------------------------------------------------*/
    int k = 3;
    vector<int> ans = maximumOfSubArraySizeK(arr, k);

    for(auto& i : ans){
        cout << i << " " ;
    }
    
    return 0;
}