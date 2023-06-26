#include<iostream>

using namespace std;

int main (){
	
	int n = 0;
	
	while(n<=0){
	
	cout << "Nhap so cac so muon nhap: ";
	cin >> n;
	}
	
	int *p = new int[n];
	int m = 0;
	
	for(int i = 0; i < n; i++){
		cout << "\n\tNhap so thu " << i +1 << ": ";
		cin >> m;
		p[i] = m;
	} 
	
	cout << "\nSo vua nhap la: ";
	for(int i = 0; i< n;i++){
		cout << *(p+i) << " ";
	}
	
	delete[] p;
	
	return 0;
}
