class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();
        string st1="",st2="";int mx=0;
        // while()i
        int l,r;
        for(int i=0;i<n;i++){
            l=r=i;
            while(l>=0 and r<n and s[l]==s[r]){
                    l--;r++;
             
            }
            int len = r-l-1;string z="";
            if(len > mx){
                for(int k=l+1 ; k<r;k++) z+=s[k];
                 st1=z;
                 mx=len;
            }
            
        }
        ////
        mx=0;
        for(int i=0 ;i<n;i++){
            l=i;r=i+1;
            while(l>=0 and r<n and s[l]==s[r]){
                l--;r++;
            }
            int len = r-l-1;
            if(len > mx){
               string z="";
                for(int m=l+1;m<r;m++) z+=s[m];
                st2=z;
                mx=len;
            }
        }
        string ans=st1.size()>st2.size()?st1:st2;
        return ans;
    }
};