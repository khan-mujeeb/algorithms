class Solution{
public:	
	
	string firstAlphabet(string s)
	{
	  string s2="";
	  int i=0,j=0;
	  while(s[i]!='\0'){
	       if(i==0){
	           s2+=s[i];
	       }
	       else if(s[i]==' ')
	            {
	                s2+=s[i+1];
	            }
	       i++;
	       
	    }
	    return s2;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 
  // } Driver Code Ends
