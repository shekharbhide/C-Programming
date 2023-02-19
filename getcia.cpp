#include<iostream>
using namespace std;
int main()
	{	   
		cout<<"--Wel-come in OOP CIA 3--"<<endl;
		cout<<"*Wel-come in program of get() fun ** "<<endl;
		char t;
		cout<<"enter a string \n";
		cin.get(t);
		while(t!='\n')
	        {
	     		cout.put(t);
	     		cin.get(t);
		    }
		return 0;
	}
