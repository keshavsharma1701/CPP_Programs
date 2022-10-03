#include<iostream>                                                                                                 
#include<conio.h>                                                                                                
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int i,n,c=0,k;
	char m,u,v;
	cout<<"\n\n\t\tA GAME OF GEUSSING NO"<<endl<<"\t\t\t\t\tpress enter";
	getch();
	cout<<"\n\n\t\tpress (E,e) for quit"<<endl<<"\n\n\t\tpress (S,s) to see score"<<endl<<"\n\n\t\t\t\t\t\tpress enter to play now";
	getch();
	do
	{
        cout<<"\n\n\t\tlets play\n\n\t\t"<<endl<<"\t\t\t\t\tpress enter";
        getch();
        cout<<"\n\n\t\tyou can geuss no 10 times\n\n\t\t"<<endl<<"\t\t\t\t\tpress enter";
        getch();
	    for(i=1;i<10;++i)
	    {
	        cout<<"\ngeuss any event off a dice\n";
		    cin>>n;
		   /* if(n=='E'||'e')
		    {
		        goto v;
		    }
		    if(n=='S'||'s')
		    {
		        goto u;
		    } */
		    cout<<endl;
		    k=(rand()%6)+1;
		    cout<<k<<endl;
		    if(n==k)
		    {
			    cout<<" correct "<<" you won "<<endl;
			    c++;
		    }
		    else
		    {
			    cout<<" incorrect "<<" you loss "<<endl;
		    }	
	    }
	    u:
	    cout<<endl<<" you won   :    "<<c<<" times ";
	    cout<<endl<<" you loss   :   "<<10-c<<" times ";
	    cout<<"\n\tdo you want to continue type (y/Y) for yes and any character to no";
	    cin>>m;
	}while(m=='Y'||m=='y');  
	getch();
	v:
    return 0;
}

