/**
 *    author:   abhijayrajvansh
 *    created:  22.02.2022 06:23:27
**/
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    double v1 = (double) p1.first / p1.second;
    double v2 = (double) p2.first / p2.second;

    return v1 > v2;
}

double fractional_knapsack (vector<pair<int, int>> & arr, int w) {
    int n = arr.size();

    sort(arr.begin(), arr.end(), compare);
    double profit = 0;

    for(int i = 0; i < n; i++){ // better to use for loop with a limit as n because knapsack can occupy all the elements
        if(arr[i].second <= w){

            w -= arr[i].second;
            profit += arr[i].first;

        }else{

            profit += arr[i].first * (double)w / arr[i].second;
            break;
        }
    }
    return profit;
}

int main (){
    
    /*-------------------------------------------------
    input:
    total items n = 3
    knapsack capacity : 70
    val : 600 500 400
    wt  : 50  20  30
    
    output: 1140
    --------------------------------------------------*/

    int n; cin >> n;
    int total_wt;
    cin >> total_wt;

    vector<pair<int, int>> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }

    cout << fractional_knapsack(v, total_wt) << '\n';

        
    return 0;
}