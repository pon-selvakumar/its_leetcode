class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        if(colors.size()<2) return 0;int c=0;
        if(colors.size()>=3) {colors.push_back(colors[0]);colors.push_back(colors[1]);}
        for(int i=0;i<colors.size()-2;i++)
        {
            if(colors[i]!=colors[i+1] and colors[i+1]!=colors[i+2]){
                c++;
            }
        }
        return c;
    }
};