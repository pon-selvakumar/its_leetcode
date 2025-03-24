class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size()/3;vector<int> vec;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            // if()
            mp[nums[i]]++;
            if(mp[nums[i]]>n) {vec.push_back(nums[i]);mp[nums[i]]=INT_MIN;}
        }
        return vec;
    }
};