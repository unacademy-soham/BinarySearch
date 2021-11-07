class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=1; i<numbers.size(); i++){
            int a_j = target - numbers[i];
            if(a_j > numbers[i]) continue; //a[j] > a[i]
            int lo = 0, hi = i-1;
            int j = -1;
            while(lo <= hi){
                int mid = (lo + hi) / 2;
                if(numbers[mid] == a_j){
                    j = mid;
                    break;
                } else if(numbers[mid] > a_j){
                    hi = mid - 1;
                } else{
                    lo = mid + 1;
                }
            }
            if(j != -1){
                return {j+1, i+1};
                
            }
            
        }
        return vector<int>();
    }
};