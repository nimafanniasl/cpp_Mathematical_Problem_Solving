/*nimafanniasl - smartnima.com*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void run1();
void run2();
void run11();

int m1,m3;
char m2;
double sum;
char cont;

int main()
{
	run1();
	run2();
	cout<<"Answer: "<<sum;
while(1)
{

   cout<<endl<<"continue?(y or n): ";
   cin>>cont;
   if(cont=='y')
   {
     run11();
     run2();
     cout<<"Answer: "<<sum;
   }
   else if (cont=='n')
   {
   	cout<<"goodbye!"<<endl<<"smartnima.com";
   	break;
   }
   else
   {
   	cout<<"error";
   }
}

	
	
}

void run1()
{
	cout<<"Program guide:"<<endl<<"You can choose from the following actions:"<<endl<<"+"<<endl<<"-"<<endl<<"/"<<endl<<"*"<<endl<<"^"<<endl<<endl<<"Enter your issue: ";
	cin>>m1>>m2>>m3;
}

void run11()
{
	cout<<"Enter your issue: ";
	cin>>m1>>m2>>m3;
}
void run2()
{
	switch(m2)
	{
		case '+' : sum=m1+m3; break;
		case '-' : sum=m1-m3; break;
		case '/' : sum=m1/m3; break;
		case '*' : sum=m1*m3; break;
		case '^' : sum=pow(m1,m3); break;
	}
}
