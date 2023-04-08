#include<iostream>
using namespace std;

int main()
{
	int num1,num2,div,rem;
	cout<<"This program will give divider and reminder"<<endl;
	cout<<"Enter dividend: ";
	cin>>num1;
	cout<<"Enter divider: ";
	cin>>num2;
	
	//<....... appling formila ........>
	div=num1/num2;
	rem=num1%num2;
	
	cout<<"Quotient: "<<div<<endl;
	cout<<"Remainder: "<<rem<<endl;
	
	return 0;
}
