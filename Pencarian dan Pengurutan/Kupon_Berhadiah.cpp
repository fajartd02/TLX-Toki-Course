#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, ex;
    cin >> n >> ex;
    ll arr[n];
    ll min=2000001;
    ll idx=0;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    for(ll i = 0 ; i < n ; i++){
        ll temp = abs(arr[i]-ex);
        if(temp < min){
            idx = i;
            min = temp;
        }else if(temp==min){
            if(arr[i] < arr[idx]){
                idx = i;
            }
        }
    }

    cout << arr[idx] << endl;

    return 0;
}