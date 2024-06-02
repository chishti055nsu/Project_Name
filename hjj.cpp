#include<bits/stdc++.h>
using namespace std ;
int main()
{
	string s ;
	vector<string>v;
	while(1)
	{

		cin>>s;
		if(s=="*")break;
		v.push_back(s);
	}
	for(int i = 0 ; i<v.size();++i)
	{
		if(v[i]=="Hajj")
		cout<<"Case "<<i+1<<": "<<"Hajj-e-Akbar"<<endl;
		else
			cout<<"Case "<<i+1<<": "<<"Hajj-e-Asghar"<<endl;
	}
}