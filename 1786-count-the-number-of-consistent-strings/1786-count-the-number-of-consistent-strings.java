class Solution {
    public int countConsistentStrings(String st, String[] str) 
    {
        
        List<Character> ch=new ArrayList<Character>();
        int flag=1;
        for(int i=0;i<st.length();i++) ch.add(st.charAt(i));
        int c=0;
        for(int j=0;j<str.length;j++)
        {
            for(int i=0;i<str[j].length();i++)
            {
                if(ch.contains(str[j].charAt(i)))
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag!=0) c++;
        }
        return c;
    }
}