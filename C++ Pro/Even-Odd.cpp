#include<iostream>
using namespace std;
int main(){
	system("color 8e");
	cout<<"Hello, Please Enetr A Number:";
	int n;
	cin>>n;
	if(n%2==0){
		cout<<n<<" is An Even Number"<<endl;
	}
	else{
		cout<<n<<" is An Odd Number";
	}
}
