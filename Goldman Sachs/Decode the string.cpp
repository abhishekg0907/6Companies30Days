class Solution{
public:
    string decodedString(string s){
        stack<char> st;
	string temp="";
	int i,j,k,res=0;
	for(i=0;i<s.size();i++){
		if(s[i]==']'){
			temp="";
			while(st.top()!='['){
				temp.push_back(st.top());
				st.pop();
			}
			st.pop();
			res=0;
			j=1;
			while((!st.empty())&&st.top()>=48&&st.top()<=57){
				res = res + (st.top()-48)*j;
				st.pop();
				j*=10;
			}
			
			for(j=0;j<res;j++){
				for(k=temp.size()-1;k>=0;k--){
					st.push(temp[k]);
				}
			}			
		}
		else
		st.push(s[i]);
	}
	temp = "";
	while(!st.empty())
		{
			temp.push_back(st.top());
			st.pop();
		}
		reverse(temp.begin(),temp.end());
		return temp;
    }
};
