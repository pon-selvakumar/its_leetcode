class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str = "";
        vector<int> maxx;
        int storeI = 0;
        for (int i = 0; i < s.size(); i++) {
            if (((int)str.find(s[i])) == -1) {
                if (str == "")
                    storeI = i;
                str += s[i];
            } else {
                str = "";
                i = storeI;
            }
            maxx.push_back(str.size());
        }
        int mx = INT_MIN;
        if (maxx.empty())
            return 0;
        for (int i : maxx)
            mx = max(mx, i);
        return mx;
    }
};