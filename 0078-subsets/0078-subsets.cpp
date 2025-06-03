class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> res;
            int N = nums.size();
            int Nsub=(1<<N);
            for(int i=0 ; i<Nsub ;i++){
                    vector<int> X;
                for(int j=0 ; j<N ;j++){
                    if( i & (1<<j)){
                        X.push_back(nums[j]);
                    }
                }
                res.push_back(X);
            }
            return res;
        }

    };