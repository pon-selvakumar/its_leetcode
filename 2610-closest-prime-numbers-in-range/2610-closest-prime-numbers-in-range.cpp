class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> prim(right+1,1);vector<int> arr;prim[1]=0;prim[0]=0;
        for(int i=2;i*i<=right;i++)
        {
            if(prim[i]==1){
                for(int j=i+i;j<=right;j+=i)
                {
                    prim[j]=0;
                }
            }
        }
        for(int i=left;i<=right;i++)
        {
            if(prim[i]==1) arr.push_back(i);
        }
        int min=INT_MAX,a,b;
        if(arr.size()<2) return {-1,-1};
        for(int i=1;i<arr.size();i++)
        {
            int x=arr[i]-arr[i-1];
            if(x<min) {
                a=arr[i-1];
                b=arr[i];
                min=x;
            }
        }
        return {a,b};

    }
};