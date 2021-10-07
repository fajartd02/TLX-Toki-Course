#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10e6;
bool prime[MAX+1];
ll primeList[MAX+1];

void sieveOfEratothenes(){
    memset(prime, false, MAX);
    ll x = 0;
    for(ll i = 2; i <= MAX; i++) {
        if(prime[i] == false){
            primeList[x] = i;
            x += 1;
            ll j = i*i;
            while(j <= MAX) {
                prime[j] = true;
                j = j + i;
            }
        }
    }
}


int main(){
    ll T;
    cin >> T;
    sieveOfEratothenes();
    while(T--){
        ll n;
        cin >> n;
        cout << primeList[n-1]<<endl;
    }
    return 0;
}