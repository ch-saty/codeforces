#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c,d;
	cin>>a>>b>>c;
	if(c.size()!=a.size()+b.size()){
		cout<<"NO";
		return 0;
	}
	
	else{
	bool f=true;
	string d=a+b;
	sort(d.begin(), d.end());
	sort(c.begin(), c.end());

	for(int i=0;i<d.size();i++)
		if(d[i]!=c[i])
			f=false;
	
	if(f)
		cout<<"YES";
	else
		cout<<"NO";
	}
}
