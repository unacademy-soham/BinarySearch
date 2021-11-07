class Solution {
public:
    
    int F(int x, vector<int> &weights){
        int numDays = 1;
        int currentWeightTaken = 0;
        for(int i=0; i<weights.size(); i++){
            if((currentWeightTaken + weights[i]) <= x){
                currentWeightTaken += weights[i];
            } else{
                numDays ++;
                currentWeightTaken = weights[i];
            }
        }
        
        return numDays;
    }
    
    int P(int x, vector<int> &weights, int D){
        return F(x, weights) <= D;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = 0, hi = 0;
        for(int i=0; i<weights.size(); i++){
            lo = max(lo, weights[i]);
            hi += weights[i];
        }
        
        if(P(lo, weights, days)) hi = lo;
        
        while(lo<hi-1){
            int mid = (lo + hi)/2;
            if(P(mid, weights, days)) hi = mid;
            else lo = mid;
        }
        
        return hi;
    }
};