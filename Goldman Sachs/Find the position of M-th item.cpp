class Solution {
  public:
    int findPosition(int N , int M , int K) {
        if((M+K-1)%N==0)
            return N;
        return (M+K-1)%N;
    }
};
