//pointers in cpp
#include<iostream>
using namespace std;

int main(){
	int a = 10;
	cout<<"Value of a: "<<a<<endl;
	cout<<"Address of a: "<<&a<<endl;
	cout<<"Value at Address of a: "<<*(&a)<<endl;
	int *ab = &a;
	cout<<"Address of a is Value of ab: "<<ab<<endl;
	cout<<"Address of ab: "<<&ab<<endl;
	cout<<"Value at Address of ab is Address of a: "<<*(&ab)<<endl;
	cout<<"Value at Address of a: "<<*ab<<endl;
	*ab = 11;
	cout<<"Value of a: "<<a<<endl;
	a = 12;
	cout<<"value of b: "<<a<<endl;
	return 0;
}
	
