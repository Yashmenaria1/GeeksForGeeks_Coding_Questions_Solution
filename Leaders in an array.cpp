class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector <int> ans;
        int maximum  = INT_MIN;
        for(int i = n-1; i>=0; i--){
            maximum = max(maximum, a[i]);
            if(maximum == a[i]){
                ans.push_back(a[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
