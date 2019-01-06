//functions in cpp
#include<iostream>
#include "utils.h"
using namespace std;

int main(){
	displayOptions();
	processChoice(getChoice());
	return 0;
}

void displayOptions(){
	cout<<"Enter choice from the menu: "<<endl;
	cout<<"\t1. Search"<<endl;
	cout<<"\t2. Store"<<endl;
	cout<<"\t3. Delete"<<endl;
}

int getChoice(){
	int choice;
	cin>>choice;
	return choice;
}

void processChoice(int choice){
	switch(choice){
		case 1:
			cout<<"Searching.."<<endl;
			break;
		case 2:
			cout<<"Storing.."<<endl;
			break;
		case 3:
			cout<<"Deleting.."<<endl;
			break;
		default:
			cout<<"Invalid Choice"<<endl;
			break;
	}
}

