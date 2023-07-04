#include<iostream>
using namespace std;
int main()
{
	int password;
	
	do
	{
		cin>>password;
	}while(password<999999);
/*	cout<<"enter the password:"<<endl;
	cin>>password;
	
	while(password<999999)
	{
		cout<<"the password does not meet the required condition, please enter the password";
		cin>>password;
	}
	cout<<"the user has now entered the correct  paasword";*/
	return 0;
}
