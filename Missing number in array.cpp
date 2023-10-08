class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        // int N = n+1;
        int sum1 = (n*(n+1))/2;
        int sum =0;
        for(int num : array){
            sum += num;
        }
        int total = sum1 - sum;
        return total;
    }
};
