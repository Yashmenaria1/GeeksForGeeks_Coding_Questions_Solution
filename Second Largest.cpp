class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max1=0,max2=-1;
            for(int i=0;i<n;i++){
            if(arr[i]>max1) max1=arr[i];
            }
            for(int i=0;i<n;i++){
            if(arr[i]!=max1 and arr[i]>max2) max2=arr[i];
            }
            return max2;

	}
};
