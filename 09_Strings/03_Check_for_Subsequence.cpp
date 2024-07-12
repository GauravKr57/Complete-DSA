
bool checkSubsequence(string s1, string s2){

    int i=0, j=0;

    while(i<s1.length() && j<s2.length()){

        if(s1[i] == s2[j]){
            i++;
            j++;
        }
        else{
            i++;
        }

    }

    return (j == s2.length());

}