#include <bits/stdc++.h>
using namespace std;

int checkPowerOfTwo(int n){
    int val = (n & (n - 1));
    return val;
}

int main (){
    int n;
    cin >> n;
    if(checkPowerOfTwo(n) == 0){
        cout << "YES" << '\n';
    }
    else{
        cout << "NHI BHAI" << '\n';
    }
}