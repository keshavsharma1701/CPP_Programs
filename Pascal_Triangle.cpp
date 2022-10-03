//This is a program to display pascal's triangle. 
// According the number of rows given by users.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	long int n,i,j,p;
	cout<<"\n\t\t PASCAL TRIANGLE\n\t";
	cout<<"enter no of rows\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			cout<<" ";
		}
		p=pow(11,i-1);
		while(p!=0)
		{
		   cout<<p%10<<" ";
		   p/=10;
	    }
	    cout<<endl;
	}
	getch();
	return 0;
}

