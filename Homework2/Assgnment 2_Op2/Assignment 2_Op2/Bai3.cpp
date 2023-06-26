#include<iostream>
#include<string.h>
#include <stdlib.h>

using namespace std;



	
// SAP XEP GIAM DAN
void swap_ptr(char* a) {

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (*(a + i) < *(a + j)) {
				char temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
}


// SAP XEP TANG DAN
void swap_ptr_2(char* a) {
	
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (*(a + i) > *(a + j)) {
				char temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
}
	


int main(){

	char* arr1 = new char[10];
	

	cout << "\n\nArr1:" << endl;
	for (int i = 0; i < 10; i++) {
//		TEST WITH a,b,c...
//		*(arr1 + i) = 'a'+i;
		
//		RANDOM CHARACTERS
		*(arr1 + i) = rand();
		cout << *(arr1 + i) << " ";
	}

// SAP XEP GIAM DAN
	swap_ptr(arr1);

	cout << "\nAfter: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << *(arr1 + i) << " ";
	}
	
	
	//-----------------------------
	char* arr2 = new char[10];
	
	cout << "\n\nArr2:" << endl;
	for(int i = 0;i < 10;i++){
		*(arr2+i) = *(arr1+i);
	}
	
	for (int i = 0; i < 10; i++) {
		cout << *(arr2 + i) << " ";
	}
	


// SAP XEP TANG DAN
	swap_ptr_2(arr2);

	cout << "\nAfter: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << *(arr2 + i) << " ";
	}
	

	cout << "\n\nArr3:"<<endl;
	
	char* arr3 = new char[20];
	
	for(int i = 0;i < 10;i++){
		*(arr3+i) = *(arr1+i);
		*(arr3+i+10) = *(arr2+i);
	}

	for (int i = 0; i < 20; i++) {
			cout << *(arr3 + i) << " ";
		}	

			
	delete[] arr1;
	delete[] arr2;
	delete[] arr3;

	return 0;
}
