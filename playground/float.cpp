//float variables in cpp
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	float f = 76.123456789;
	cout<<"SCIENTIFIC VALUE OF F :: "<<setprecision(20)<<scientific<<f<<endl;
	cout<<"FIXED VALUE OF F :: "<<setprecision(20)<<fixed<<f<<endl;
	cout<<"SIZE OF FLOAT VARIABLES :: "<<sizeof(f)<<endl;

	double d = 76.123456789123456789;
	cout<<"SCIENTIFIC VALUE OF D :: "<<setprecision(20)<<scientific<<d<<endl;
	cout<<"FIXED VALUE OF D :: "<<setprecision(20)<<fixed<<d<<endl;
	cout<<"SIZE OF DOUBLE VARIABLES :: "<<sizeof(d)<<endl;

	long double l = 76.123456789123456789;
	cout<<"SCIENTIFIC VALUE OF L :: "<<setprecision(20)<<scientific<<l<<endl;
	cout<<"FIXED VALUE OF L :: "<<setprecision(20)<<fixed<<l<<endl;
	cout<<"SIZE OF LONG DOUBLE VARIABLES :: "<<sizeof(l)<<endl;
}
