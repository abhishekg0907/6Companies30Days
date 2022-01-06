class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int,int> mp;
        int i;
        for(i=0;i<nums.size();i++){
            mp[nums[i]%k]++;
        }
        if(mp[0]%2)
            return false;
        if(k%2==0&&mp[k/2]%2)
            return false;

        for(i=1;i<=(k-1)/2;i++){
            if(mp[i]!=mp[k-i])
            return false;
        }
        return true;
    }
};
