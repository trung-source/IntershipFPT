#include<iostream>

using namespace std;

void Prime(int a){
	int n = a/2;
	int p = a/2;
	while(n<=a){
		bool check = true;
		for(int i = 2;i<=n/2;i++){
			if(n%i == 0){
				check = false;
				break;
			}
		}
		if(check){
		p = n;
		}
		n++;
	}
	cout << "SO NGUYEN TO CAN TIM: " << p;
	
}

int main(){
	
	int a = 0;
	cout << "Nhap so: ";
	cin >> a;
	if (a > 999999 || a < 0){
		return -1;
	}
	else{
		
		Prime(a);
		
		
		return 0;
	}
	
}
