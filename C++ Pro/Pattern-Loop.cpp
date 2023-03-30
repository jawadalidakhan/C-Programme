#include<iostream>
using namespace std;
int main(){
	system("color 9e");
	int col,row;
	cout<<"\n\n\n\n";
	cout<<"\t\t\t\tEnter Columns & Rows"<<endl;
	cout<<"\t\t\t\t";
	cin>>col>>row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			cout<<"*";
		}
		cout<<"\t\t\t\t";
		cout<<"\n";
	}
}
