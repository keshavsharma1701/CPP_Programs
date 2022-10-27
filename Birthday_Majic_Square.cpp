#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
void majic_square()
{
	system("cls");
	int a,b,c,d;
	cout<<"\n\tEnter your date of birth in (dd-mm-yyyy)\n"<<"\tplease enter year in 4 digit\n";
	cin>>a>>b>>c;
	d=c%100;
	c=c/100;
	cout<<"\n\t MAJIC SQUARE   :\n\t";
	cout<<"\n         ___________________"<<"\n\t";
	cout<<"| "<<a<<"   "<<b<<"   "<<c<<"   "<<d<<" \n";
	cout<<"        |___________________|"<<"\n\t";
	cout<<"| "<<d+1<<"   "<<c-1<<"   "<<b-3<<"   "<<a+3<<" \n";
	cout<<"        |___________________|"<<"\n\t";
	cout<<"| "<<b-2<<"   "<<a+2<<"   "<<d+2<<"   "<<c-2<<" \n";
	cout<<"        |___________________|"<<"\n\t";
	cout<<"| "<<c+1<<"   "<<d-1<<"   "<<a+1<<"   "<<b-1<<" \n";
	cout<<"        |___________________|"<<"\n\t";
	cout<<"\n\n\tSum  :  "<<a+b+c+d<<endl;
	getch();
	system("cls");
}
void know_m_s()
{
	system("cls");
	char c;
	cout<<"\n\tFirst majic square is made by ";
	cout<<"\n\tS.Ramanujan (The great indian mathematician)";
	cout<<"\n\tIn majic square sum of all row, ";
	cout<<"\n\tcoulumn, diagonal, plus, diamond, corner, ";
	cout<<"\n\tcorner square, right square, left square,";
	cout<<"\n\ttop square, bottom square and ";
	cout<<"\n\tmiddle square are same as the sum of";
	cout<<"\n\tdate,month and year of your date of birth";
	cout<<"\n\n\t\tNow you want to make a majic square type (Y/y) for yes"<<endl;
	cin>>c;
	if((c=='y')||(c=='Y'))
	{
		majic_square();
	}
	getch();
	system("cls");
}
int main()
{
    char choice,m,keshav;
	cout<<"\n\t A Program to make a majic square acorrding to your date of birth\n"<<"\t\t\t\t\tpress enter to continue \n";
	getch();
	system("cls");
	do
	{
	    cout<<"\n\tWhat do you want\n\t"<<"press (W/w) for knowing what is majic square\n\t"<<"press (M/m) for making majic square\n\t";
        cin>>choice;
        if((choice=='W')||(choice=='w'))
        {
    	    know_m_s();
	    }
	    else
	    {
		    if((choice=='M')||(choice=='m'))
		    {
			    majic_square();
		    }
		    else
		    {
			    goto keshav;
		    }
	    }

	    cout<<"\n\tDo you want to continue type (C/c) for yes and any key for no"<<endl;
	}while((m=='c')||(m=='C'));
	getch();
	keshav:
	cout<<"\n\n\tTHANKING YOU FOR USING"<<"\n\t\t\t\tMade by  :   KESHAV SHARMA\n";
	return 0;
}

