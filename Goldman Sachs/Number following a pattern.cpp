class Solution{   
public:
    string printMinNumberForPattern(string s){
        string out;
	int i=-1,j=0,count=0,k;
	for(k=0;k<s.size();k++)
		if(s[k]=='I'){
			count+=k-i;
			out.push_back(count+48);
			i++;
			int res = count;
			while(k!=i){
				res--;
				out.push_back(res+48);
				i++;
			}
		}
		count=k+1;
	while(k!=i){
		out.push_back(count+48);
		count--;
		i++;
		}
	return out;
    }
};
