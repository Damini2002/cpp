using namespace std;
#include<iostream>
#include<vector>
int main()
{
	int arr[5]={1,3,2,6,7};
	int sum=13;
	int i=0,j;
	vector<int> a;
	int *ptr1=&arr[i];
	int *ptr2=&arr[i];
	for(j=i+1;j<=5;j++)
	{
		if(*ptr2!=sum && *ptr2<sum)
		{
			*ptr2=*ptr2+arr[j];
		//	cout<<*ptr2<<" ";
		}
		else if(*ptr2>sum)
		{
			i++;
			*ptr1=arr[i];
			*ptr2=arr[i];
			cout<<*ptr1<<" "<<*ptr2;
			j=i;
			//cout<<j;
		}
		else if(*ptr2==sum)
		{
			a.push_back(i);
			a.push_back(j-1);
			j=5;
		}
		else if(*ptr2!=sum)
			cout<<"no subarray present";
	}
	for(j=0;j<a.size();j++)
	cout<<"\n"<<a[j]<<" ";
	
}
