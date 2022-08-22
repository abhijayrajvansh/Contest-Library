#include <bits/stdc++.h>
using namespace std;

int sumofdigits(int n){
    int sum = 0;
    while(n != 0){
        int ld = n % 10;
        sum += ld;
        n /= 10;
    }
    return sum;
}

int main (){
    cout << sumofdigits(12345) << '\n';
    return 0;    
}