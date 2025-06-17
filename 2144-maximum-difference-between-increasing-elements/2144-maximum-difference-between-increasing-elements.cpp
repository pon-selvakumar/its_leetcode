class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxx=-1;int pick =nums[0];
        for(int i=0;i<nums.size();i++){
            if(pick>nums[i]) pick=nums[i];
            else
            maxx=max(maxx,nums[i]-pick);
        }
          
        return maxx==0?-1:maxx;
        
        
        // return maxx;
    }
};