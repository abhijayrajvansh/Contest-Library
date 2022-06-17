/**
 *    author:   abhijayrajvansh
 *    created:  18.02.2022 20:00:18
**/
#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*-------------------------------------------------
    STL find in a vector
    --------------------------------------------------*/
    vector<int> arr{5, 4, 7, 8, 92, 3, 4, 5, 1, 0, 69};
    vector<int>:: iterator it;
    it = find(arr.begin(), arr.end(), 69);
    if(it != arr.end()){
        cout << "found";
    }
    else{
        cout << "not found";
    }
    return 0;
}
