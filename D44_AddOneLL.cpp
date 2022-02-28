#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
Node* head=NULL;
void display(){  
    Node *temp=new Node();
    temp=head;  
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void addend(int val){    
    Node *temp=new Node();
    temp->data=val;
    temp->next=NULL;
   
    if(head==NULL)
        head=temp;    
    else{
        Node *t=new Node();
        t=head;
        while(t->next!=NULL)
            t=t->next;        
        t->next=temp;
    }    
}

Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;

    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node* addOne(Node* head){
    Node* ans=head;
    Node* temp;

    int carry=1,sum=0;
    while(head){
        sum=carry + head->data;
        carry=(sum>=10) ? 1 : 0;
        sum%=10;
        head->data=sum;

        temp=head;
        head=head->next;
    }
    if(carry){
        Node* newnode=new Node();
        newnode->data=carry;
        newnode->next=NULL;
        temp->next=newnode;
    }
    return ans;
}
Node* solve(Node* head){
    head=reverse(head);
    head=addOne(head);
    return reverse(head);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    addend(4);
    addend(9);
    addend(9);
    addend(9);

    display();
    head=solve(head);
    display();
    return 0;
}