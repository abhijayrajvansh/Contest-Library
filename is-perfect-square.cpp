#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare (int n){
    int root = sqrt(n);
    if((root * root) == n){
        return true;
    }
    return false;
}

int main (){
    int n;
    cin >> n;
    int ans = isPerfectSquare(n);
    cout << ans << '\n';
    return 0;
}