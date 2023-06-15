using namespace std;
#include<iostream>
#include<vector>
vector<int> selectionsort(vector<int> a)
{
	int i,j,temp,min;
	for(i=0;i<a.size()-1;i++)
	{
		min=i;
		for(j=i+1;j<a.size();j++)
		{
			if(a[min]>a[j])
			{
				min=j;	
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	return a;
}
int main()
{
	int n,i,temp;
	vector<int>arr,sorted;
	cout<<"enter the number of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter element "<<i+1<<" :";
		cin>>temp;
		arr.push_back(temp);
	}
	sorted=selectionsort(arr);
	for(i=0;i<sorted.size();i++)
	cout<<sorted[i]<<" ";
}
