using namespace std;
#include<iostream>
#include<vector>
int binarysearch(vector<int> arr,int ele)
{
	int a=0,b=arr.size(),mid;
	while(a<=b)
	{
		mid=(a+b)/2;
		if(ele==arr[mid])
		return mid;
		else if(ele>arr[mid])
			a=mid+1;			
		else if(ele<arr[mid])
			b=mid-1;
	}
	return -1;
}
int main()
{
	int n,i,temp;
	vector<int> searcharray;
	cout<<"enter the number of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter element "<<i+1<<": ";
		cin>>temp;
		searcharray.push_back(temp);
	}
	cout<<"enter the element to be searched: ";
	cin>>temp;
	int res=binarysearch(searcharray,temp);
	if(res==-1)
	cout<<"element not found";
	else
	cout<<"element found at position: "<<res+1;
}
