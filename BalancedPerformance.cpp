#include<bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    map<int, int> freq;
    int prefix_sum[n];

    prefix_sum[0] = arr[0] == 1 ? 1 : -1;
    for(int i=1; i<n; i++){
        int val = arr[i] == 1 ? 1 : -1;
        prefix_sum[i] = prefix_sum[i-1] + val; 
    }
    
    int ans = 0;
    for(int i=0; i<n; i++){
        if(prefix_sum[i] == 0) ans++;
        ans += freq[prefix_sum[i]];
        freq[prefix_sum[i]] ++;
    }

    cout<<ans;

    return 0;
}
