
// BETTER

int countDistinct(string &s){

    int n=s.length();
    int res=0;

    for(int i=0;i<n;i++){

        vector<bool> visited(256,false);

        for(int j=i;j<n;j++){

            if(visited[s[j]]==true){
                break;
            }
            else{
                res= max(res,j-i+1);
                visited[s[j]]= true;
            }

        }

    }

    return res;

}

// EFFCIENT

int longestDistinct(string str) 
{ 
	int n = str.length(); 
	int res = 0;
	vector<int> prev(256,-1);
	int i=0;
	for (int j = 0; j < n; j++){

	    i=max(i,prev[str[j]]+1);
	    int maxEnd=j-i+1;
	    res=max(res,maxEnd);
	    prev[str[j]]=j;
        
	} 

	return res; 

} 