#include <bits/stdc++.h>
using namespace std;

int count_digits_in_int(int n){
    int ans = 0;

    while(n != 0){
        int ld = n % 10;
        ans++;
        n /= 10;
    }
    return ans;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 34567243;
    cout << count_digits_in_int(n);
    return 0;    
}

