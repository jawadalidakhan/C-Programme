#include<iostream>
using namespace std;
int main(){
	//Hollow Rectangle Pattern:
	system("color 9e");
	cout<<"\n\n\n\n";
	cout<<"Enter Rows And Columns:";
	int row,col;
	cin>>row>>col;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(i==1 || i==row ||j==1 || j==col){
				cout<<"*";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
