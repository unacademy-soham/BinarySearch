class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo = 0, hi = arr.size() - 1;
        while(lo < hi-1){
            int mid = (lo + hi) / 2;
            if(arr[mid] > arr[mid-1]){
                lo = mid;
            } else{
                hi = mid-1;
            }
        }
        if(arr[hi] > arr[lo]) return hi;
        return lo;
    }
};