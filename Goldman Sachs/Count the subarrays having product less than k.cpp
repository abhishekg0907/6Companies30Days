class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long i=0,j=0;
        long long pro=a[0],count=0;
        while(j<n)
        {
            
            if(pro<k)
            {
                j++;
                pro*=a[j];
                count+=j-i;
            }
            else{
                pro/=a[i];
                i++;
            }
            
            if(i>j)
            {
                j=i;
                pro*=a[j];
            }
        }
        return count;
    }
};
