using namespace std;
#include<iostream>
int main()
{
	int num;
	cout<<"enter the number under 3999 :";
	cin>>num;
	int div;
	int value[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
	string charc[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
	int i=12;
	while(num>0)
	{
		div=num/value[i];
		num=num%value[i];
		while(div--)
		{
			cout<<charc[i];
		}
		i--;
	}
}
