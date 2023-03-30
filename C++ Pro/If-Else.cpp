#include<iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	system("color  3e");
	int i;
	cin>>i;
	if(i>10){
		cout<<"It's Greater";
	}
	else{
		cout<<"It's Lesser";
	}
}
