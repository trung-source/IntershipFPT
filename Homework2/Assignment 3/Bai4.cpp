#include<iostream>
#include<string.h>
#include <stdlib.h>

using namespace std;


int main() {
	
	char *n = new char[100];
	cout << "Nhap so can kiem tra: ";
	cin >> n;
	
	cout << "So vua nhap:  " << n << endl;
	bool check = true;
	for(int i = 0;i < strlen(n)/2;i++){
		
		if(n[i] == n[strlen(n)-i-1]){
			continue;
		}else{
			check = false;
			
			break;
		}
	}
	
	if (check == true){
		cout << n <<" is palindrome"<<endl;
	}else{
		cout << n <<" is not palindrome"<<endl;
	}

	delete[]n;
	



	return 0;
}
