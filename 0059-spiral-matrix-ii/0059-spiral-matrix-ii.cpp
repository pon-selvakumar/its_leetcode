class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> x;vector<int> N;
        int b=n;
        int arr[b][b];int k=1;
        int top=0,left=0,right=n-1,bottom=n-1;
        while(top<=bottom and left<=right)
        {
            for(int i=left ; i<=right;i++)
            {
                arr[top][i]=k++;
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                arr[i][right]=k++;
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    arr[bottom][i]=k++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--)
                {
                    arr[i][left]=k++;
                }
                left++;
            }
        }
        for(int i=0;i<n;i++)
        {
            vector<int> N;
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
                N.push_back(arr[i][j]);
            }
            x.push_back(N);
            cout<<"\n";
        }
        return x;
    }
};