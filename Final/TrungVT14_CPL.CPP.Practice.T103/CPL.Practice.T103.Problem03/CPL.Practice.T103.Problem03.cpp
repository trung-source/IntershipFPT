#include<iostream>

using namespace std;

// Ham dem
void numberOccurrences(char* str,char c){
	// Bien dem so lan co mat cua ky tu
	int count = 0;
	// Day luu ket qua
	string s = "[";

	for(int i = 0;i<str[i] != '\0'; i++){
		// Neu co mat ky tu
		if(str[i]==c){
			// Cong vi tri cua ky tu vao day ket qua
			if(i<10){
				// Voi vi tri cua ky tu nho hon 10
				s+=char(i+48);
			}else{
				// Voi vi tri cua ky tu lon hon 10
				// temp se luu dao nguoc cua vi tri ky tu -> reverse lai
				string temp = "";
				int n = i;
				// Neu vi tri lon hon 10 thi tiep tuc xu ly
				while(n>=10){
					// temp1 de luu gia tri don vi cuoi cua vi tri
					int temp1 = n % 10;
					// Them vao day temp
					temp += char(temp1+48);
					
					// Cap nhap vi tri
					n = n / 10;

				
				}
				// them ky tu cuoi cung
				temp += char(n+48);
				
				// Dao lai chuoi temp
				for(int i = 0; i<temp.length()/2;i++){
					swap(temp[i], temp[temp.length() - i - 1]);
				}
			
			
				//Them vao chuoi ket qua
				s+=temp;
			}
			s+=", ";
			// Tang bien dem
			count++;
		}
	}
	
	// Bo 2 ky tu ", "
	s = s.substr(0, s.size()-2);
	s+="]";
	cout <<"The number of occurrences of \'" << c << "\' in string is " << count << ", index = " << s;
}

int main(){
	char* str = new char[100];
	char c;
	cout << "Nhap day ky tu can kiem tra: "; cin.getline(str,100);
	cout << "Nhap ky tu can kiem tra: "; cin >> c;
	
	numberOccurrences(str,c);

	
	return 0;
}
