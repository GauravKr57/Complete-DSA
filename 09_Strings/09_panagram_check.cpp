
bool isPanagram(string &s){

    int freq[26]={0};

    for(int i=0;i<s.length();i++){

        if(s[i]>='a' && s[i]<='z'){
            freq[s[i]-'a']++;
        }
        else if(s[i]>='A' && s[i]<='z'){
            freq[s[i]-'A']++;
        }

    }

    for(int i=0;i<26;i++){
        if(freq[i]==0){
            return false;
        }
    }

    return true;

}