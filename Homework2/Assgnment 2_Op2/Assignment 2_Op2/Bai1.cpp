#include<iostream>
#include<string.h>
using namespace std;

int main (){

	int* p = new int(10);
	int* q = p;
	cout << *p << endl;
	cout << q << endl;

	delete p;

	cout << q << endl;
	cout << *p << endl;

    if(p == NULL){
        cout << "Bang NULL";
    }
    else{
        cout << "Khac NULL";
    }
	return 0;
}
