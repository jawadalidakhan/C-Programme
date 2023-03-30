
#include<iostream>
using namespace std;
int main(){
	int pocket;
	pocket=3000;
	for(int date=1;date<=30;date++){
		if(date%2==0){
			continue;
		}
		if(pocket==0){
			break;
		}
		cout<<endl;
		cout<<date<<":";
		cout<<"\tYou can go Out";
			pocket=pocket-300;
	}
}
