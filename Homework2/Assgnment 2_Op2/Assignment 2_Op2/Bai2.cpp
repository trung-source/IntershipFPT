#include<iostream>
#include<string.h>
#include <stdlib.h>

using namespace std;


// SAP XEP GIAM DAN
void swap_ptr(int* a) {
	
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (*(a + i) < *(a + j)) {
				int temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
}



// SAP XEP TANG DAN
void swap_ptr_2(int* a) {
	
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (*(a + i) > *(a + j)) {
				int temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
}
	
	

int main(){

	int* Arr1 = new int[10];
	cout << "\n\nArr1:"<<endl;
	for (int i = 0; i < 10; i++) {
		*(Arr1 + i) = rand();
		cout << *(Arr1 + i) << " ";
	}
	
// SAP XEP GIAM DAN	
	swap_ptr(Arr1);

	cout << "\nAfter: "<<endl;
	for (int i = 0; i < 10; i++) {
		cout << *(Arr1 + i) << " ";
	}


	//-----------------------------
	int* Arr2 = new int[10];
	
	
	for(int i = 0;i < 10;i++){
		*(Arr2+i) = *(Arr1+i);
	}
	
//	memcpy(&Arr2,&Arr1,10);
//	
	
	
	

	cout << "\n\nArr2:"<<endl;
	for (int i = 0; i < 10; i++) {
		cout << *(Arr2 + i) << " ";
	}
	
	
// SAP XEP TANG DAN
	swap_ptr_2(Arr2);

	cout << "\nAfter: "<<endl;
	for (int i = 0; i < 10; i++) {
		cout << *(Arr2 + i) << " ";
	}

	cout << "\n\nArr3:"<<endl;
	
	int* Arr3 = new int[20];
	
	for(int i = 0;i < 10;i++){
		*(Arr3+i) = *(Arr1+i);
		*(Arr3+i+10) = *(Arr2+i);
	}
	
	//memcpy(&Arr3,&Arr1,10);

	//memcpy(&Arr3,&Arr2,10);

	for (int i = 0; i < 20; i++) {
			cout << *(Arr3 + i) << " ";
		}	
	delete[] Arr1;
	delete[] Arr2;
	delete[] Arr3;


	return 0;
}
