using namespace std;
#include<iostream>
#include<vector>
int main()
{
    string s;
    int i,n,j;
    //cout<<"enter the string"<<endl;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>s;
	    vector<char> arr;
	    if(s[0]==')'||s[0]=='}'||s[0]==']')
	    {
	    	cout<<"NO"<<endl;
		}
		else
	    {
		    for(i=0;i<s.length();i++)
		    {
		        if(s[i]=='(' || s[i]=='[' || s[i]=='{' )
		        arr.push_back(s[i]);
		        else if( s[i]==')' && arr.back()=='(')
		        arr.pop_back();
		        else if(s[i]=='}' && arr.back()=='{')
		        arr.pop_back();
		        else if(s[i]==']' && arr.back()=='[' )
		        arr.pop_back();
		        else
		        arr.push_back(s[i]);
		    }
		    if (arr.empty())
		    cout<<"YES"<<endl;
		    else
		    cout<<"NO"<<endl;   
	    }
   }
}
