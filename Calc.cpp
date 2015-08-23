#include<iostream>
using namespace std;
int main(){
	int a,b,x;
	cout<<"Write one number from 1 to 4 if you write:"<<endl<<"1)a+b"<<endl<<"2)a-b"<<endl<<"3)a*b"<<endl<<"4)a/b"<<endl;
	cin>>x;
	cout<<"Okay, please enter two numbers a and b:";
	if(x==1){
		cin>>a>>b;
		cout<<a<<"+"<<b<<"="<<a+b<<endl;
	}
	if(x==2){
		cin>>a>>b;
		cout<<a<<"-"<<b<<"="<<a-b<<endl;
	}	
	if(x==3){
		cin>>a>>b;
		cout<<a<<"*"<<b<<"="<<a*b<<endl;
	}
	if(x==4){
		cin>>a>>b;
		cout<<a<<"/"<<b<<"="<<a/b<<endl;
	}
	return 0;
}
