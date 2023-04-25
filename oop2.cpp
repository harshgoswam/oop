#include<iostream>
#include<string.h>
using namespace std;
class employ
{
	public:
	int id;
	char name[100];
	char company[100];
	char salary[100];
	char ad[100];
	
}e[5];

main()
{
	for(int i=0;i<5;i++)
	{
	cout<<"Enter ID->";
	cin>>e[i].id;
	cout<<"Enter Name->";
	cin>>e[i].name;
	cout<<"Enter Company Name->";
	cin>>e[i].company;
	cout<<"Enter Salary->";
	cin>>e[i].salary;
	cout<<"Enter Address->";
	cin>>e[i].ad;
	
	cout<<endl;
	}
	
	cout<<"--------------------------------------------"<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<"ID ->"<<e[i].id<<endl;
	cout<<"Name ->"<<e[i].name<<endl;
	cout<<"Company ->"<<e[i].company<<endl;
	cout<<"Salary ->"<<e[i].salary<<endl;
	cout<<"Address ->"<<e[i].ad<<endl;
	
	cout<<endl;
		
	}
	
	
}
