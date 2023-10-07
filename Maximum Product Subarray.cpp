class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long prefix = 1 , suffix = 1 ;
        long long maxi = INT_MIN ;
        
        for(int i = 0 ; i < n ; i++){
            if(prefix == 0 )
                prefix = 1 ;
            if(suffix == 0 )
                suffix = 1 ;
            
            prefix = prefix * arr[i] ;
            suffix = suffix * arr[n - i - 1] ;
            maxi = max(maxi , max(prefix , suffix));
        }
        
        return maxi ;
	}
};
