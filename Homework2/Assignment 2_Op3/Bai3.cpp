#include<iostream>
#include<string.h>
using namespace std;


int main (){

	int* arr = new int[10];
	int* sum = new int(0);
	for (int i = 0; i < 10; i++) {
		cout << "Nhap so thu " << i + 1 << ": ";
		cin >> *(arr + i);
		*sum += *(arr + i);
	}

	cout << "Mang vua nhap: ";
	for (int i = 0; i < 10; i++) {
		cout << *(arr + i) << " ";
	}

	cout << "\nTong cac phan tu mang = " << *sum;

	delete[] arr;
	delete sum;
	

	return 0;
}
