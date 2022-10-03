#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
   /*   hollow rectangle
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if( j==0 || j==(m-1) || i==0 || i==(n-1))
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }*/

    // hollow triangle
    /*for(int i=0;i<n;i++)
    {
        for(int j=m;j>=m-i ;j--)
        {
            if(j==m||j==m-i||i==n-1)
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
*/
    // hollow triangle reverse
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-i ;j++)
        {
            if(j==0||j==m-i-1||i==0||i==n-1)
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}