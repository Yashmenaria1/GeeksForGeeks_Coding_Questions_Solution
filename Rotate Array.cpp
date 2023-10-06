//Time Complexity : O(n)
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        reverse(arr, arr+n);
        int temp[n];
        for (int i=0; i<n; i++)
        {
            temp[(i+d)%n] = arr[i];
        }
        reverse(temp, temp+n);
        
       for (int i=0; i<n ; i++)
       {
           arr[i] = temp[i];
       }
    }
};
//Giving TLE but solution is correct Time complexity: O(n^2) 
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        for(int i = 0; i<d; i++){
            int j,first;
            
            first = arr[0];
            for(j = 0; j< n-1; j++){
                arr[j] = arr[j+1];
            }
            arr[j] = first;
        }
    }
};
