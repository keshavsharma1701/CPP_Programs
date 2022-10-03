#include <iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<string.h>
using namespace std;
int glob=0; //global variables
int global=10;
class d_booking //class  for domestic booking
{
protected:
int pnr;
char f_d[10],toja[7],tojd[7]; //protected members
char doj[12];
int choice,src,dest;
public://public member functions
void d_pnr()
    {
glob++; // increment variable
pnr=glob;
    }
int j_detail() // function declaration and definition for domestic journey
    {
cout<< "\n\tEnterDateOfJourney(DD/MM/YYYY). Please enter a valid date.\n\t";
fflush(stdin);
gets ( doj );
cout<< "\n\t***************************************************";
cout<< "\n\t.Mumbai(1)   .Kolkata(2)   .Delhi(3)   .Banglore(4)";
cout<< "\n\t***************************************************";
cout<< "\n\tEnter Source : ";
cin>>src;
cout<< "\n\tEnter destination : ";
cin>>dest;
if((src==1 &&dest==2) || (src==2 &&dest==1))//condition
        {
cout<< "\n\t \t \tFlights Found\n\n";
cout<< "\t******************************************************\n";
cout<< "\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Air India(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
cout<< "\t.Indigo(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
cout<< "\t.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
cout<< "\t******************************************************\n";
        }
else if((src==1 &&dest==3) || (src==3 &&dest==1))//condition
        {
cout<< "\n\t \t \tFlights Found\n\n";
cout<< "\t******************************************************\n";
cout<< "\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Air India(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
cout<< "\t.Indigo(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
cout<< "\t.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
cout<< "\t******************************************************\n";
        }
else if((src==1 &&dest==4) || (src==4 &&dest==1))//condition
        {
cout<< "\n\t \t \tFlights Found\n\n";
cout<< "\t******************************************************\n";
cout<< "\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Air India(1)\t08:00\t\t11:05\t\tRs.4000\t\tRefundable\n";
cout<< "\t.Indigo(2)\t14:00\t\t17:05\t\tRs.4250\t\tRefundable\n";
cout<< "\t.Go Air(3)\t19:00\t\t22:05\t\tRs.6100\t\tRefundable\n";
cout<< "\t******************************************************\n";
        }
else if((src==2 &&dest==3) || (src==3 &&dest==2))//condition
        {
cout<< "\n\t \t \tFlights Found\n\n";
cout<< "\t******************************************************\n";
cout<< "\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Air India(1)\t08:00\t\t11:05\t\tRs.5400\t\tRefundable\n";
cout<< "\t.Indigo(2)\t14:00\t\t17:05\t\tRs.2500\t\tRefundable\n";
cout<< "\t.Go Air(3)\t19:00\t\t22:05\t\tRs.2890\t\tRefundable\n";
cout<< "\t******************************************************\n";
        }
else if((src==2 &&dest==4) || (src==4 &&dest==2))//condition
        {
cout<< "\n\t \t \tFlights Found\n\n";
cout<< "\t******************************************************\n";
cout<< "\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Air India(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
cout<< "\t.Indigo(2)\t14:00\t\t17:05\t\tRs.4500\t\tRefundable\n";
cout<< "\t.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
cout<< "\t******************************************************\n";
        }
else if((src==3 &&dest==4) || (src==4 &&dest==3))//condition
         {
cout<< "\n\t \t \tFlights Found\n\n";
cout<< "\t******************************************************\n";
cout<< "\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Air India(1)\t08:00\t\t11:05\t\tRs.5800\t\tRefundable\n";
cout<< "\t.Indigo(2)\t14:00\t\t17:05\t\tRs.5508\t\tRefundable\n";
cout<< "\t.Go Air(3)\t19:00\t\t22:05\t\tRs.6050\t\tRefundable\n";
cout<< "\t******************************************************\n";
        }
else if(src==dest)//condition
        {
cout<< "\n\tSource and destination can't be same.\nTry again\n\n\n";
return j_detail();
        }
else
        {
cout<<"\n\tWrong input entered\nTry again\n\n\n";
return j_detail();
        }
    }
int select_flight() //function declaration and definition for selecting flight
    {   
	cout<< "\n\tEnter your choice : ";
cin>> choice;
system("CLS");
switch(choice) // switch case
        {
case 1://condition
cout<< "\n\t*********************************";
cout<< "\n\t*********************************";
cout<< "\n\t** Flight selected : Air India **";
cout<< "\n\t** Departure Time : 08:00      **";
cout<< "\n\t** Arrival Time : 11:05        **";
cout<< "\n\t*********************************";
cout<< "\n\t*********************************";
strcpy(f_d,"Air India");//copy to string
strcpy(tojd,"8:00"); //copy to string
strcpy(toja,"11:05");// copy to string
break;
case 2://condition
cout<< "\n\t******************************";
cout<< "\n\t******************************";
cout<< "\n\t** Flight selected : Indigo **";
cout<< "\n\t** Departure Time : 14:00   **";
cout<< "\n\t** Arrival Time : 17:05     **";
cout<< "\n\t******************************";
cout<< "\n\t******************************";
strcpy(f_d,"Indigo");//copy to string
strcpy(tojd,"14:00");//copy to string
strcpy(toja,"17:05");//copy to string
break;
case 3://condition
cout<< "\n\t******************************";
cout<< "\n\t******************************";
cout<< "\n\t** Flight selected : Go Air **";
cout<< "\n\t** Departure Time : 19:00   **"; 
cout<< "\n\t** Arrival Time : 22:05     **";
cout<< "\n\t******************************";
cout<< "\n\t******************************";
strcpy(f_d,"Go Air");//copy to string
strcpy(tojd,"19:00");//copy to string
strcpy(toja,"22:05");//copy to string
break;
default://condition
cout<< "\n\tWrong input entered.\nTry again\n";
return select_flight();
        }
getch();
    }
};
class i_booking//class for international booking
{
protected://protected members
int pnri;
char f_i[10],tojai[7],tojdi[7];
long int doji;
int srci,desti,choicei;
public://public member functions
void i_pnr()
    {
global++;//increment variable
pnri=global;
    }
    //brought to you by INDIAN AIRLINES
int j_detaili()// function declaration and definition for journey details
    {
cout<< "\n\tEnterDateOfJourney(DDMMYY). Please enter a valid date.\n\t";
cin>>doji;
cout<< "\n\t*****************************************************************";
cout<< "\n\t.London(1)  .Dubai(2)  .Abu Dhabi(3)  .Singapore(4)   .NewYork(5)";
cout<< "\n\t*****************************************************************";
cout<< "\n\n\tEnter Source : ";
cin>>srci;
cout<< "\n\tEnter destination : ";
cin>>desti;
cout<< "\n\t \t \tFlights Found";
if((srci==1 &&desti==3) || (srci==3 &&desti==1))//condition
        {
	cout<< "\n\t*******************************************************";
cout<< "\n\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Vistara(1)\t10:00\t\t14:05\t\tRs.25000\tRefundable\n";
cout<< "\t.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21500\tRefundable\n";
cout<< "\t.Emirates(3)\t18:00\t\t22:05\t\tRs.24000\tRefundable\n";
cout<< "\n\t*******************************************************";
        }
else if((srci==1 &&desti==4) || (srci==4 &&desti==1))//condition
        {
	cout<< "\n\t*******************************************************";
cout<< "\n\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Vistara(1)\t10:00\t\t14:05\t\tRs.25500\tRefundable\n";
cout<< "\t.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21300\tRefundable\n";
cout<< "\t.Emirates(3)\t18:00\t\t22:05\t\tRs.24650\t\tRefundable\n";
cout<< "\n\t*******************************************************";
        }
else if((srci==1 &&desti==5) || (srci==5 || desti==1))//condition
        {
	cout<< "\n\t*******************************************************";
cout<< "\n\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Vistara(1)\t10:00\t\t14:05\t\tRs.52500\tRefundable\n";
cout<< "\t.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.59420\tRefundable\n";
cout<< "\t.Emirates(3)\t18:00\t\t22:05\t\tRs.64892\tRefundable\n";
cout<< "\n\t*******************************************************";
        }
else if((srci==2 &&desti==3) || (srci==3 &&desti==2))//condition
        {
	cout<< "\n\t*******************************************************";
cout<< "\n\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Vistara(1)\t10:00\t\t14:05\t\tRs.17800\tRefundable\n";
cout<< "\t.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.14900\tRefundable\n";
cout<< "\t.Emirates(3)\t18:00\t\t22:05\t\tRs.18700\tRefundable\n";
cout<< "\n\t*******************************************************";
        }
else if((srci==2 &&desti==4) || (srci==4 &&desti==2))//condition
        {
	cout<< "\n\t*******************************************************";
cout<< "\n\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Vistara(1)\t10:00\t\t14:05\t\tRs.32000\tRefundable\n";
cout<< "\t.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.38500\tRefundable\n";
cout<< "\t.Emirates(3)\t18:00\t\t22:05\t\tRs41259\tRefundable\n";      
cout<< "\n\t*******************************************************";
	    }
else if(srci==2 &&desti==5 || (srci==5 &&desti==2))//condition
        {
	cout<< "\n\t*******************************************************";
cout<< "\n\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
cout<< "\t.Vistara(1)\t10:00\t\t14:05\t\tRs.82500\tRefundable\n";
cout<< "\t.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.87550\tRefundable\n";
cout<< "\t.Emirates(3)\t18:00\t\t22:05\t\tRs81478\tRefundable\n";
cout<< "\n\t*******************************************************";
        }
else if(srci==desti)//condition
        {
cout<< "\n\tWrong input entered.\nTry again\n\n\n";
return j_detaili();
        }
else//condition
        {
cout<< "\n\tWrong input entered.\nTry again\n\n\n";
return j_detaili();
        }
    }
int select_flighti()//function declaration and definition for selecting flight
    {
cout<< "\n\tEnter your choice : ";
cin>>choicei;
system("CLS");
switch(choicei)//switch case
        {
case 1://condition
cout<< "\n\t*******************************";
cout<< "\n\t*******************************";
cout<< "\n\t** Flight selected : Vistara **";
cout<< "\n\t** Departure Time : 10:00    **";
cout<< "\n\t** Arrival Time : 14:05      **";
cout<< "\n\t*******************************";
cout<< "\n\t*******************************";
strcpy(f_i,"Vistara");//copy to string
strcpy(tojdi,"10:00");//copy to string
strcpy(tojai,"14:05");//copy to string
break;
case 2://condition
cout<< "\n\t*********************************";
cout<< "\n\t*********************************";
cout<< "\n\t** Flight selected : Fly Dubai **";
cout<< "\n\t** Departure Time: 14:00       **";
cout<< "\n\t** Arrival Time: 18:05         **";
cout<< "\n\t*********************************";
cout<< "\n\t*********************************";
strcpy(f_i,"Fly Dubai");//copy to string
strcpy(tojdi,"14:00");//copy to string
strcpy(tojai,"18:05");//copy to string
break;
case 3://condition
cout<< "\n\t*********************************";
cout<< "\n\t*********************************";
cout<< "\n\t** Flight selected : Emirates  **";
cout<< "\n\t** Departure Time : 18:00      **";
cout<< "\n\t** Arrival Time: 22:05         **";
cout<< "\n\t*********************************";
cout<< "\n\t*********************************";
strcpy(f_i,"Emirates");//copy to string
strcpy(tojdi,"18:00");//copy to string
strcpy(tojai,"22:05");//copy to string
break;
default://condition
cout<< "\n\tWrong input entered";
return select_flighti();
        }
getch();
    }
};
class passenger: public d_booking,public i_booking //class passenger publicly inherited from class d_booking and i_booking
{
protected://protected members
char f_name[20],l_name[20],email[50];
int age,gender;
char c_no[12];
public://public member functions
void p_detail(int x)//function declaration and definition
    {   
	if(x==1)//if else for domestic and international booking selection
        {
		j_detail();//function call
select_flight();//function call
        }
else
{  j_detaili();//function call
select_flighti();//function call
        }
system("CLS");
cout<< "\n\n\n\tEnter passenger details : ";
cout<< "\n\tFirst Name : ";
cin>>f_name;
cout<< "\tLast Name : ";
cin>>l_name;
    }
int gender_check()//to check gender input as valid
    {
cout<< "\n\tGender:\n\tMale-press:1::\n\tFemale-press:2::\n\t";
cin>> gender;
if(gender>2)//condition
        {
cout<< "\n\n\tWrong input entered.\nTry again\n\n";
return gender_check();//function call
        }
    }
void more_details()//to take more details of the passenger
    {
cout<< "\n\tAge : ";
cin>> age;
cout<< "\n\tEmail Id : ";
cin>> email;
cout<< "\n\tContact no. : ";
fflush(stdin);
gets(c_no );
system("CLS");
cout<< "\n\n\tDetails Entered:\n";
cout<< "\n\t****************************************************************************************************";
cout<< "\n\t***** Name : " <<f_name<< " " <<l_name;
cout<< "\n\t***** Gender : ";      //displaying details
if(gender==1)
cout<<"Male";
else
cout<<"Female";
cout<< "\n\t***** Age : " << age;
cout<< "\n\t***** Email id : " << email;
cout<< "\n\t***** Contact No. : " <<c_no;
cout<< "\n\t****************************************************************************************************";
    }
int getpnr()//function to get pnr for domestic booking
    {
return pnr;
    }

int getpnri()//function to get pnr for international booking
    {
return pnri;
    }

void disp()//function to display details for domestic booking
    {
	system("CLS");
	cout<<"\n\tYour ticket : \n";
	cout<<"\n\n\n\t****************************************************************************************************";
cout<<"\n\t***** PNR : " <<pnr;
cout<<"\n\t***** Flight : " <<f_d;
cout<<"\n\t***** Name : " <<f_name<< " " <<l_name;
cout<<"\n\t***** DOJ : " <<doj;
cout<<"\n\t***** Departure Time : " <<tojd;
cout<<"\n\t***** Arrival Time : " <<toja;
cout<<"\n\t****************************************************************************************************";
    }

void dispi()//function to display details for international booking
    {
	system("CLS");
	cout<<"\n\tYour ticket : \n";
	cout<<"\n\n\n\t****************************************************************************************************";
cout<<"\n\t***** PNR : " <<pnri;
cout<<"\n\t***** Flight : " <<f_i;
cout<<"\n\t***** Name : " <<f_name<< " " <<l_name;
cout<<"\n\t***** DOJ : " <<doji;
cout<<"\n\t***** Departure Time : " <<tojdi;
cout<<"\n\t***** Arrival Time : " <<tojai;
cout<<"\n\t****************************************************************************************************";
    }
};
class payment//class for payment
{
protected://protected members
long int choice1,bank,card,cvv,user_id;
char password[10],date[12];
public://public members functions
void pay_detail()//function declaration and definition for payment method
    {
	system("CLS");
		cout<< "\n\t********************************************************";
		cout<< "\n\t********************************************************";    
	cout<< "\n\t** How would you like to pay?                         **";
cout<< "\n\t** .Debit Card(1)   .Credit Card(2)   .Net Banking(3) **";
cout<< "\n\t********************************************************";
cout<< "\n\t********************************************************";
cout<< "\n\n\tEnter your choice : ";
cin>> choice1;
switch(choice1)//switch case
        {
case 1://condition
cout<< "\n\tEnter card no. : ";
cin>> card;
fflush(stdin);
cout<< "\n\tEnter expiry date (DD/MM/YYYY) : ";
gets( date );
cout<< "\n\tEnter CVV no. : ";
cin>>cvv;
cout<< "\n\t****************************";
cout<< "\n\t** Transaction Successful **";
cout<< "\n\t****************************";
break;
case 2://condition
cout<< "\n\tEnter card no. : ";
cin>> card;
fflush(stdin);
cout<< "\n\tEnter expiry date (DD/MM/YYYY) : ";
gets( date );
fflush(stdin);
cout<< "\n\tEnter password : ";
gets( password );
cout<< "\n\t****************************";
cout<< "\n\t** Transaction Successful **";
cout<< "\n\t****************************";
break;
case 3://condition
cout<< "\n\t*******************************************************************************";
cout<< "\n\tBanks Available : .SBI(1) .HDFC Bank(2) .ICICI Bank(3) .Axis Bank(4) .Others(5)";
cout<< "\n\t*******************************************************************************";
cout<< "\n\tSelect your bank : ";
cin>> bank;
cout<< "\n\t**************************************************************";
cout<< "\n\tYou have selected : ";
if(bank==1)
cout<<"STATE BANK OF INDIA";
else if(bank==2)
cout<<"HDFC BANK";
else if(bank==3)
cout<<"ICICI BANK";
else if(bank==4)
cout<<"AXIS BANK";
else if(bank==5)
cout<<"OTHER BANKS";
else
            {
cout<<"\n\tWrong operation entered";
return pay_detail();
            }
cout<< "\n\t**************************************************************";
cout<< "\n\tEnter user id : ";
cin>>user_id;
cout<< "\n\tEnter password:";
fflush(stdin);
gets( password );
cout<< "\n\t****************************";
cout<< "\n\t** Transaction Successful **";
cout<< "\n\t****************************";
break;
default://condition
cout<< "\n\tWrong input entered.\nTry again\n\n";
return pay_detail();
        }
    }

};
void createfile(passenger p)//file creation for domestic booking
{  
ofstream fin("domestic.txt",ios::binary|ios::app);
fin.write((char*)&p,sizeof(p));//writing to file
fin.close();//closing file
}
void cancelticket(int x)//function to cancel ticket
{  
passenger p;
int f=0;
ifstream fout("domestic.txt",ios::binary|ios::app);//for reading file
ofstream fin("domestic1.txt",ios::binary|ios::app);//for writing to a new file
fout.read((char *)&p,sizeof(p));//reading file
while(fout)
   {
if(p.getpnr()!=x)//checking pnr
fin.write((char *)&p,sizeof(p));//writing to file
else
     {
p.disp();//display details
cout<<"\n\n\tYour Above ticket is being canceled:\n\t Amount refunded: Rs 1000\n";
f++;//incrementing f if pnr found
     }
fout.read((char *)&p,sizeof(p));//reading another record from file
   }
if(f==0)//if f==0,pnr not found
cout<<"\n\tTicket not found\n";
fout.close();//closing file
fin.close();//closing file
remove("domestic.txt");//deleting old file
rename("domestic1.txt","domestic.txt");//renaming new file
}
void checkticket(int x)//function to check pnr or ticket
{  passenger p;
int f=0;
ifstream fout("domestic.txt",ios::binary);//opening file
fout.read((char *)&p,sizeof(p));//reading file
while(fout)
   {
if(p.getpnr()==x)//checking pnr
     {
	p.disp();//display details
f++;//incrementing f if onr found
break;
     }
fout.read((char *)&p,sizeof(p));//reading another record from the same file
   }
fout.close();//closing file
if(f==0)//if f==0, pnr not found
cout<<"\n\tTicket not found\n";
}
void createfilei(passenger p)//opening a file for international booking
{  ofstream fin("international.txt",ios::binary|ios::app);
fin.write((char*)&p,sizeof(p));//writing to file
fin.close();//closing file
}
void cancelticketi(int x)//function to cancel ticket
{  passenger p;
int f=0;
ifstream fout("international.txt",ios::binary|ios::app);//opening file
ofstream fin("international1.txt",ios::binary|ios::app);//writing to a new file
fout.read((char *)&p,sizeof(p));//reading old file
while(fout)
   {
if(p.getpnri()!=x)//checking pnr
fin.write((char *)&p,sizeof(p));//writing to new file;
else
     {
p.dispi();//display details
cout<<"\n\tYour Above ticket is being canceled:\n\tAmount refunded: Rs 1000\n";
f++;//incrementing f if pnr found
     }
fout.read((char *)&p,sizeof(p));//reading another record from old file
   }
if(f==0)//if f==0,pnr not found
cout<<"\n\tTicket not found\n";
fout.close();//closing file
fin.close();//closing file
remove("international.txt");//deleting old file
rename("international1.txt","international.txt");//renaming new file
}
void checkticketi(int x)//function to check pnr or ticket
{  
passenger p;
int f=0;
ifstream fout("international.txt",ios::binary);//opening file
fout.read((char *)&p,sizeof(p));//reading file
while(fout)
   {
if(p.getpnri()==x)//checking pnr
     {
	p.dispi();//display details
f++;//incrementing f if pnr found
break;
     }
fout.read((char *)&p,sizeof(p));//reading another record from the file
   }
fout.close();//closing file
if(f==0)//if f==0, pnr not found
cout<<"\n\tTicket not found\n";
}
int main()//main function
{
class d_booking d1;//object for class d_booking
class i_booking i1;//object for class i_booking
class passenger p1;//object for class passenger
class payment p2;//object for class payment
int ch,ch1,n;//integer variables
char input;//character variables
do //do while loop
    {
system("CLS");
cout<< "\n\n\t\tWelcome To Flight Reservation System";
cout<< "\n\t   <><><><><><><><><><><><><><><><><><><><><><><>";
cout<< "\n\t   Book your Flight tickets at affordable prices!";
cout<< "\n\t   <><><><><><><><><><><><><><><><><><><><><><><>";
cout<< "\n\n\t\t\t.Book Flight(1) \n\t\t\t.Cancel Fight(2) \n\t\t\t.Check Ticket(3) \n\t\t\t.Exit(4)";
cout<< "\n\n\t\t Please enter your choice:";
cin>>ch;
switch(ch)//switch case
      {
case 1://condition
system("CLS");
cout<< "\n\n\t.Domestic Fights(1) \n\t.International Flights(2)";
cout<< "\n\n\tPlease enter your option : ";
cin>> ch1;
switch(ch1)//inner switch case
              {
case 1://for booking domestic ticket
                        p1.d_pnr();
system("CLS");
                        p1.p_detail(1);//function calls
                        p1.gender_check();
                        p1.more_details();
getch();
                        p2.pay_detail();
getch();
p1.disp();
createfile(p1);//call to create file
break;
case 2: //for booking international ticket
system("CLS");
                           p1.p_detail(2);//function calls
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
getch();
                           p2.pay_detail();
getch();
p1.dispi();
createfilei(p1);//call to create file
break;
default://wrong input
cout<< "\n\tWrong input entered\nTry again\n\n\n";
return main();
              }
break;
case 2:
              //for canceling ticket
system("CLS");
cout<< "\n\t.Domestic Fights(1) \n\t.International Flights(2)";
cout<< "\n\tPlease enter your option : ";
cin>> ch1;
if(ch1==1)
                {
cout<< "\n\tPlease enter your PNR no. : ";
cin>>n;
cancelticket(n);//function call for domestic booking cancellation
                }
else if(ch1==2)
               {  
			cout<< "\n\tPlease enter your PNR no. : ";
cin>>n;
cancelticketi(n);//function call for international cancellation
               }
else
               {
cout<< "\n\tWrong input entered\nTry again\n\n\n";
return main();
               }
break;
case 3://for displaying booked ticket details
system("CLS");
cout<< "\n\t.Domestic Fights(1) \n\t.International Flights(2)";
cout<< "\n\tPlease enter your option : ";
cin>> ch1;
if(ch1==1)
                  {
				cout<< "\n\tPlease enter your PNR no. : ";
cin>>n;
checkticket(n);}//function call to display domestic ticket details
else if(ch1==2)
                  {  
				cout<< "\n\tPlease enter your PNR no. : ";
cin>>n;
checkticketi(n);//function call to display domestic ticket details
                  }
else
               {
cout<< "\n\tWrong input entered.\nTry again\n\n\n";
return main();
               }
break;
case 4:
system("CLS");
cout<<"\n\n\t\t\t\tBrought to you by INDIAN AIRLINES";  
return 0; 
default://for wrong input
cout<< "\n\tWrong input entered\nTry again.\n\n\n\n";
return main();
      }
cout<<"\n\n\n\tDo you wish to continue : (Y/N) : ";
cin>> input;
}while(input=='Y' || input=='y');//condition for do while loop
return 0;
}

