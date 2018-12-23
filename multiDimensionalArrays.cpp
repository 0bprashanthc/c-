//Multi-Dimentional Arrays for cpp
#include<iostream>
using namespace std;

int main(){
	short ints[3][3];
	short count = 0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" INDEX : "<<i<<","<<j<<" VALUE : "<<ints[i][j]<<endl;
		}
	}
	cout<<"SIZE OF 3x3 ARRAY: "<<sizeof(ints)<<endl;
	cout<<"COUNT : "<<count<<endl;
	return 0;
}
