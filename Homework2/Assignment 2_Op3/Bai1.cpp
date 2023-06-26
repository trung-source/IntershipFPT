#include<iostream>
#include<string.h>
using namespace std;

int main (){

	int a = 0;
	int b = 0;
	int sum =0;
	cout << "Nhap a,b:" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	int* p = new int(a);
	int* q = new int(b);

	sum = *p + *q;
	cout << "TONG:" << sum;

	delete p, q;

	return 0;
}
