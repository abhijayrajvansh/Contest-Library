#include <bits/stdc++.h>
using namespace std;

int max_element_index(vector<int64_t> a){
    return int(max_element(a.begin(), a.end()) - a.begin());
}

int min_element_index(vector<int64_t> a){
    return int(min_element(a.begin(), a.end()) - a.begin());
}


int main (){
    vector<int64_t> a = {70, 1, 2, 69, 4, 5, 6, 7, 1, 6, 5, 4, 3, 3, 8};
    int maxdex = min_element_index(a);
    cout << a[maxdex];
    return 0;    
}
