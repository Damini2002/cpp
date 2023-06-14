using namespace std;
#include<iostream>
#include<vector>
vector <int> insertionsort(vector<int> arr)
{
	int i,temp;
	for(i=1;i<arr.size();i++)
	{
		while(arr[i-1]>arr[i] && i>0)
		{
			temp=arr[i-1];
			arr[i-1]=arr[i];
			arr[i]=temp;
			i--;
		}
	}
	return arr;
}
int main()
{
	vector<int> arr,sorted;
	int i,n,temp;
	cout<<"enter the length of the array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element "<<i+1<<" :";
		cin>>temp;
		arr.push_back(temp);
	}
	sorted=insertionsort(arr);
	cout<<"sorted array is :";
	for(i=0;i<sorted.size();i++)
	cout<<sorted[i]<<" ";	
}
