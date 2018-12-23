// integers in cpp
#include <iostream>
#include <limits>

using namespace std;

int main(){
	int inum = 1;
	unsigned uinum = 1;
	signed sinum = -10;
	long lnum = 1000;
	short snum = 90;
	cout<<"integer "<<inum<<"unsigned-int "<<uinum<<"signed-int "<<sinum<<"long-int "<<lnum<<"short-int "<<snum<<flush;
	cout<<"INT_MAX : "<<INT_MAX<<endl;
	cout<<"INT_MIN : "<<INT_MIN<<endl;
	cout<<"LONG_MAX : "<<LONG_MAX<<endl;
	cout<<"LONG_MIN : "<<LONG_MIN<<endl;
	cout<<"SIZE OF INT : "<<sizeof(int)<<endl;
	cout<<"SIZE OF LONG : "<<sizeof(long)<<endl;
	cout<<"SIZE OF SHORT : "<<sizeof(short)<<endl;
	cout<<"SIZE OF SIGNED INT : "<<sizeof(signed long)<<endl;
	cout<<"SIZE OF UNSIGNED INT : "<<sizeof(unsigned short)<<endl;
}
