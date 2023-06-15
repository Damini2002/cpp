using namespace std;
#include<iostream>
#include<vector>
vector<int> bubblesort(vector<int> a)
{
	int i,j,temp;
	for(i=0;i<a.size()-1;i++)
	{
		for(j=0;j<a.size()-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	return a;
}
int main()
{
	int n,i,temp;
	vector<int> arr,sorted;
	cout<<"enter the number of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter element "<<i+1<<" :";
		cin>>temp;
		arr.push_back(temp);
	}
	sorted=bubblesort(arr);
	for(i=0;i<sorted.size();i++)
	cout<<sorted[i]<<" ";
}
