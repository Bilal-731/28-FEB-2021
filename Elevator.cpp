#include<iostream>

using namespace std ;

int base ()
{
	cout<<"You have reached Main Hall !\n";
}
int first ()
{
	int a;
	a=a+100;
	cout<<"You have reached First floor !\n";
}
int second ()
{
	int a;
	a=a+200;
	cout<<"You have reached Second floor !\n";
}
int third ()
{
	int a;	
	a=a+300;
	cout<<"You have reached Third floor !\n";
}
int fourth ()
{
	int a;	
	a=a+400;
	cout<<"You have reached Fourth floor !\n";
}


int main ()

{
	
	int choice;
	cout<<"Welcome to AniPao lift !\n\n"<<"Which floor do you want to go ?\n"<<"Floor number= ";
	cin>>choice;
	
	cout<<"Step aside, Door is opening !\n";
	if (choice==0)
	{
		cout<<base;
		base();
		cout<<endl;
	}
	else if (choice==1)
	{
		cout<<first;
		first();
		cout<<endl;
	}
	else if (choice==2)
	{
		cout<<second;
		second();
		cout<<endl;
	}
	else if (choice==3)
	{
		cout<<third;
		third();
		cout<<endl;
	}
	else if (choice==4)
	{
		cout<<fourth;
		fourth();
		cout<<endl;
	}
	else
	{
		cout<<"Invalid choice !";
		cout<<"endl";
	}
	cout<<"Step aside door is Closing !\n";
	return main ();
}
