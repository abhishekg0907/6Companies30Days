class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        if(s1+s2!=s2+s1)
		return "";
		
	int a = s1.size();
	int b = s2.size();
	int temp;
	while(b)
	{       
	    temp = a;
	    a = b;
	    b = temp%b;
	}
	return s1.substr(0,a);
    }
};
