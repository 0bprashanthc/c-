//arrays in cpp
#include<iostream>
using namespace std;

int main(){
	int ints[5]={1,1,1,1,1};
	char chars[5]={};
	float floats[5] = {1.2,2.4,3.6,4.8};
	string strings[5] = {"prashant","surabhi","sio","cisco","i"};
	cout<<endl<<"INTEGERS ARRAY "<<endl;
	cout<<"============="<<endl;
	for(int i=0;i<5;i++){
		ints[i] = 12*i;
		cout<<"INDEX : "<<i<<" VALUE : "<<ints[i]<<endl;
	}
	cout<<ints[4]<<endl;
	cout<<endl<<"CHARS ARRAY"<<endl;
	cout<<"============="<<endl;
	for(int i=0;i<5;i++){
		chars[i] = 65+i;
		cout<<"INDEX : "<<i<<" VALUE : "<<chars[i]<<endl;
	}
	cout<<endl<<"FLOATS ARRAY"<<endl;
	cout<<"============="<<endl;
	for(int i=0;i<5;i++){
		floats[i] = 12*i;
		cout<<"INDEX : "<<i<<" VALUE : "<<floats[i]<<endl;
	}
	cout<<endl<<"STRING ARRAYS"<<endl;
	cout<<"============="<<endl;
	for(int i=0;i<5;i++){
		cout<<"INDEX : "<<i<<" VALUE : "<<strings[i]<<endl;
	}
	return 0;
}
