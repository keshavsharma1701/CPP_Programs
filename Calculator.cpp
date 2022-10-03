         //  Program of a calculator.                                                                                                                            
#include<iostream>                                                                                                                                               
#include<conio.h>                                                                                                                                                
#include<math.h>                                                                                                                                                 
#include<ctype.h>                                                                                                                                                
#include<iomanip>                                                                                                                                               
#include<stdio.h>                                                                                                                                                
#include<stdlib.h>                                                                                                                                               
#include<time.h>                                                                                                                                                 
#include<string.h>
using namespace std;
int main()
{
	int i;
	char choice;
	cout<<"\n\n\t\t\t\t you have following choices \n";
	cout<<"\n\n\t\t\t\t type the number listed below \n";
	cout<<"\n\n1. addition\n2. subtraction\n3. multipication\n4. division\n5. remainder\n6. for determining even-odd\n";
	cout<<"7. for determining positive & negative number\n8. for caculating & determining profit &loss\n9. simple interest\n10. compound interest\n";
	cout<<"11. trigonometric ratio\n12. roots of quadratic equation\n13. square root & power\n14. greatest among 3 numbers\n";
	cout<<"15. average marks of 5 subjects\n16. factorial\n\n\n\n\n\n\n\n";
	do
	{
		if(choice=='Y'||choice=='y')
		cout<<"\n\t\t re enter your choice\n";
		cin>>i;
		switch(i)
		{
			case 1: double c,a,b;
                    cout<<"enter two numbers\n";
			        cin>>a>>b;
			        c=a+b;
			        cout<<"addition = "<<c<<"\n";
			        break;
			case 2: double C,A,B;
                    cout<<"enter two numbers\n";
			        cin>>A>>B;
			        C=A-B;
			        cout<<"subtraction = "<<C<<"\n";
			        break;
			case 3: double d,e,f;
                    cout<<"enter two numbers\n";
			        cin>>e>>f;
			        d=e*f;
			        cout<<"multiplication = "<<d<<"\n";
			        break;
			case 4: double D,E,F;
                    cout<<"enter two numbers\n";
			        cin>>E>>F;
			        D=E/F;
			        cout<<"division = "<<D<<"\n";
			        break;
			case 5: int X,Y,Z;
                    cout<<"enter two integers\n";
			        cin>>Y>>X;
			        Z=Y%X;
			        cout<<"remainder = "<<Z<<"\n";
			        break;
			case 6: int n;
	                cout<<"enter any integer\n";
	                cin>>n;
	                if (n%2==0)
	                cout<<"number is even\n";
	                else
	                cout<<"number is odd\n";
	                break;
	        case 7: double g;
                    cout<<"enter a number\n";
                    cin>>g;
                    if (g>0)
					{
                        cout<<"number is positive\n";
                    }
                    else
                    {
                        if (g<0)
                        cout<<"number is negative\n";
                        else
                        cout<<"number is neutral\n";
		            }
		            break;
		    case 8: double j,k,l,m;
	                cout<<"enter cost price\n";
	                cin>>j;
	                cout<<"enter selling price\n";
	                cin>>k;
	                if (j>k)
	                {
       		            l=j-k;
		                cout<<"loss=\t"<<l<<"\n";
	                }
	                else
	                {
		                if (j<k)
		                {
			                    m=k-j;
			                    cout<<"profit=\t"<<m<<"\n";
		                } 
		                else
		                {
			                cout<<"no profit no loss"<<"\n";
		                }	
	                }
	                break;
	        case 9: double pr,ra,ti,si;
                    cout<<"enter principle \n";
                    cin>>pr;
                    cout<<"enter rate \n";
                    cin>>ra;
                    cout<<"enter time \n";
                    cin>>ti;
                    si=(pr*ra*ti)/100;
                    cout<<"simple interest=\t"<<d<<"\n";
                    break;
            case 10: double co,PR,RA,TI;
			         cout<<"enter principle";   
	        default : cout<<"wrong choice"<<"\n";
	    }
			cout<<"type (Y/y) for continue and any character for close"<<"\n";
	        cin>>choice;
	}while(choice=='Y'||choice=='y');
	getch();
	return 0;
}
int sum()
{
	cout<<"enter how many ";
}
