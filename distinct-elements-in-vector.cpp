#include <bits/stdc++.h>
using namespace std;

bool isDistinctVector(vector<int> &arr){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                return false;
            }
        }
    }
    return true;
}

int main (){
    vector<int> a = {1, 2, 3, 4, 5, 6, 6};
    cout << isDistinctVector(a);
    return 0;    
}
