#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct olim{
    char nama[100];
    ll s1;
    ll s2;
    ll s3;
};

int main() {
    ll T;
    cin >> T;
    while(T--){
        ll n,k;
        cin >> n >> k;
        struct olim arr[n];
        char nama[100];
        cin >> nama;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i].nama >> arr[i].s1 >> arr[i].s2 >> arr[i].s3;
        }
        struct olim temp;
        for(int i = 0 ; i < n-1; i++){
            for(int j = 0 ; j < n-1-i; j++){
                if(arr[j].s3 < arr[j+1].s3){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1]=temp;
                }else if(arr[j].s3 == arr[j+1].s3){
                    if(arr[j].s2 < arr[j+1].s2){
                        temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1]=temp;  
                    }else if(arr[j].s2 == arr[j+1].s2){
                        if(arr[j].s1 < arr[j+1].s1){
                            temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1]=temp;
                        }
                    }
                }
            }
        }   
        
        // Debug
        // for(int i = 0 ; i < n ;i++){
        //     printf("%s %d %d %d\n", arr[i].nama, arr[i].s1, arr[i].s2, arr[i].s3);
        // }

        int valid = 0;
        for(int i = 0 ; i <k; i++){
            if(strcmp(nama, arr[i].nama) == 0){
                printf("YA\n");
                valid = 1;
                break;
            }
        }

        if(valid == 0) {
            printf("TIDAK\n");
        }
    }

    return 0;
}