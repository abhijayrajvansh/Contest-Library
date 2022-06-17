/**
 *    author:   abhijayrajvansh
 *    created:  22.02.2022 15:43:39
**/
#include <bits/stdc++.h>
using namespace std;

string int_to_string(int num){
    string str = to_string(num);
    return str;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x = 12345;
    string s = int_to_string(x);
    s = "string" + s + "string";
    cout << s << '\n';

    return 0;
}