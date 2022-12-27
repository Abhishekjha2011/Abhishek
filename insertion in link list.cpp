#include<iostream>
using namespace std;
struct node
{
int info;
node *link;//self referential structure
};
int item;
void insert_atstart();
void traverse();
void insert_atend();
void insert_atloc();
void search();
struct node *head=NULL,*nptr,*ptr;
main()
{
int ch;
while(1)
{
cout<<"\nPress 1 for Insertion at Start";
cout<<"\nPress 2 for Insertion at End";
cout<<"\nPress 3 for Insertion at Loc";
cout<<"\nPress 4 for Traverse";
cout<<"\nPress 5 for Searching";
cout<<"\nPress 8 for exit";
cout<<"\nEnter your choice";
cin>>ch;
switch(ch)
{
case 1:
insert_atstart();
break;
case 4:
traverse();
break;
case 2:
insert_atend();
break;
case 3:
insert_atloc();
break;
case 5:
search();
break;
case 8:
exit(0);
}
}
}
void insert_atstart()
{
if(head==NULL)
{
nptr=new node;
cout<<"\nEnter the info part";
cin>>item;
nptr->info=item;
nptr->link=NULL;
head=nptr;
cout<<"ITEM INSERTED";
}
else
{
nptr=new node;
cout<<"\nEnter the info part";
cin>>item;
nptr->info=item;
nptr->link=head;
head=nptr;
cout<<"\nItem inserted";
}
}

void traverse()
{
if(head==NULL)
{
cout<<"\nTraversal not possible";
}
else
{
ptr=head;
while(ptr!=NULL)
{
cout<<ptr->info<<" ";
ptr=ptr->link;
}
}
}

void insert_atend()
{
cout<<"\nEnter the item you want to insert";
cin>>item;
if(head==NULL)
{
nptr=new node;
nptr->info=item;
nptr->link=NULL;
head=nptr;
}
else
{
nptr=new node;
nptr->info=item;
nptr->link=NULL;
ptr=head;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=nptr;
}
cout<<"\nNode Inserted";
}
void insert_atloc()
{
int val;
node *loc;
int flag=0;
cout<<"\nEnter the item";
cin>>item;
cout<<"\nEnter the value after which you want to insert";
cin>>val;
if(head==NULL)
{
nptr=new node;
nptr->info=item;
nptr->link=NULL;
head=nptr;
}
else
{
nptr=new node;
nptr->info=item;
ptr=head;
while(ptr!=NULL)
{
if(ptr->info==val)
{
loc=ptr;
flag=1;
break;
}
else
ptr=ptr->link;
}
}
if(flag==1)
{
nptr->link=loc->link;
loc->link=nptr;
}
cout<<"\nNode Inserted";
}

void search()
{
int val;
node *loc;
int flag=0;
int count=0;
cout<<"\nEnter the value you want to search";
cin>>val;
if(head==NULL)
{
cout<<"\nNo element in the list so seaerch not possible";

}
else
{
ptr=head;
while(ptr!=NULL)
{
if(ptr->info==val)
{
flag=1;
loc=ptr;
count++;
break;
}
else
ptr=ptr->link;
count++;
}
if(flag==1)
{
cout<<"\nSearch Successfull";
cout<<"\nAdress loc"<<loc;
cout<<"\nposition"<<count;
}
else
cout<<"\nSearch Unsuccessfull";
}
}
