
//EFFICIENT

bool isPal(string s){

    int begin=0, end=s.length()-1;

    while(begin<end){

        if(s[begin] != s[end]){
            return false;
        }
        begin++;
        end--;

    }

    return true;

}



bool checkPalindrome(string s){

    for(int i=0;i<s.length();i++){
        if(s[i] != s[s.length()-i-1]){
            return false;
        }
    }

    return true;

}