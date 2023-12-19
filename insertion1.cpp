#include<bits/stdc++.h>

using namespace std;  

class Node{
    public:
        int data;
        Node* next;
};

void insert(Node*& head,int data)
{
    Node* temp=new Node();
    temp->data=data;
    temp->next=head;
    head=temp;
    return;
};
int main()
{
    Node* head=NULL;
    for(int i=0;i<5;i++)
    {
        int data;
        cout<<"Enter the data:-"<<" ";
        cin>>data;
        insert(head,data);
    }

    //traversing 

    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    

    return 0;

}