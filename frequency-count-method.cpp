#include <bits/stdc++.h>
using namespace std;

// counting frequency of elements in a vector

map<int, int> countFrequency(vector<int>& arr){
    int n = arr.size();

    map<int, int> freq;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    return freq;
}

int main (){
    
    vector<int> arr = {1, 2, 3, 3, 5, 4, 3, 2, 1, 1, 1, 4, 5, 6, 7, 7, 7, 6, 5, 0};
    
    map<int, int> ans = countFrequency(arr);

    for(auto& i : ans){
        cout << i.first << " appeared " << i.second << " time(s)" << '\n';
    }

    return 0;
}