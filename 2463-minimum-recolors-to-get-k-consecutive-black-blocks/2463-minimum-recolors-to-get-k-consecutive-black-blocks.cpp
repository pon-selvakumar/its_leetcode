class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int MIN=INT_MAX;int m=0,c=0;
        for(int i=0;i<k;i++)
        {
           if(blocks[i]=='W'){
               c++;
           }
        }
        MIN=c;
        for(int i=k;i<blocks.size();i++)
        {
            if(blocks[i-k]=='W') c--;
            if(blocks[i]=='W') c++;
            MIN = min(MIN,c);
        }
        return MIN;
    }
};