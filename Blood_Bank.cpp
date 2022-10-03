#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class bloodbank
{
	char name[30];
	int dob;
	long int tno;
	char* bg;
	public:
		void getdata();
		void display();
		long int telephone_no();
};
void bloodbank::getdata()
{
	cout<<"\nEnter name\n";
	cin>>name;
	cout<<"\nEnter date of birth\nformat is dd mm yyyy\n";
	cin>>dob;
	cout<<"\nEnter telephone no.\n";
	cin>>tno;
	cout<<"\nEnter blood group\n";
	gets(bg);
 } 
 void bloodbank::display()
 {
 	cout<<"\nName           "<<name;
 	cout<<"\ndate of birth  "<<dob;
 	cout<<"\ntelephone no.  "<<tno;
 	cout<<"\nblood group    ";
 	puts(bg);
 }
long int bloodbank::telephone_no()
{
 	return tno;
}
int main()
{
	bloodbank b[100];
	long int a;
	char ch;
	int choice;
	cout<<"\nIt is the program to display and modify the records of blood bank\n";
	getch();
	fstream fp("D:/programming/blood_bank.txt",ios::in|ios::out);
	if(fp.fail())
	{
		cout<<"\n\tenable to open file\n\t";
        return 0;
	}
	do
	{
		system("cls");
		cout<<"\nWhat do you want\n";
		cout<<"enter your choice\n";
		cout<<"type";
		cout<<"\n1 for storing data";
		cout<<"\n2 for modify data";
		cin>>choice;
		system("cls");
		switch(choice)
		{
			case 1  : int n;
			          cout<<"\n\tenter the no of people\n\t";
			          cin>>n;
			          for(int i=0;i<n;i++)
			          {
			          	cout<<"\n\tenter details for "<<i+1<<endl;
			          	b[i].getdata();
			          	//fp<<b[i];
					  }
			          break;
			case 2  : long int dtn;
			          cout<<"\n\tenter telephone no\n\t";
			          cin>>dtn;
			          while(fp>>a)
			          {
			          	if(a==dtn)
			          	{
			          		cout<<fp;
						}
					  }
		              break;
			default : cout<<"\nWrong choice\n";
		}
		cout<<"\ndo you want to continue\n";
		cout<<"type 'Y' or 'y' for yes\n";
		cout<<"any other key for no\n";
		cin>>ch;
	}while((ch=='Y')||(ch=='y'));
	cout<<"\n\tThanking you\n\t";
	getch();
	return 0;
}

