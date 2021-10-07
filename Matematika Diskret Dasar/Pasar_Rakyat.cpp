#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll euclid(ll a, ll b){
    if(b==0)
        return a;
    else
        return euclid(b, a % b);
}


int main() {

    ll n;
    cin >> n;
    ll arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    ll lcm=(arr[0]*arr[1])/euclid(arr[0], arr[1]);
    ll gcd=0;

    for(int i = 1 ; i < n-1; i ++){
        gcd = euclid(lcm, arr[i+1]);
        lcm = (lcm*arr[i+1])/gcd;
    }
    cout << lcm << endl;


    return 0;
}