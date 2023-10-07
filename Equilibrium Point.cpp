class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
       int right=0;
       for(int i=0;i<n;i++)
       {
           right=right+a[i];
       }
       int left=0;
       for(int i=0;i<n;i++)
       {
           right = right - a[i];
           if(right==left)
           {
               return i+1;
           }
           left = left + a[i];
       }
       return -1;
    }

};
