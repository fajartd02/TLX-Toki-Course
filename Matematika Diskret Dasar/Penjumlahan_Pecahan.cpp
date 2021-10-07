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
    ll A=0,B=0,C=0,D=0;
    cin >> A >> B >> C >> D;
    ll up = (A*D)+(C*B);
    ll down = B*D;
    while(euclid(up,down)!=1){
       ll temp = euclid(up,down);
       up /= temp;
       down /= temp;
    }
    printf("%lld %lld\n", up, down);
    return 0;
}