#include<iostream>
#include<string.h>
#include <stdlib.h>

using namespace std;


// SAP XEP GIAM DAN
void swap_ptr(int* a, int size) {

	for (int i = 0; i < size-1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(a + i) < *(a + j)) {
				int temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
}



// SAP XEP TANG DAN
void swap_ptr_2(int* a, int size) {

	for (int i = 0; i < size-1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(a + i) > *(a + j)) {
				int temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
}


int* inputArrayExtend(int *size) {
	int n = 0;

	int m = 0;
    int maxSize = *size;

	int* p = new int[maxSize];
	cout << "CHUONG TRINH NHAP SO (EOF de ngung nhap)";
	n++;
	cout << "\n\tNhap so thu " << n << ": ";
	
	while ((cin >> m)) {
		

		if (maxSize < n) {
//			cout << "MANG DAY: " << "SIZE: " << maxSize << "   n: " << n << endl;
			int* q = new int[maxSize * 2]; //create new array
//			memcpy(&q, &p, maxSize); //loop, copy each element to the new array
			 for(int i=0 ; i<maxSize ; i++){
		        *(q+i) = *(p+i);
		    }
			delete[] p; //deallocate the memory that is no longer necessary (the old array)
			p = q; //now you are working with the new array
			maxSize = maxSize * 2;
		}


		
		
        *size +=1;
        p[n-1] = (m);
        n++;
        cout << "\n\tNhap so thu " << n << ": ";




	}
	//cout << *(p) << endl;
	//cout << sizeof(p) << endl;
	return p;


}

int main() {
	
	
	int* Arr1 = NULL;
	int size = 2;
	Arr1 = inputArrayExtend(&size);


    cout << "\nDAY SO NGUYEN DA NHAP: ";
	for (int i = 0; i < size-2; i++) {
		cout << *(Arr1 + i) << " ";
	}
	
	

	// SAP XEP TANG DAN	
	swap_ptr_2(Arr1,size-2);

	cout << "\nSau khi sap xep tang dan:  " << endl;
	for (int i = 0; i < size-2; i++) {
		cout << *(Arr1 + i) << " ";
	}

	// SAP XEP GIAM DAN	
	swap_ptr(Arr1, size - 2);
	cout << "\nSau khi sap xep giam dan:  " << endl;
	for (int i = 0; i < size - 2; i++) {
		cout << *(Arr1 + i) << " ";
	}



	delete[] Arr1;




	return 0;
}
