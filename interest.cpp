#include<iostream>
#include <cmath>
using namespace std;

class compound
{
private:
	float P,N,I,R;
	
public:
	float F;
	float i;
	void GetInput()
	{
	cout<<endl<<"Enter Principal Amount:";
	cin>>P;
	cout<<endl<<"Enter Rate Of Interest:";
	cin>>R;
	
	cout<<endl<<"Enter Year :";
	cin>>N;	   
	}
	
	
	void Calculate()
	{
	i=R/100;
	F=P*pow(1+i,N);
	}
	
	void display()
	{
	cout<<endl;
	cout<<endl;
	cout<<"Principal Amount  :"<<P<<endl;
	cout<<"Rate Of Interest  :"<<R<<endl;
	cout<<"Year		  :"<<N<<endl;
	cout<<"Interest	  :"<<F<<endl;
	}
	

};

int main()
{
compound amount;

amount.GetInput();
amount.Calculate();
amount.display();

}

