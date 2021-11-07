#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    k-=1;
    int ans_right = 0;
    int ht = 0;
    for(int i=k+1; i<n; i++){
        if(arr[i] > ht){
            ans_right ++;
            ht = arr[i];
        }
    }

    int ans_left = 0;
    ht = 0;
    for(int i=k; i>=0; i--){
        if(arr[i] > ht){
            ans_left ++;
            ht = arr[i];
        }
    }

    cout<<ans_right + ans_left;

    return 0;
}
