#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int tryAndCheck(char arr[][1001], int r, int c) {
int lastPos = 0;
int check = 0;
// Ngecek runtuh / ngga
    for(int i = 0; i < r ; i++){
        int count = 0;
        for(int j = 0 ; j < c ; j++){
            if(arr[i][j] == '1'){
                count ++;
            }
        }
        if(count == c){
            for(int k = 0 ; k < c; k++){
                arr[i][k] = '0';
            }
            lastPos = i;
            check = 1;
        }
    }

    if(check == 0){
        return 0;
    }

    for(int i = lastPos ; i >= 0  ;i--){
        for(int j = 0 ; j < c ;j++){
            int x = i;
            if(arr[i][j] == '1'){
                while(1){
                    if(arr[x+1][j] == '0'){
                        arr[x+1][j] = '1';
                        arr[x][j] = '0';
                    }else{
                        break;
                    }
                    x++;
                }
            }
        }
    }
    if(check == 0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int r,c;
    cin >> r >> c; //11 6
    char arr[1001][1001]; // arr[11][6]
    for(int i = 0; i < r; i++){ // i < 11
        for(int j = 0; j < c; j++){ // j < 6
            cin >> arr[i][j];
        }
    }

    //  for(int i = 0 ; i < r ;i++){
    //     for(int j = 0 ; j < c ; j++){
    //         cout << arr[i][j];
    //     }
    //     cout << "\n";
    // }

    // Cek 1 Full atau engga
    int lol = tryAndCheck(arr, r, c);
    while(lol != 0){
        lol = tryAndCheck(arr, r, c);
    }
    
    // cout << "--------------------------\n";

    for(int i = 0 ; i < r ;i++){
        for(int j = 0 ; j < c ; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    
}