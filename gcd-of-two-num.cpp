/*    यो न हृष्यति न द्वेष्टि न शोचति न काङ्क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
``````````````````````````````````````````````````````````````````
 *    author:   abhijayrajvansh (https://codeforces.com/profile/abhijayrajvansh)
 *    created:  24.06.2022 22:05:38
**/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) {
        return a;
    }

    return gcd(b, a % b);

}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a = 12, b = 24;
    cout << gcd(a, b);
    return 0;    
}
