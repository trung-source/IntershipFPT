#include<iostream>
#include<string.h>
using namespace std;




int main (){
	int n = 0;


	cout << "Nhap do dai cua day:";
	cin >> n;

	cout << "Nhap chuoi ky tu: ";
 
    char str[n];
    cin >>   str;
 
    cout <<"Chuoi ky tu vua nhap: "<< str;
    
    char *p = str;
	
	int count = 0;
	while(*p != '\0'){
		count++;
		p++;
	}
	cout << "\nDo dai cua ky tu: ";
	cout << count;


	

	return 0;
}
