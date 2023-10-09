class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string k)
    {
   string str="";
     str+=k[0];
     int i=1;

     while(i<k.size()){
      char ch=str[str.size()-1];
     if(k[i]== ')' || k[i]== ']' || k[i]== '}'){
      if(ch=='(' && k[i]==')' || ch=='{' && k[i]=='}' || ch=='[' && k[i]==']')
      str.pop_back();
      else
       str.push_back(k[i]); 
         i++;
     }
     else{
    str.push_back(k[i]);
    i++;
     }
    
     }
     
     if(str.empty())
     return true;
     return false;
    }

};
