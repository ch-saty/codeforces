#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	int a=0,b=0,c=0;
	for(int i=0;i<n;i+=3){
		a+=ar[i];
	}
	for(int i=1;i<n;i+=3){
		b+=ar[i];
	}
	for(int i=2;i<n;i+=3){
		c+=ar[i];
	}
	int mx=max(max(a,b),max(b,c));
	
	if(mx==a){
		cout<<"chest"<<endl;
	}
	else if(mx==b){
		cout<<"biceps"<<endl;
	}
	else{
		cout<<"back"<<endl;
	}

}
