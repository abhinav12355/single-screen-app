#include<stdlib.h>
#include<conio.h>
#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class abc
{
	struct node *head;
	public:		
	abc()
	{
	head=NULL;
	}
		void create(int n)
		{
			if(head==NULL)
			{
				struct node *a=new struct node;
				a->data=n;
				a->next=NULL;
				head=a;
			}
			else
			{
				struct node *x=head;
				struct node *b=new struct node;
				b->data=n;
				b->next=NULL;
				while(x->next!=NULL)
				{
					x=x->next;
				}
					x->next=b;
			}
		}
		void print()
		{
			struct node *hhead=head;
			while(hhead!=NULL)
			{
				cout<<hhead->data<<" ";
				hhead=hhead->next;
			}
		}
};

int main()
{
	abc a;
	a.create(5);
	a.create(10);
	a.create(15);
	a.print();
	getch();
	return 0;
}
