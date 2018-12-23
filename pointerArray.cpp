//pointers and arrays in cpp
#include<iostream>
using namespace std;

int main(){
	string names[] = {"prashant","surabhi","saidul"};
	int n = names;
	cout<<"names: "<<names<<endl;
	cout<<"address of names: "<<&names<<endl;
	cout<<"*n: "<<*n<<endl;
	n += 1;
	cout<<"*n: "<<*n<<endl;
	n += 1;
	cout<<"*n: "<<*n<<endl;
	return 0;
}
