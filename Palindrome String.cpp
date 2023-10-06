class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	     return (S==string(S.rbegin(),S.rend()));
	}

};
