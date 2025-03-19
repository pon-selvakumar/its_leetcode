class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;vector<vector<string>> grp;
        for(int i=0;i<strs.size();i++)
        {
            string x=strs[i];
            sort(x.begin(),x.end());
            mp[x].push_back(strs[i]);
        }
        for(auto val : mp){
            grp.push_back(val.second);
        }
        return grp;
    }
};