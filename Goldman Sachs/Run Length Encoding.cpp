string encode(string src)
{     
  int count=1;
  string out;
  char ch = src[0];
  for(int i=1;i<src.size();i++)
  {
      if(ch==src[i])
      count++;
      else{
          out.push_back(ch);
          out.push_back(count+48);
          count=1;
          ch=src[i];
      }
      
  }
          out.push_back(ch);
          out.push_back(count+48);
  return out; 
}
