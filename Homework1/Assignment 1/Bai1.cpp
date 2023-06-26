#include<iostream>

using namespace std;

int main(){
	
	int myNum = 50;
	int myNum1 = 19;
	myNum += myNum1;
	int numX = 0, numY = 0;
//	short int: 2 bytes: -32 768 -> 32 767
	numX = 32767 - myNum;
	myNum += numX;
	numY = -32768 - myNum1;
	myNum1 += numY;
	
	cout << numX << endl;
	cout << numY <<endl;
	cout <<myNum << myNum1;
	
	
	return 0;
}
