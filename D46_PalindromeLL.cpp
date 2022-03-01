#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node* next;
};
Node* head=NULL;
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
bool compare(Node* list1,Node* list2){
    Node* t1=list1;
    Node* t2=list2;
    while( t1 and t2 ){
        cout<<"comparing "<<t1->data<<" and "<<t2->data<<endl;
        if(t1->data == t2->data){
            t1=t1->next;
            t2=t2->next;
        }
        else return false;
    }
    if(t1==NULL and t2==NULL) return true;
	return false;
}

bool isPalindrome(Node* head){
    Node *slow=head, *fast=head, *slowPrev=head;
    Node *secondhalf, *midnode=NULL;

    bool ans = true;
    if(head and head->next){
        while(fast and fast->next){
            fast = fast->next->next;
            slowPrev = slow;
            slow = slow->next;
        }
        if(fast){
            midnode = slow;
            slow = slow->next;
        }

        secondhalf = slow;
        slowPrev->next = NULL;

        secondhalf=reverse(secondhalf);
        ans=compare(head,secondhalf);
        secondhalf=reverse(secondhalf);

        if(midnode){
            slowPrev->next = midnode;
            midnode->next = secondhalf;
        }
        else slowPrev->next = secondhalf;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    addend('r');
    addend('m');
    addend('d');
    addend('a');
    addend('r');
    
    if(isPalindrome(head)) cout<<"Palindrome\n";
    else cout<<"Not Palindrome\n";
    return 0;
}