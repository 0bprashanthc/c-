#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int *ada = &a;
	cout<<"a: "<<a<<endl;
	cout<<"*a: "<<*ada<<endl;

	int s = 1;
	int *ads = &s;
	cout<<"s: "<<s<<endl;
	cout<<"*s: "<<*(&ads)<<endl;
	
	char se = 65;
	cout<<"se: "<<se<<endl;
	return 0;
}
