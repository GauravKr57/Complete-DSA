#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

 Node *merge(Node *a, Node *b){
        
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        Node *temp = NULL;
        
        if(a->data < b->data){
            temp = a;
            temp->next = merge(a->next, b);
        }
        else{
            temp = b;
            temp->next = merge(a, b->next);
        }
        
        return temp;
        
    }


   // METHOD 2

    Node *merge(Node *a, Node *b){
        
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        Node *head = NULL, *tail = NULL;
        
        if(a->data <= b->data){
            head = tail = a;
            a = a->next;
        }
        else{
            head = tail = b;
            b= b->next;
        }
        
        while(a!=NULL && b!=NULL){
            if(a->data <= b->data){
                tail->next = a;
                tail = tail->next;
                a = a->next;
            }
            else{
                tail->next = b;
                tail = tail->next;
                b = b->next;
            }
        }
        
        if(a==NULL){
            tail->next = b;
        }
        else{
            tail->next = a;
        }
        
        return head;
        
    }
    
   
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           
            Node *head1 = arr[0];
            
            for(int i=1;i<K;i++){
                Node *head2 = arr[i];
                head1 = merge(head1,head2);
            }
           
           return head1;
    }
    
   
    

int main(){

    

    return 0;
}