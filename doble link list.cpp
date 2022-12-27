#include <iostream>

int main() {
 int info;
 node *plink;
 node *flink;
};
node *head=NULL, *tail=NULL, *nptr, *ptr;
int item;
void insert_atstart();
void insert_atlast();
main()
{
    int ch;
    while(1)
    {
        cout<<"\npress 0 for exit";
        cout<<"\npress 1 for traversing";
        cout<<"\npress 2 for insertion at start";
        cout<<"\nenter your choice";
        cin>>ch;
        switch(ch)
        {
         case 1:
               traverse();
                break;
                
        case 2:
        insert_atstart();
        break;
        caee 0:
            exit(0);
        break;
        default:
        cout<<"\nworng answer";
        
        }
    }
}
void insert_atstart()
{
    nptr=new node;
    cout<<"\nenter the item tou want to insert";
    cin>>item;
    if(head=NULL)
    {
        nptr->info=item;
        nptr->plink=NULL;
        notr->flink=NULL;
        head=nptr;
        tail=nptr;
        cout<<"\nnode inserted";
    }
}
void insert_atlast()
{
	nptr=new node;
    cout<<"\nenter the item ";
    cin>>item;
    if(head=NULL)
	{
	  nptr->plink=NULL;
     nptr->flink=NULL;
     head=nptr;
     tail=nptr;
        cout<<"\nnode inserted";
        
    }
    else
    {
    nptr->info=item;
	nptr->plink=tail;
	nptr->flink=NULL;
	tail->flink=nptr;
	tail=nptr;
	cout<<"\nnode inserted";
}

void traverse()
{
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->info<"  ";
	}
}
    	
    	
    	
    	
    	
	}
}
