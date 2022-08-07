#include <bits/stdc++.h>
using namespace std;

int numberOfPeakElements(vector<int64_t> a){
    int n = a.size();
    int count = 1;
    bool status = true;
    bool new_status;

    for (int i = 2; i < n; i++) {
        int prev_element = a[i - 1];
        int curr_element = a[i];

        if(prev_element < curr_element){
            new_status = true;
        }
        else{
            new_status = false;
        }

        if(new_status != status){
            status = new_status;
            count += (new_status == true);
        }    
    }

    return count;
    
}

int main (){
    vector<int64_t> a = {1, 2, 3, 4, 5, 4, 3, 2, 2, 2, 3};
    cout << numberOfPeakElements(a) << '\n';
    return 0;    
}
