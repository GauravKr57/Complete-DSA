#include<bits/stdc++.h>
using namespace std;

// MOST EFFICIENT lets take 7 and 9

void generateN(int n)
{
    queue<string> q;

    q.push("7");
    q.push("9");

    for(int i=0;i<n;i++){

        string curr = q.front();
        cout<<curr<<" ";
        q.pop();

        q.push(curr+'7');
        q.push(curr+'9');

    }
    cout<<endl;

}


// GENERATE BINARY FROM 1 to n

void generateBinary(int n){

    queue<string> q;
    q.push("1");

    for(int i=0;i<n;i++){

        string curr = q.front();
        cout<<curr<<" ";
        q.pop();

        q.push(curr+"0");
        q.push(curr+"1");

    }

}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    generateN(n);
    generateBinary(n);

    return 0;
}