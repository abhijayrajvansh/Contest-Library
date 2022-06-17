/**
 *    author:   abhijayrajvansh
 *    created:  22.02.2022 15:38:17
**/
#include <bits/stdc++.h>
using namespace std;

int string_to_int(string s){
    
    stringstream str(s);
    int int_value = 0;
    str >> int_value;

    return int_value;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s{"123456"};
    int value = string_to_int(s);
    value++;
    cout << value << '\n';

    return 0;
}