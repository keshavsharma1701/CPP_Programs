//        Header Files

#include<iostream>
#include<conio.h>
using namespace std;

//       Function of various patterns

void square(int a)
{
     for(int i=0;i<a;i++)
     {
        for(int j=0;j<a;j++)
        {
            cout<<"*";
        }
        cout<<endl;
     }
}

void rectangle(int a, int b)
{
    for(int i=0; i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void hollowsquare(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(i==0 || j==0 || i==a-1 || j==a-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void hollowrectangle(int a, int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if( j==0 || j==(b-1) || i==0 || i==(a-1))
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}

void triangle(int a)
{
    int j;
    for(int i=0;i<a;i++)
    {
        for(j=i;j<a-1;j++)
        {
            cout<<" ";
        }
        for(j=(2*i);j>=0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void reversetriangle(int a)
{
    int j;
    for(int i=a-1;i>=0;i--)
    {
        for(j=i;j<a-1;j++)
        {
            cout<<" ";
        }
        for(j=(2*i);j>=0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void leftsidetriangle(int a, int b)
{
}

void rightsidetriangle(int a, int b)
{
}

void righttriangle(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void righttrianglereverse(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void righttrianglemirror(int a, int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=1;j<b;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void righttrianglemirrorreverse(int a, int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j<b;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void hollowtriangle(int a, int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=b;j>=b-i ;j--)
        {
            if(j==b||j==b-i||i==a-1)
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void hollowreversetriangle(int a, int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b-i ;j++)
        {
            if(j==0||j==b-i-1||i==0||i==a-1)
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void hollowleftsidetriangle(int a, int b)
{
}

void hollowrightsidetriangle(int a, int b)
{
}

void hollowrighttriangle(int a, int b)
{
}

void hollowrighttrianglereverse(int a, int b)
{
}

void hollowrighttrianglemirror(int a, int b)
{
}

void hollowrighttrianglemirrorreverse(int a, int b)
{
}

void butterfly(int a, int b)
{
}

void hollowbutterfly(int a, int b)
{
}


//       Main Function
//    Here we call all the functions of pattern according to user choice


int main()
{
    int n,x,y;
    char ch;
    cout<<"\n\n\n\t\tWELCOME\n\n\n";
    cout<<"\tPattern printing program"<<endl;
    getch();
    system("cls");
    do
    {
        cout<<"You have following choices"<<endl<<"enter the respected no of the pattern you want to print\n\n"<<endl;
        cout<<"1.  Square"<<endl;   
        cout<<"2.  Rectangle"<<endl;
        cout<<"3.  Hollow Square"<<endl;
        cout<<"4.  Hollow Rectangle"<<endl;
        cout<<"5.  Triangle"<<endl;
        cout<<"6.  Inverted Triangle"<<endl;
        cout<<"7.  Left side Triangle"<<endl;
        cout<<"8.  Right side Triangle"<<endl;
        cout<<"9.  Right Angled Triangle"<<endl;
        cout<<"10. Inverted Right Angled Triangle"<<endl;
        cout<<"11. Mirror Right Angled Triangle"<<endl;
        cout<<"12. Inverted Mirror Right Angled Triangle"<<endl;
        cout<<"13. Hollow Triangle"<<endl;
        cout<<"14. Hollow Inverted Triangle"<<endl;
        cout<<"15. Hollow Left side Triangle"<<endl;
        cout<<"16. Hollow Right side Triangle"<<endl;
        cout<<"17. Hollow Right Angled Triangle"<<endl;
        cout<<"18. Hollow Inverted Right Angled Triangle"<<endl;
        cout<<"19. Hollow Mirror Right Angled Triangle"<<endl;
        cout<<"20. Hollow Inverted Mirror Right Angled Triangle"<<endl;
        cout<<"21. Butterfly"<<endl;
        cout<<"22. Hollow Butterfly"<<endl;
        cin>>n;
        system("cls");
        switch(n)
        {
            case 1  : cout<<"Enter Width of Square"<<endl;
                      cin>>x;
                      square(x);
                      break;
            case 2  : cout<<"Enter Height and Width of Rectangle";
                      cin>>x>>y;
                      rectangle(x,y);
                      break;
            case 3  : cout<<"Enter Width of Hollow Square";
                      cin>>x;
                      hollowsquare(x);
                      break;
            case 4  : cout<<"Enter Height and Width of Hollow Rectangle";
                      cin>>x>>y;
                      hollowrectangle(x,y);
                      break;
            case 5  : cout<<"Enter Height of Triangle";
                      cin>>x;
                      triangle(x);
                      break;
            case 6  : cout<<"Enter Height of Inverted Triangle";
                      cin>>x;
                      reversetriangle(x);
                      break;
            case 7  : cout<<"Enter Height and Width of Left Side Triangle";
                      cin>>x>>y;
                      leftsidetriangle(x,y);
                      break;
            case 8  : cout<<"Enter Height and Width of Right Side Triangle";
                      cin>>x>>y;
                      rightsidetriangle(x,y);
                      break;
            case 9  : cout<<"Enter Height of Right Angled Triangle";
                      cin>>x;
                      righttriangle(x);
                      break;
            case 10 : cout<<"Enter Height of Inverted Right Angled Triangle";
                      cin>>x;
                      righttrianglereverse(x);
                      break;
            case 11 : cout<<"Enter Height and Width of Mirror Right Angled Triangle";
                      cin>>x>>y;
                      righttrianglemirror(x,y);
                      break;
            case 12 : cout<<"Enter Height and Width of Mirror Inverted Right Angled Triangle";
                      cin>>x>>y;
                      righttrianglemirrorreverse(x,y);
                      break;
            case 13 : cout<<"Enter Height of Hollow Triangle";
                      cin>>x;
                      triangle(x);
                      break;
            case 14 : cout<<"Enter Height and Width of Hollow Inverted Triangle";
                      cin>>x;
                      reversetriangle(x);
                      break;
            case 15 : cout<<"Enter Height and Width of Hollow Left Side Triangle";
                      cin>>x>>y;
                      leftsidetriangle(x,y);
                      break;
            case 16 : cout<<"Enter Height and Width of Hollow Right Side Triangle";
                      cin>>x>>y;
                      rightsidetriangle(x,y);
                      break;
            case 17 : cout<<"Enter Height of Hollow Right Angled Triangle";
                      cin>>x;
                      righttriangle(x);
                      break;
            case 18 : cout<<"Enter Height of Hollow Inverted Right Angled Triangle";
                      cin>>x;
                      righttrianglereverse(x);
                      break;
            case 19 : cout<<"Enter Height and Width of Hollow Mirror Right Angled Triangle";
                      cin>>x>>y;
                      righttrianglemirror(x,y);
                      break;
            case 20 : cout<<"Enter Height and Width of Hollow Mirror Inverted Right Angled Triangle";
                      cin>>x>>y;
                      righttrianglemirrorreverse(x,y);
                      break;
            case 21 : cout<<"Enter Height and Width of Butterfly";
                      cin>>x>>y;
                      butterfly(x,y);
                      break;
            case 22 : cout<<"Enter Height and Width of Hollow Butterfly";
                      cin>>x>>y;
                      hollowbutterfly(x,y);
                      break;
            default : cout<<"You have entered wrong no"<<endl;
                      break;
        }
        getch();
        system("cls");
        cout<<"\n\n\t\tDo you want to Continue\n"<<"Press (Y/y) for continue"<<endl;
        cin>>ch;
        system("cls");
    }while(ch=='Y'||ch=='y');
    cout<<"\n Thank You "<<endl;
    return 0;
}