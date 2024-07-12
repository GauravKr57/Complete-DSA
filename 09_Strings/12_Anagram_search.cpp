
bool areAnagram(string &txt, string &pat){

    int ct[256]={0};
    int cp[256]={0};

    for(int i=0;i<pat.length();i++){
        ct[txt[i]]++;
        cp[pat[i]]++;
    }

    for(int i=pat.length();i<txt.length();i++){

        if(areSame(ct,cp)){
            return true;
        }

        ct[txt[i]]++;
        ct[txt[i]-pat.length()]--;

    }

    return false;

}

bool areSame(int CT[],int CP[]){
    for(int i=0;i<256;i++){
        if(CT[i]!=CP[i])return false;
    }
    return true;
}