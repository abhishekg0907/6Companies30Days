class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        map<int,int> mp;
        map<int,int> :: iterator it;
        int i;
        vector<int> ans;
        for(i=0;i<k-1;i++)
            mp[arr[i]]++;
        
        for(i=k-1;i<n;i++)
        {
            mp[arr[i]]++;
            
            for(it=--mp.end();it->second==0;--it);
            
            ans.push_back(it->first);
            mp[arr[i-k+1]]--;
        }
        return ans;
    }
};
