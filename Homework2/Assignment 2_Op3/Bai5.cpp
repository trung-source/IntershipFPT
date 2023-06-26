#include<iostream>
#include<string.h>
using namespace std;




int main (){
	int n = 0;


	cout << "Nhap do dai cua day:";
	cin >> n;
	
	int a[n];
	
	cout << "Nhap day so nguyen (Co the dung EOF): "<< endl;
 
 	for(int i = 0; i < n;i++){
 		cout << "\tSo thu " << i + 1 << ": ";
 		if(cin >> a[i]){
// 			cout << a[i] << endl;
		 }
		 else{
		 	break;
		 }
	 }


    int *p = a;
	
	int count = 0;
	while(*p != '\0'){
		count++;
		p++;
	}
	
	cout << "Chuoi ban dau la :";
	for(int i = 0; i<count;i++){
		cout << a[i] << " ";
	}
	cout << "\nChuoi in nguoc lai: ";
	for(int i = 0; i<count;i++){
		cout << *(p - i -1) << " ";
	}



	

	return 0;
}
