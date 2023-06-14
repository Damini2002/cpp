using namespace std;
#include<iostream>
#include<vector>
void linearsearch(vector<int> arr,int ser )
{
	int i,c=0,ind;
	for(i=0;i<arr.size();i++)
	{
		if(arr[i]==ser)
		{
			c=1;
			ind=i+1;
			break;	
		}
	}
	if(c==1)
	cout<<"element found at index :"<<ind<<endl;
	else
	cout<<"element not found!!";
}
int main()
{
	vector<int> ele;
	int n,num;
	cout<<"enter the number of elements";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the element: "<<i+1<<endl;
		cin>>num;
		ele.push_back(num);
	}
	cout<<"enter the element to be searched: ";
	cin>>num;
	linearsearch(ele,num);
}
