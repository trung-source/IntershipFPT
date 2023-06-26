#include<iostream>

using namespace std;

int main (){
	int r1 = 0, r2 = 0;
	int c1 = 0, c2 = 0;
	
	int c = 0;
	
	
	cout << "Ma tran 1:" << endl;
	cout << "\tSo hang: "; 
	cin >> r1;
	cout << "\tSo cot: ";
	cin >> c1;

	cout << "Ma tran 2:" << endl;
	cout << "\tSo hang: ";
	cin >> r2;
	cout << "\tSo cot: ";
	cin >> c2;

	/*int matrix1[r1][c1];matrix2[r2][c2]*/

	int* arr1 = new int[r1 * c1];
	int* arr2 = new int[r2 * c2];

	cout << "Ma tran 1:" << endl;
	for (int i = 0; i < r1; i++) {
		// Them gia tri
		cout << "\tNhap gia tri hang " << i+1 << " (Nhap " << c1 << " phan tu): ";
		for (int j = 0; j < c1; j++) {

			
			cin >> *(arr1 + i * c1 + j) ;
		}
	}
	

	// Traverse the 2D array
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {

			
			cout <<"\t" << *(arr1 + i * c1 + j)
				<< " ";
		}
		cout << endl;
	}
	
	
	cout << "Ma tran 2:" << endl;
	for (int i = 0; i < r2; i++) {
		// Them gia tri
		cout << "\tNhap gia tri hang " << i+1 << " (Nhap " << c2 << " phan tu): ";
		for (int j = 0; j < c2; j++) {

			
			cin >> *(arr2 + i * c2 + j) ;
		}
	}
	

	// Traverse the 2D array
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {

		
			cout <<"\t" << *(arr2 + i * c2 + j)
				<< " ";
		}
		cout << endl;
	}

	if (r1 == r2 & c1 == c2){
		int* sum = new int[r2 * c2];
		
		cout << " Ma tran tong cua 2 ma tran: " << endl;

		for (int i = 0; i < r2; i++) {
		
			for (int j = 0; j < c2; j++) {				
				*(sum + i * c2 + j) =  *(arr1 + i * c2 + j) + *(arr2 + i * c2 + j) ;
			}
		}
		
	
		// Traverse the 2D array
		for (int i = 0; i < r2; i++) {
			for (int j = 0; j < c2; j++) {
	
			
				cout <<"\t" << *(sum + i * c2 + j)
					<< " ";
			}
			cout << endl;
		}
		
		
		delete[] sum;
		
		
	}
	else{
		cout << "Khong the tinh tong 2 ma tran boi 2 ma tran khac chieu" << endl;
	}



	//Delete the array created
	delete[] arr1;
	delete[] arr2;

	
	return 0;
}
