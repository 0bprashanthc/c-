//if for cpp
#include <iostream>
using namespace std;

int main(){
	string password = "Prashant";
	string input_password;
	cout << "Enter Password: " << endl;
	cin >> input_password; 
	if (input_password == password){
		cout<<"Success!!"<<endl;
	}
	else if (input_password == "Prashanth"){
		cout << "Prashanth!!!"<<endl;
	}
	else {
		cout <<"Failure!!"<<endl;
	}
	return 0;
}
