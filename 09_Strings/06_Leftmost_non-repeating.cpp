
//BETTER

const int CHAR=256;
int nonRep(string &str) 
{
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]]==1)return i;
    }
    return -1;
}

//EFFCIIENT : IMPORTANT

int NonRep(string &s){

    int f[256];
    fill(f,f+256,-1);

    for(int i=0;i<s.length();i++){

        if(f[s[i]] == -1){
            f[s[i]] = i;
        }
        else{
            f[s[i]] = -2;
        }

    }

    int res=INT_MAX;
    for(int i=0;i<256;i++){
        if(f[i]>=0)res=min(res,f[i]);
    }
    return (res==INT_MAX)?-1:res;

}