#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string nama1;
    string nama2;
    cin>>nama1>>nama2;

    int valid = 0;
    int len = nama1.length();
    for(int i=0; i<len; i++){
        string temp = nama1;
        temp.erase(i, 1);
        if(temp == nama2){
            valid=1; break;
        }
    }

    if(valid==1){
        cout << "Tentu saja bisa!\n";
    }else{
        cout << "Wah, tidak bisa :(\n";
    }
    return 0;
}