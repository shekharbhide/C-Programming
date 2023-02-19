/*Title- C++ program for multiple catch
Group 7
--------------Aimers---------------
--------Welcome to OOP presentation-------*/

#include <iostream>
using namespace std;

int main()
{
    int choice;

    try
    {
        cout<<"Enter any choice: ";
        cin>>choice;


        if(choice == 1)
        {
            throw (100);   //throw integer value
        }
        else if(choice == 2)
        {
            throw ('x');   //throw character value
        }
        else if(choice == 3)
        {
            throw (1.23);  //throw double value
        }
        
       
    }
    catch(int a)
    {
        cout<<"Integer Exception Caught, value is: "<<a<<endl;
    }
    catch(char b)
    {
        cout<<"Character Exception Caught, value is: "<<b<<endl;
    }
    catch(double c)
    {
        cout<<"Double Exception Caught, value is: "<<c<<endl;
    }

    return 0;
}
