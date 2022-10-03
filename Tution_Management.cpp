#include<math.h>
#include<ctype.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<process.h>
using namespace std;
int count=0;
class student
{
	char name[20];
	int id;
	int clas;
	public:
	long int fees;
	student()
	{
		count++;
	}
	void scandata()
	{
		cout<<"\n\tEnter name of student\n\t";
		cin>>name;
		cout<<"\n\tEnter id of student\n\t";
		cin>>id;
		cout<<"\n\tEnter class of student\n\t";
		cin>>clas;
		cout<<"\n\tEnter fees of student\n\t";
		cin>>fees;
    } 
    void display()
    {
    	cout<<"\n\tName of student  :  ";
    	puts(name);
    	cout<<"\n\tID of student    :  "<<id<<"\n\tClass of student   :   "<<clas<<"\n\tFees of student   :   "<<fees;
	}
	long int add(&student);
};
long int student::add(student c[25])
{
	long int sum=0,j=0;
    for(j=0;j<25;j++)
    {
    	sum+=c[j].fees;
	}
	return sum;
}
int main()
{
	int ex,n;
    class student c[25],x;
    int i;
    char p,v;
    cout<<"\n\tA program to store information about students\t"<<"Press Enter";
    getch();
    cout<<"\n\tEnter no of student (max 25 students)\t ";
    cin>>n;
    for(i=0;i<n;i++)
	{
		cout<<"Enter details of student "<<i+1;
		c[i].scandata();
	}
	do
	{
		cout<<"What do you want?\n ";
		cout<<"Press (A/a) to add fees\n";
		cout<<"Press (D/d) to display data\n";
		cout<<"press any key to exit \n";
		cin>>p;
		char t;
		if(p=='A'||p=='a')
		{
			long int w;
			w=x.add(c[n]);
			cout<<w;
		}
	    else
	    {
	        if(p=='D'||p=='d')
	        {
	        	do
	        	{
	        		int r;
	        	    cout<<"Enter s.no of student \n";
	        	    cin>>r;
	        	    c[r].display();
	        	    cout<<"Do you want to see another student details type (Y/y) for yes and (N/n) for no ";
	        	    cin>>t;
	            }while((t=='y')||(t=='Y'));
			}
			else
			{
				goto ex;
			}
	   	}
	   	cout<<"\n\tNo of students  :  "<<count;
	   	cout<<"\n\t do you want to continue type (Y/y) for yes and any character to no\n\t";
	   	cin>>v;
	}while((v=='Y')||(v=='y'));
	getch();
	ex:
	return 0;
}

