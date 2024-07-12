
string keypad(string s, int n){

    string num= "22233344455566677778889999";

    string ans= "";

    for(int i=0;i<n;i++){

        ans += num[s[i]-'a'];

    }

    return ans;

}