#include<iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	system("color 3e");
	int a,b,c;
	cout<<"\t\t\t\n\n\n";
	cout<<"Enter Three Values: \t\n";
	cout<<"Enter 1st Value: \t\n";
	cin>>a;
	cout<<"Enter 2nd Value: \t\n";
	cin>>b;
	cout<<"Enter 3rd Value: \t\n";
	cin>>c;

	if(a>b){
		if(a>c){
			cout<<"\t\t\t\nGreater Number is:";
			cout<<a;
		}
		else{
			cout<<"\t\t\t\nGreater Number is:";
			cout<<c;
		}
	}
	else{
		if(b>c){
			cout<<"\t\t\t\nGreater Number is:";
			cout<<b;
		}
		else{
			cout<<"\t\t\t\nGreater Number is:";
			cout<<c;
		}
	}
}
