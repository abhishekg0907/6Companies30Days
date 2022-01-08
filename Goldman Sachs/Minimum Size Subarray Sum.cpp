class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,len = 1e9+1,sum=nums[0];
    while(j<nums.size())
    {
    	if(sum>=target)
    	{
    		if(j-i+1<len)
    			len = j-i+1;
			sum-=nums[i];
			i++;
		}
	
		else if(++j<nums.size())
			sum+=nums[j];	
					
		else
			break;
		
		if(i>j)
		j=i;
	}
	if(len==1e9+1)
	return 0;
	else
	return len;
    }
};
