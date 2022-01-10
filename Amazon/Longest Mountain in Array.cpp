class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size()<3)
            return 0;
        int i=0,j,len=0,flagA=0,flagB=0;
        for(j=i+1;j<arr.size()&&i<arr.size()-2;j++)
        {
            if(arr[j]>arr[j-1])
            {
                flagA=1;
                if(flagB==1)
                {
                    i=j-1;
                    flagB=0;
                }
            }
            else if(arr[j]<arr[j-1]&&flagA==1)
            {
                flagB=1;
                if(len<j-i+1)
                    len = j-i+1;
            }
            else
            {
                i=j;
                flagA=0;
                flagB=0;
            }
            
        }
        return len;
    }
};
