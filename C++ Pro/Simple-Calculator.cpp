#include<iostream>
using namespace std;
int main(){
	system("color 3e");
	int i;
	int j;
	char op;
	cout<<"\n\n\n";
	cout<<"\t\t\t\tEnter 2 Values:"<<endl;
	cout<<"\t\t\t\t";
	cin>>i>>j;
	cout<<"\t\t\t\tEnter Operation:\n";
	cout<<"\t\t\t\t";
	cin>>op;
	switch(op){
			case '+':
				cout<<"\t\t\t\t";
				cout<<"Your answer is \n";
				cout<<"\t\t\t\t";
				cout<<i+j;
				break;
					case '-':
						cout<<"\t\t\t\t";
						cout<<"Your answer is \n";
						cout<<"\t\t\t\t";
						cout<<i-j;
						break;
							case '*':
								cout<<"\t\t\t\t";
								cout<<"Your answer is \n";
								cout<<"\t\t\t\t";
								cout<<i*j;
								break;
									case '/':
										cout<<"\t\t\t\t";
										cout<<"Your answer is \n";
										cout<<"\t\t\t\t";
										cout<<i/j;
										break;
	}
}
