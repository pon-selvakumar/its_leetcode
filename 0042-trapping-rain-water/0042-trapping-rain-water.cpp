class Solution {
public:
    int trap(vector<int>& height) {
           int l=0,r=height.size()-1;
           int Rmax=0,Lmax=0;int tot=0;
           while(l<r){
                 if(height[l]<=height[r]){
                    if(height[l]>=Lmax){
                        Lmax=height[l];
                    }
                    else
                    {
                        tot+=Lmax-height[l];                
                    }
                    l++;
                 }
                 else if(height[l]>height[r]){
                    if(height[r]>=Rmax){
                        Rmax=height[r];
                    }
                    else
                    {
                        tot+=Rmax-height[r];
                    }
                    r--;
                 }

           }
           return tot;
    }
};