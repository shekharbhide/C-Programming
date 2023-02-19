/*Program to check whether a year is a leap year or not
Here we will discuss how to check whether a year is a leap year or not using the C++ programming language.

In a  year there are 365 days, but once every fourth year there are 366 days that year is called a leap year.

Leap year comes in every four year, how to know that the year is a leap year or not, there are two ways to know,

First is, All those years which are divided by 4 are leap years, except century years.
Second is,if a century year is divisible by 400 then the year is a leap year.
Leap year or not using c++
Algorithm:-
Take year input from  user.
The input is stored in an int type variable say year.
year is checked for being a leap year or not with the following condition 
             if( ((year % 4 == 0)&&(year % 100 != 0)) || (year % 400==0) )

      4. If the above condition is true then input is a leap year otherwise input is not a leap year.

leap year or not in cpp
C++ Code
//C++ Program
//Leap year or not

#include<iostream>
using namespace std;
//main program
int main()
{
    //initialising variables
    int year;
    cout<<"Enter year to check: ";

    //user input
    cin>>year;
    
    //checking for leap year
    if( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400==0) )
    {
        //input is a leap year
        cout<<year<<" is a leap year";
    }
    else
    {
        //input is not a leap year
        cout<<year<< " is not a leap year";
    }
    return 0;
}

*/

#include<stdio.h>
int main()
{
	int year;
	printf("Enter year to check which is Leap Year or Not:");
	scanf("%d",&year);
	
//	if( ( (year%4==0) && (year%100!=0) ) || (year%400==0) )
	if(year%400==0)
	{
		printf("\n%d is Leap year!!",year);
	}
	else if(year%100==0)
	{
		printf("\n%d is Not Leap Year!!!",year);
	}
	else(year%4==0)
	{
		printf("\n%d is Leap Year!!!");
	}
	return 0;
}
