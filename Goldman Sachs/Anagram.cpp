class Anagram{
	public:
	vector<vector<string> > anagram(vector<string> in){
			
	unordered_map<string,vector<string> > mp;
	
	unordered_map<string,vector<string> > :: iterator j;
	
	vector<vector<string> > out;
	for(int i=0;i<in.size();i++)
	{
		string word = in[i];
		sort(word.begin(),word.end());
		mp[word].push_back(in[i]);
	}
	
	for(j=mp.begin();j!=mp.end();j++)
		out.push_back(j->second);
	
	return out;
}
};
