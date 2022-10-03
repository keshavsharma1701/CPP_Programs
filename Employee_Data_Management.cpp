                                        //COMPANY DATA MANAGEMENT PROGRAMME
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<fstream>
#include<ctype.h>
#include<process.h>
using namespace std;
class company                                                                 //store data of company
{
	string co_name;                                                           //company name
	string co_add;                                                            //company address
	long int co_id;                                                           //company id no
	int co_reg;                                                               //company registration no.
	void enter_data();                                                        //decleration of function 
	void display_data();                                                      //decleration of function 
};
void company::enter_data()                                                    //defination of function
{
    ofstream fc;
    fc.open("company");
    cout<<"\n\tEnter data for company";
    cout<<"\nenter name";
    cin>>co_name;
    fc<<co_name;
    cout<<"\nenter address";
    cin>>co_add;
    fc<<co_add;
    cout<<"\nenter id no";
    cin>>co_id;
    fc<<co_id;
    cout<<"\nenter registration no";
    cin>>co_reg;
    fc<<co_reg;
    getch();
    system("cls");
}
void company::display_data()                                                  //defination of function
{
	cout<<"\n\tData of company\n";
	cout<<"\nCompany name                :     "<<co_name;
	cout<<"\nCompany address             :     "<<co_add;
	cout<<"\nCompany id no.              :     "<<co_id;
	cout<<"\nCompany registration no.    :     "<<co_reg;
	getch();
	system("cls");
}
class employer                                                                //store data of employer
{
	char name;                                                                //employer name
	string post;                                                              //employer post
	long int mno;                                                             //employer mobile no.
	string mail;                                                              //employer email id.
	char gen[15];                                                             //employer gender
	string dob;                                                               //employer date of birth
	int age;                                                                  //employer age
	string add;                                                               //employer address
	char bg[10];                                                              //employer blood group
	employer()
	{
		post="Manager";                                                       //employer are only manager
	}
	void enter_employer_data();                                               //decleration of function 
	void display_employer_data();                                             //decleration of function  
};  
void employer::enter_employer_data()                                          //defination of function
{
	ofstream fep;
	fep.open("employer");
	getch();
	system("cls");
}
void employer::display_employer_data()                                        //defination of function
{
	
	getch();
	system("cls");
}
class employee                                                                //store data of employees
{
	char e_name[30];                                                          //employee name
    long int e_id;                                                            //employee id no.
    long int e_mno;                                                           //employee mabile no.
    string e_post;                                                            //employee post
    string e_dob;                                                             //employee date of birth
    int e_age;                                                                //employee age
    char e_doj;                                                               //employee date of joinning
    string e_add;                                                             //employee address
    string e_email;                                                           //employee email id
    char e_bg[10];                                                            //employee blood group
    char e_gen[15];                                                           //employee gender
    long int e_salary;                                                        //employee salary
    void enter_employee_data();                                               //decleration of function 
    void display_employee_data();                                             //decleration of function 
};
void employee::enter_employee_data()                                          //defination of function
{
	
	getch();
	system("cls");
}
void employee::display_employee_data()                                        //defination of function
{
	
	getch();
	system("cls");
}
class worker                                                                  //store data of workers
{
	char w_name[30];                                                          //worker name
	long int w_id;                                                            //worker id no.
	long int w_mno;                                                           //worker mobile no.
	string w_post;                                                            //worker post
	string w_dob;                                                             //worker date of birth
    int w_age;                                                                //worker age
    char w_doj;                                                               //worker date of joinning
    string w_add;                                                             //worker address
    string w_email;                                                           //worker email id
    char w_bg[10];                                                            //worker blood group
    char w_gen[15];                                                           //worker gender
    long int w_salary;                                                        //worker salary
    void enter_worker_data();                                                 //decleration of function 
    void display_worker_data();                                               //decleration of function 
};
void worker::enter_worker_data()                                              //defination of function
{
	
	getch();
	system("cls");
}
void worker::display_worker_data()                                            //defination of function
{
	
	getch();
	system("cls");
}
int main()
{
	cout<<"\n\t\tHello!";
	cout<<"\n\tWelcome in COMPANY DATA MANAGEMENT PROGRAMME\n";
	cout<<"\nThis programme is control by the users";
	cout<<"\nThis programme is fully work on file handling ";
	cout<<"\nMeans store data in file for next time usage ";
	getch();
	system("cls");
	char choice, ch;
	char cgo='a';
	int c=0;
	do
	{
		c++;
		if(c==1)
		{
			goto cgo;
			ch=cgo;
		}
	    cout<<"\n\n\tWhat do you want   Enter your choice";
	    cout<<"\n\tYou have following choices :-";
	    cout<<"\n\t";
	    cin>>ch;                                                              //users choice for various function
	    cgo:
	    switch(ch)
	    {
	    	case  'a' : ;
	    	          break;
	    	case  'b' : ;
	    	          break;
	    	case  'c' : ;
	    	          break;
	    	case  'd' : ;
	    	          break;
	    	default   : cout<<"\nWrong choice";
	    	          break;
		}
	    cout<<"\n\tDo you want to continue";
	    cout<<"\n\tpress 'y'or'Y'for yes ";
	    cout<<"\n\tpress any another key for no\n";
	    cin>>choice;                                                          //users choice to continue
	}while((choice=='y')||(choice=='Y'));
	cout<<"\n\n\t\tThankyou for using my app";
	cout<<"\n\n\t\tapp made by  :  KESHAV SHARMA";
    getch();
    system("cls");
    return 0;
}

