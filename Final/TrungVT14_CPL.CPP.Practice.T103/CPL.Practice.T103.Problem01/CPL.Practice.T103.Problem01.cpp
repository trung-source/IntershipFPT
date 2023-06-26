#include<iostream>

using namespace std;

// In va tra ve ket qua kiem tra
bool isPerfectSquareNumber(long long int number){
	for(int i = 1;i<number/2;i++){
		// So nguyen kiem tra can chia het cho so bi chia va khi chia thi ra thuong bang so bi chia
		if(number%i==0 && number/i==i){
			cout << number << " is a Perfect Square Number because "<< number << " = "<<i << "*" <<i<<endl; 
			return true;
		}
	}
	// Tra ve false vi khong co gia dinh thoa man
	cout << number << " is not a Perfect Square Number "<<endl;
	return false;
}

int main(){
	
	long long int n = 0;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	
	isPerfectSquareNumber(n);
	
	
	return 0;
}
