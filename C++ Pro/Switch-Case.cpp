#include<iostream>
using namespace std;
int main(){
      char i;
      cout<<"Hello Enter A value"<<endl;
      cin>>i;
      switch(i){
            case 'a':
            cout<<"It's Monday";
            break;
            case 'b':
            cout<<"It's Tuesday";
            break;
            case 'c':
            cout<<"It's Wednesday";
            break;
            default:
            	cout<<"Hello Enter again";
            	break;
      }
}
