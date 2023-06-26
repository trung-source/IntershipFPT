#include<iostream>
#include<string.h>
using namespace std;

int* inputArrayExtend(int *size) {
	int n = 0;

	int m = 0;
    int maxSize = *size;

	int* p = new int[maxSize];
	cout << "CHUONG TRINH NHAP SO";
	n++;
	cout << "\n\tNhap so thu " << n << ": ";
	
	while ((cin >> m)) {
		

		if (maxSize < n) {
//			cout << "MANG DAY: " << "SIZE: " << maxSize << "   n: " << n << endl;
			int* q = new int[maxSize * 2]; 
//			memcpy(&q, &p, maxSize); 
			 for(int i=0 ; i<maxSize ; i++){
		        *(q+i) = *(p+i);
		    }
			delete[] p; 
			p = q; 
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

int main (){

	int* p = NULL;
	int size = 2;
	p = inputArrayExtend(&size);


    cout << "\nDAY SO NGUYEN DA NHAP: ";
	for (int i = 0; i < size-2; i++) {
		cout << *(p + i) << " ";
	}

	delete[] p;


	return 0;
}
