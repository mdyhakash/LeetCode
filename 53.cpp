//53. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int cs=0, ms=INT_MIN;
        
        for(int val : nums){

            cs+=val;
            ms=max(cs,ms);
            if(cs<0){
                cs=0;
            }

        }
        return ms;
        
    }      
    
};