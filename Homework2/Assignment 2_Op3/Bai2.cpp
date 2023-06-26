#include<iostream>
#include<string.h>
using namespace std;


void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main (){

	int a = 0;
	int b = 0;
	int sum =0;
	cout << "Nhap a,b:" << endl;
	cout << "\ta = ";
	cin >> a;
	cout << "\tb = ";
	cin >> b;
	
	swap(a, b);
	
	cout << "Ket Qua:" << endl;
	cout << "\ta = " << a << endl;
	cout << "\tb = " << b << endl;

	

	return 0;
}
