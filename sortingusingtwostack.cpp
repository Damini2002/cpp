using namespace std;
#include<iostream>
#include<vector>
int main()
{
	int i,n;
	vector<int> stk1;
	vector<int> stk2;
	cout<<"enter number of elements: ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter element "<<i+1<<" :";
		cin>>arr[i];
	}
	i=0;
	stk1.push_back(arr[i]);
	i++;
	while(i<n)
	{
		if(arr[i]>stk1.back())
		{
			if(stk2.empty()||arr[i]<stk2.back() )
			{
				stk1.push_back(arr[i]);
				i++;	
			}
			else if(arr[i]>stk2.back())
			{
				while(!stk2.empty() && arr[i]>stk2.back())
				{
					stk1.push_back(stk2.back());
					stk2.pop_back();
				}
				stk1.push_back(arr[i]);
				i++;
			}
		}
		else if(arr[i]<stk1.back())
		{
			while(!stk1.empty() && arr[i]<stk1.back())
			{
				stk2.push_back(stk1.back());
				stk1.pop_back();
			}
			stk1.push_back(arr[i]);
			i++;
		}
	}
	if(i=n && !stk2.empty())
	{
		while(!stk2.empty())
			{
				stk1.push_back(stk2.back());
				stk2.pop_back();	
			}	
	}
	for(i=0;i<stk1.size();i++)
	cout<<stk1[i]<<" ";
}
