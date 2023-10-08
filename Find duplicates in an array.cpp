class Solution {
public:
    vector<int> duplicates(long long arr[], int n) {
        vector<int> ans;
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1] && (ans.empty() || ans[ans.size() - 1] != arr[i])) {
                ans.push_back(arr[i]);
            }
        }
        
        if (ans.empty()) {
            return {-1}; // Return a vector with a single element -1 for no duplicates
        } else {
            return ans;
        }
    }
};
