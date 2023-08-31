#include<iostream>
using namespace std;

int  celsiusTofahrenheit(float  celsius)
{
	cout<< (( celsius * 9 / 5) + 32);
}
int  fahrenheitTocelsius(float  fahrenheit)
{
	cout<< (( fahrenheit - 32) * 5 / 9);
}
int main()
{
	int choice;
	cout<<"Enter 0 for celsius convert to fahrenheit \nEnter 1 for fahrenheit convert to celsius"<<endl;
	cin>>choice;
	float digree;
	cout<<"Enter a digree to convert"<<endl;
	cin>>digree;
	if(choice==0){
		 celsiusTofahrenheit(digree);
	}
	else
	{
		 fahrenheitTocelsius(digree);
	}
	return 0;
}
