// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        unordered_map<string,vector<string> > mp;
    	unordered_map<string,vector<string> > :: iterator j;
	
	vector<vector<string> > out;
	for(int i=0;i<string_list.size();i++)
	{
		string word = string_list[i];
		sort(word.begin(),word.end());
		mp[word].push_back(string_list[i]);
	}
	
	for(j=mp.begin();j!=mp.end();j++)
		out.push_back(j->second);
	
	return out;
    }
};
