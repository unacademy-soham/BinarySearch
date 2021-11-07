#include<bits/stdc++.h>
#define int long long
using namespace std;

bool P(int i, int target, int *arr){
    return arr[i] >= target;
}

signed main(){
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int target;
    cin>>target;

   // Find lower bound of target
   int lo = 0, hi = n-1;
   if(P(0, target, arr)) hi = 0;
   else if(!P(n-1, target, arr)) lo = n-1;

    while(lo < hi - 1){
        int mid = (lo + hi) / 2;
        if(P(mid, target, arr)) hi = mid;
        else lo = mid;
    }

    if(lo == n-1){
        cout<<-1;
    } else{
        cout<<hi;
    }
    
    return 0;
}
