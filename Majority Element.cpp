class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int res=0;
        int count=1;
        for(int i=1;i<size;i++){
            if(a[i]==a[res]){
                count++;
            }
            else{
                count--;
                if(count==0){
                    res=i;
                    count=1;
                }
            }
        }
        count=0;
        for(int i=0;i<size;i++){
            if(a[i]==a[res]){
                count++;
            }
        }
        if(count>size/2)
        return a[res];
        else
        return -1;
        
    }
        
    
};
