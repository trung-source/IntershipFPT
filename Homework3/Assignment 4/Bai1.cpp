#include<iostream>

using namespace std;

void dectobin(int a){
	int bin[32];
	int i = 0;
	while(a > 0){
		bin[i] = a % 2;
		a = a / 2;
		i++;
	}
	if (i<=8){
		for(int t = i;t<8;t++){
			bin[t] = 0;
		}
	}
	
	
	for (int j = 7; j >= 0; j--)
        cout << bin[j];
}

int main(){
	
	int a = 0, b = 0;
	cout << "Nhap so thu nhat: ";
	cin >> a;
	cout << "\tNhi phan: ";
	dectobin(a);
	

	cout << "\nNhap so thu hai: ";
	cin >> b;
	cout << "\tNhi phan: ";
	dectobin(b);
	
	cout << "\n\nPhep AND: " << (a & b) << endl;
	cout << "\tNhi phan: ";
	dectobin((a & b));
	cout << "\nPhep OR: " << (a | b) << endl;
	cout << "\tNhi phan: ";
	dectobin((a | b));
	
	cout << "\nPhep XOR: " << (a ^ b) << endl;
	cout << "\tNhi phan: ";
	dectobin((a ^ b));
	
	return 0;
}
