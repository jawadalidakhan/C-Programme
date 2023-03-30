#include<iostream>
using namespace std;
int main(){
	system("color 8e");
	int n;
	cout<<"Enter Rows:";
	cin>>n;
	for(int i=n;i>=1;i--)  //condition for decremnet that decrease numbers when n>1;
	{
		for(int j=1;j<=i;j++)   //condition that increase number wwhen j<i;
		{
			cout<<j;
		}
		cout<<endl;
	}
}
