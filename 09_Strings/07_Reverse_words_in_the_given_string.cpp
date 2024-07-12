
// NAIVE

string reverse(string &s){

    vector<string> v;
    string str="";

    for(int i=0;i<s.length();i++){

        if(s[i] == ' '){
            v.push_back(str);
            str=" ";
        }
        else{
            str += s[i];
        }

    }

    v.push_back(str);
    string ans= "";

    for(int i=v.size()-1;i>=0;i--){

        ans = ans+v[i]+' ';
        ans += s[0];

    }

    return ans;

}

// MOST EFFICIENT

string reverseWords(string s) 
    { 
        // code here 
        
        int start=0;
        
        for(int end=0;end<=s.size();end++){
            
            if(s[end] == ' ' || end==s.size()){
                reverse(s.begin()+start, s.begin()+end);
                start = end+1;
            }
            
        }
        
        reverse(s.begin(),s.end());
        
        return s;
    } 

//EFFICIENT

string reverseWords(string s) 
    { 
        // code here 
        
        string ans="";
        int start=0,count=0;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i] == ' '){
                
                string str= s.substr(start,count);
                reverse(str.begin(),str.end());
                
                ans = ans+str+' ';
                start=i+1;
                count=0;
            }
            else{
                count++;
            }
            
        }
        
        string str= s.substr(start,count);
        reverse(str.begin(),str.end());
        ans += str;
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
        
    } 