#include<iostream>
#include<string.h>

using namespace std;


int main()
{
	string s1,s2;
	cout << "Nhap chuoi 1: ";
	cin >> s1;
	cout << "Nhap chuoi 2: ";
	cin >> s2;
	
	if(s1.length() > s2.length() ){
		cout << "Chuoi 1 dai hon: " << s1 << endl;
	}else if (s1.length() == s2.length()){
		cout << "2 chuoi co do dai bang nhau." << endl;
	}else{
		cout << "Chuoi 2 dai hon: " << s2 << endl;
	}
	
	return 0;
}
