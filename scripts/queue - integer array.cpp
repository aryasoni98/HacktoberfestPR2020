//Contributed by Toshani
//Queue - integer arrays
#include <iostream>
using namespace std;

int queue[10], front=0, rear = -1, size = 10;

void enqueue()
{
	if (rear==(size-1))
	{
		cout<<"\nQueue Full";
	}
	else
	{
		cout<<"\nEnter item to add in queue\t";
		cin>>queue[++rear];
	}
	cout<<"\n";
}

void dequeue()
{
	if (front==(rear+1))
	{
		cout<<"\nQueue Empty";
	}
	else
	{
		cout<<"\nItem being deleted is:\t";
		cout<<queue[front];
		front++;
	}
	cout<<"\n";
}

void display()
{
	cout<<"\nQueue elements from front to back are:\n";
	for (int i=front; i<=rear; i++)
	{
		cout<<queue[i]<<"\t";
	}
	cout<<"\n";
}

int main()
{
	char ch='y';
	int choice;
	do
	{
		cout<<"Menu:\n";
	    cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice\t";
	    cin>>choice;
	    switch (choice)
	    {
	    	case 1: enqueue(); break;
	    	case 2: dequeue(); break;
			case 3: display(); break;
			case 4:
				exit(0);
			default: cout<<"\nEnter valid choice...";
		}
		cout<<"\nDo you want to continue?(Y/y)\t";
		cin>>ch;
	}while ((ch=='y') or (ch=='Y'));
	return 0;
}