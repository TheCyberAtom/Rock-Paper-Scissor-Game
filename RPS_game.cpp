#include <iostream>
#include <stdlib.h>
using namespace std;

game(int choice)
{
	int lower=1,higher=3,cpu_value;
	cpu_value=(rand()%(higher-lower+1))+lower;
	string cpu_choice,value;
	if(choice==1)
		value = "Rock";
	if(choice==2)
		value = "Paper";
	if(choice==3)
		value = "Scissor";
	if(choice<0 && choice>3)
		exit(0);
	cout<<"\tUser Choose \t CPU Choose \t\t\t Result";
	cout<<"\n\n\t "<<value;
	
	switch(cpu_value)
	{
		case 1:
			cpu_choice ="Rock";
			cout<<"\t\t"<<cpu_choice;
			break;
		case 2:
			cpu_choice ="Paper";
			cout<<"\t\t"<<cpu_choice;
			break;
		case 3:
			cpu_choice ="Scissor";
			cout<<"\t\t"<<cpu_choice;
			break;
		default:
			break;
	}

// printing the result of this GAME 
	
	if(choice == cpu_value)
		cout<<"\t\t\t This Round  is Tie ..";
	else
	{
		if(choice == 1)
		{
			if(cpu_value == 2)
				cout<<"\t\t\t CPU won this Round..";
			else
				cout<<"\t\t\t User won this Round..";
		}
		if(choice == 2)
		{
			if(cpu_value == 3)
				cout<<"\t\t\t CPU won this Round..";
			else
				cout<<"\t\t\t User won this Round..";
		}
		if(choice == 3)
		{
			if(cpu_value == 1)
				cout<<"\t\t\t CPU won this Round..";
			else
				cout<<"\t\t\t User won this Round..";
		}	
	}
	cout<<"\n";
	for(int i=0;i<60;i++)
	{
		cout<<"--";
	}
}

int main()
{
	cout<<"\t\t\t\t\t\t ROCK PAPER SCISSOR GAME\n";
	for(int i=0;i<60;i++)
	{
		cout<<"--";
	}	
	int choice;
	string value;
	cout<<"How To Play :  \n ";
	cout<<"\n Enter 1 : ROCK \n Enter 2 : PAPER \n Enter 3 : SCISSOR \n Enter Any Other Key to End This GAME \n";
	for(int i=0;i<60;i++)
	{
		cout<<"--";
	}
	do
	{
		cout<<"\nEnter Your choice : ";
		cin>>choice;
		if(choice<1 || choice>3)
			break;
		game(choice);
	}while(choice>1 || choice<3);
	cout<<"\n\n\t\t\t ..............Thank You for Playing This Game............\n";	
	return 0;
}
