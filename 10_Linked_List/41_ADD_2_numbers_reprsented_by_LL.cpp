#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    
     Node *reverse(Node *head){
        Node *curr = head;
        Node *before=NULL, *after=NULL;
        
        while(curr != NULL){
            after = curr->next;
            curr->next = before;
            before = curr;
            curr = after;
        }
        
        return before;
    }
    
    
    void insertatTail(struct Node *&head,struct Node *&tail, int c){
        
        Node *temp = new Node(c);
        
        if(head==NULL){
            head=tail=temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    
    struct Node *add(struct Node *first, struct Node *second){
        
        int carry = 0;
        Node *anshead=NULL, *anstail=NULL;
        
        while(first!=NULL || second!=NULL || carry!=0){
            
            int val1 = 0;
            if(first != NULL){
                val1 = first->data;
            }
            
            int val2 = 0;
            if(second != NULL){
                val2 = second->data;
            }
            
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            insertatTail(anshead,anstail,digit);
            
            carry = sum/10;
            
            if(first != NULL){
                first = first->next;
            }
            if(second != NULL){
                second = second->next;
            }
            
        }
        
        return anshead;
        
    }
    
    public:
    //Function to add two numbers represented by linked list.
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        
        // s1: reverse both lists
        first = reverse(first);
        second = reverse(second);
        
        // s2: add
        Node *ans = add(first,second);
        
        //s3: reverse
        ans = reverse(ans);
        
        return ans;
        
    }
};

int main(){

    

    return 0;
}